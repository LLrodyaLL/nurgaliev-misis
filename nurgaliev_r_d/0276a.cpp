
#include <iostream>
int main() { 
    int n, k, f, t, g, z;
    g=INT_MIN;
    std::cin>>n>>k;
    while (n!=0){
        std::cin>>f>>t;
        n--;
        if (k<t){
            z=f-t+k;
        } else if (k>=t){
            z=f;
        } 
        g=fmax(g, z);
    }
    std::cout<<g;
}
