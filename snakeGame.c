#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <process.h>

#define UP    72
#define DOWN  80
#define LEFT  75
#define RIGHT 77

int  length;
int  bend_no;
int  len;
char key;

void record();
void load();

int life;

void Delay(long double);
void Move();
void Alimento();

int Pontos();
void Print();
void gotoxy(int x, int y);
void GotoXY(int x,int y);
void Bend();
void Boarder();

void Down();
void Left();
void ParaCima();
void Right();

void ExitGame();
int Scoreonly();

struct coordinate {
    int x;
    int y;
    int direction;
};

typedef struct coordinate coordinate;

coordinate head, bend[500],food,body[30];

int main() {
    system("title Snake Game");
    system("color 03");
    char key;
    Print();
    system("cls");
    load();
    length=5;
    head.x=25;      /**Estrutura coordinate*/
    head.y=20;      /**Estrutura coordinate*/
    head.direction = RIGHT; /**Estrutura coordinate*/
    Boarder();
    Alimento();
    life=3;
    bend[0] = head; /**Estrutura coordinate*/
    Move();
    return 0;
}

void Move() {
    int a,i;
    do {
        Alimento();
        fflush(stdin);
        len=0;
        for(i=0; i<30; i++) {
            body[i].x=0;
            body[i].y=0;
            if(i==length)
                break;
        }
        Delay(length); /**void Delay(long double)*/
        Boarder();
        if(head.direction==RIGHT)
            Right();
        else if(head.direction==LEFT)
            Left();
        else if(head.direction==DOWN)
            Down();
        else if(head.direction==UP)
            ParaCima();
        ExitGame();
    }
    while(!kbhit()); /**Equanto a Funcao kbhit for diferente de TRUE*/
    a=getch(); /**int a*/
    if(a==27) {
        system("cls");
        exit(0);
    }
    key=getch();
    if( (key==RIGHT&&head.direction!=LEFT&&head.direction!=RIGHT) ||
        (key==LEFT&&head.direction != RIGHT&&head.direction!=LEFT)||
        (key==UP&&head.direction   != DOWN&&head.direction!=UP)   ||
        (key==DOWN&&head.direction != UP&&head.direction!=DOWN)) {
        bend_no++;
        bend[bend_no]=head;/**bend da Estrutura coordinate na posicao do valor int bend_no*/
        head.direction=key;
        if(key==UP) {
            head.y--;
        }
        if(key==DOWN) {
            head.y++;
        }
        if(key==RIGHT) {
            head.x++;
        }
        if(key==LEFT) {
            head.x--;
        }
        Move();
    }
    else if(key==27) {
        system("cls");
        exit(0);
    }
    else {
        printf("\a");
        Move();
    }
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void GotoXY(int x, int y) {
    HANDLE a;
    COORD  b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);
}

void load(){
    int row,col,r,c,q;
    gotoxy(36,14); /**Chamada da função gotoxy(int x, int y)*/
    printf("Carregando...");
    gotoxy(30,15); /**Define a posicao*/
    for(r=1; r<=20; r++) {
        for(q=0;q<=100000000;q++);
        printf("%c",177);
    }
    getch();
}

void Down() {
    int i;
    for(i=0;i<=(head.y-bend[bend_no].y)&&len<length;i++) {
        GotoXY(head.x,head.y-i);
        {
            if(len==0)
                printf("\xdb");
            else
                printf("\xdb");
        }
        body[len].x=head.x;
        body[len].y=head.y-i;
        len++; /**incrementa a variavel len do tipo inteiro*/
    }
    Bend();
    if(!kbhit())
        head.y++;
}

void Delay(long double k) {
    Pontos();
    long double i;
    for(i=0; i<=(10000000); i++);
}

void ExitGame() {
    int i,check=0;
    for(i=4;i<length;i++) {
        if(body[0].x==body[i].x&&body[0].y==body[i].y) {
            check++;
        }
        if(i==length||check!=0)
            break;
    }
    if(head.x<=10||head.x>=70||head.y<=10||head.y>=30||check!=0) {
        life--;
        if(life>=0) {
            head.x=25;
            head.y=20;
            bend_no=0;
            head.direction=RIGHT;
            Move();
        }
        else {
            system("cls");
            printf("Vidas Completadas\nBoa sorte no proximo jogo!!!");
            printf("\nAperte qualquer tecla para sair do jogo\n");
            record();
            exit(0);
        }
    }
}

void Alimento() {
    if(head.x==food.x && head.y==food.y) {
        length++;
        time_t a;
        a=time(0);
        srand(a);
        food.x = rand() % 70;
        if(food.x<=10) {
            food.x+=11;
        }
        food.y=rand()%30;
        if(food.y<=10) {
            food.y+=11;
        }
    }
    else if(food.x==0) {
        food.x=rand()%70;
        if(food.x<=10) {
            food.x+=11;
        }
        food.y=rand()%30;
        if(food.y<=10) {
            food.y+=11;
        }
    }
}

void Left() {
    int i;
    for(i=0; i<=(bend[bend_no].x-head.x) && len<length; i++) {
        GotoXY((head.x+i),head.y);
        {
            if(len == 0) {
                printf("\xdb");
            }
            else {
                printf("\xdb");
            }
        }
        body[len].x = head.x+i;
        body[len].y = head.y;
        len++;
    }
    Bend();
    if(!kbhit()) {
        head.x--;
    }
}

