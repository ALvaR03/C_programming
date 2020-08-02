#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    system("@cls || clear");

    enum armas{ak47 = 100, m4a1, aug, awm, desert};
    armas armaSel;
    

    armaSel = desert;
    cout << armaSel << endl;

    return 0;
}