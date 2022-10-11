#include <iostream>
int main(){
    int y;
    std::cin>>y;
    for (y++; y<=9999; y++){
        int b, c, d, e;
        b=y/1000;
        c=y/100%10;
        d=y/10%10;
        e=y%10;
        if (b!=c && c!=d && d!=e && b!=d && b!=e && c!=e){
            std::cout<<y;
            break;
        }
    }
}
