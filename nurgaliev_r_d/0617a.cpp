#include <iostream>
int main(){
    int a;
    std::cin>>a;
    if (a%5==0){
        std::cout<<a/5;
    }
    else {
        std::cout<<a/5+1;
    }
    return 0;
}
