#include <stdio.h>

int main(void) {

    char a[15], b[15], c[15];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    fgets(c, sizeof(c), stdin);

    if (a[0] == 'v') {
        if (b[0] == 'a') {
            if (c[0] == 'c') {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if(c[0] == 'o') printf("homen\n");
        }
    }
    
    return 0;
}
