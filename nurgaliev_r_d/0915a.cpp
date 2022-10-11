#include <iostream>
#include <vector>
int main(){
    int b, i, k, n;
    i=0;
    b=-3;
    std::cin>>n>>k;
    std::vector <int> c(n);
    for (i=0; i<n; i++){
        std::cin>>c[i];
    }
    for (i=0; i<n; i++){
        if (k%c[i]==0 && c[i]>b){
            b=c[i];
        }
    }
    std::cout<<k/b;
    return 0;
}
