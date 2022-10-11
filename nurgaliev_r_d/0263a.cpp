#include <iostream>
int main(){
    int a, b, i, j;
    b = 0;
    i = 0;
    j = 0;
    int mat[5][5];
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            std::cin>>a;
            mat[i][j] = a;
        }
    }
    if (mat[2][2]!=0 ){
        b=0;
    }
    else {
        for (i=0; i<5; i++){
            if (mat[i][0]!=0 || mat[i][4]!=0){
                b+=2;
            }
            else if (mat[i][1]!=0 || mat[i][3]!=0 ){
                b++;
            }
            if (mat[0][i]!=0 || mat[4][i]!=0){
                b+=2;
            }
            else if (mat[1][i]!=0 || mat[3][i]!=0 ){
                b++;
            }
        }
    }
    std::cout << b;
}