void Right() {
    int i;
    for(i=0; i<=(head.x-bend[bend_no].x) && len<length; i++) {
        body[len].x = head.x-i;
        body[len].y = head.y;
        GotoXY(body[len].x, body[len].y);
        {
            if(len==0) {
                printf("\xdb"); /**Caractere em modo grafico*/
            }
            else {
                printf("\xdb"); /**Caractere em modo grafico*/
            }
        }
        len++;
    }
    Bend();
    if(!kbhit()) {
        head.x++;
    }
}

void Bend() {
    int i,j,diff;
    for(i=bend_no; i>=0 && len<length; i--) {
        if(bend[i].x==bend[i-1].x) {
            diff=bend[i].y-bend[i-1].y;
            if(diff<0)
                for(j=1;j<=(-diff);j++) {
                    body[len].x=bend[i].x;
                    body[len].y=bend[i].y+j;
                    GotoXY(body[len].x,body[len].y);
                    printf("\xdb");
                    len++;
                    if(len==length) {
                        break;
                    }
                }
            else if(diff>0)
                for(j=1;j<=diff;j++) {
                    body[len].x=bend[i].x;
                    body[len].y=bend[i].y-j;
                    GotoXY(body[len].x,body[len].y);
                    printf("\xdb");
                    len++;
                    if(len==length) {
                        break;
                    }
                }
        }
        else if(bend[i].y==bend[i-1].y) {
            diff=bend[i].x-bend[i-1].x;
            if(diff<0)
                for(j=1;j<=(-diff)&&len<length;j++) {
                    body[len].x=bend[i].x+j;
                    body[len].y=bend[i].y;
                    GotoXY(body[len].x,body[len].y);
                    printf("\xdb");
                    len++;
                    if(len==length) {
                        break;
                    }
                }
            else if(diff>0)
                for(j=1; j<=diff && len<length; j++) {
                    body[len].x=bend[i].x-j;
                    body[len].y=bend[i].y;
                    GotoXY(body[len].x,body[len].y);
                    printf("\xdb");
                    len++;
                    if(len==length) {
                        break;
                    }
                }
        }
    }
}

void Boarder() {
    system("cls");
    int i;
    GotoXY(food.x,food.y);
    printf("\xBB1");
    for(i=10;i<71;i++) {
        GotoXY(i,10);
        printf("\xdb");
        GotoXY(i,30);
        printf("\xdb");
    }
    for(i=10;i<31;i++) {
        GotoXY(10,i);
        printf("\xdb");
        GotoXY(70,i);
        printf("\xdb");
    }
}

void Print() {
    printf("\tBem Vindo ao mini Snake game.(Aperte qualquer tecla..)\n");
    getch(); /**Entrada de dados*/
    system("cls"); /**Clear Screen*/
    printf("\tInstrucoes do Jogo:\n");
    printf("\n-> Use as setas para mudar de direcao.\n\n");
    printf("-> Para cima, para baixo, para direita e para esquerda");
    printf("\n\n-> Voce tem 3 vidas disponiveis\n\n");
    printf("-> Para pausar o jogo, aperte qualquer TC no meio do jogo");
    printf("\n\n-> Para sair aperte ESC\n");
    printf("\n\nAperte qualquer tecla para Iniciar o Jogo...");
    if(getch()==27) {
        exit(0);
    }
}

void record() { /**Gravar*/
    char plname[20],nplname[20],cha,c;
    int i,j,px;
    FILE *info;
    info = fopen("record.txt","a+");
    getch();
    system("cls");
    printf("Digite seu nome\n");
    scanf("%[^\n]",plname);
    for(j=0; plname[j]!='\0'; j++) {
        nplname[0]=toupper(plname[0]);
        if(plname[j-1]==' ') {
            nplname[j]=toupper(plname[j]);
            nplname[j-1]=plname[j-1];
        }
        else nplname[j]=plname[j];
    }
    nplname[j]='\0'; /**A string nplname recebe nulo*/
    fprintf(info,"Nome do Jogador :%s\n",nplname);
    time_t mytime;
    mytime = time(NULL);
    fprintf(info,"Played Date:%s",ctime(&mytime));
    fprintf(info,"Pontos:%d\n",px=Scoreonly());
    for(i=0;i<=50;i++)
        fprintf(info,"%c",'_');
    fprintf(info,"\n");
    fclose(info);
    printf("wanna see past records press 'y'\n");
    cha=getch();
    system("cls");
    if(cha=='y') {
        info=fopen("record.txt","r");
        do {
            putchar(c=getc(info));
        } while(c!=EOF);
    }
    fclose(info);
}

int Pontos() {
    int score;
    GotoXY(20,8);
    score=length-5;
    printf("Pontos : %d",(length-5));
    score=length-5;
    GotoXY(50,8);
    printf("Vida : %d",life);
    return score;
}

int Scoreonly() { /**Pontos*/
    int score=Pontos();
    system("cls");
    return score; /**score = legnth-5*/
}

void ParaCima() {
    int i;
    for(i=0;i<=(bend[bend_no].y-head.y)&&len<length;i++) {
        GotoXY(head.x,head.y+i);
        {
            if(len==0) {
                printf("\xdb");
            }
            else {
                printf("\xdb");
            }
        }
        body[len].x=head.x;
        body[len].y=head.y+i;
        len++;
    }
    Bend();
    if(!kbhit()) {
        head.y--;
    }
}