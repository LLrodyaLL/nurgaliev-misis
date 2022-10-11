#include <iostream>
int main() {
    int t, n;
    std::cin>>t;
    while (t!=0){
        std::cin>>n;  
        t--;
        if (n<=10){
            std::cout<<1<<std::endl;
            std::cout<<n<<std::endl;
        }
        else if (n>10 && n<100){
            if (n%10==0){
                std::cout<<1<<std::endl;
                std::cout<<n<<std::endl;
            }
            else if (n%10!=0){
                std::cout<<2<<std::endl;
                std::cout<<n/10*10<<" "<<n%10<<std::endl;
            }
        }
        else if (n>=10000){
            if (n==10000){
                std::cout<<1<<std::endl;
                std::cout<<n<<std::endl;
            }
            else if (n/10000!=0 && n/1000%10!=0 && n/100%10!=0 && n/10%10!=0 && n%10!=0){
                std::cout<<5<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/1000%10*1000<<" "<<n/100%10*100<<" "<<n/10%10*10<<" "<<n%10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10!=0 && n/100%10!=0 && n/10%10!=0 && n%10==0){
                std::cout<<4<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/1000%10*1000<<" "<<n/100%10*100<<" "<<n/10%10*10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10!=0 && n/100%10!=0 && n/10%10==0 && n%10!=0){
                std::cout<<4<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/1000%10*1000<<" "<<n/100%10*100<<" "<<n%10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10!=0 && n/100%10!=0 && n/10%10==0 && n%10==0){
                std::cout<<3<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/1000%10*1000<<" "<<n/100%10*100<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10!=0 && n/100%10==0 && n/10%10!=0 && n%10!=0){
                std::cout<<4<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/1000%10*1000<<" "<<n/10%10*10<<" "<<n%10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10!=0 && n/100%10==0 && n/10%10!=0 && n%10==0){
                std::cout<<3<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/1000%10*1000<<" "<<n/10%10*10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10!=0 && n/100%10==0 && n/10%10==0 && n%10!=0){
                std::cout<<3<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/1000%10*1000<<" "<<n%10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10!=0 && n/100%10==0 && n/10%10==0 && n%10==0){
                std::cout<<2<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/1000%10*1000<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10==0 && n/100%10!=0 && n/10%10!=0 && n%10!=0){
                std::cout<<4<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/100%10*100<<" "<<n/10%10*10<<" "<<n%10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10==0 && n/100%10!=0 && n/10%10!=0 && n%10==0){
                std::cout<<3<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/100%10*100<<" "<<n/10%10*10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10==0 && n/100%10!=0 && n/10%10==0 && n%10!=0){
                std::cout<<3<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/100%10*100<<" "<<n%10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10==0 && n/100%10!=0 && n/10%10==0 && n%10==0){
                std::cout<<2<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/100%10*100<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10==0 && n/100%10==0 && n/10%10!=0 && n%10!=0){
                std::cout<<3<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/10%10*10<<" "<<n%10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10==0 && n/100%10==0 && n/10%10!=0 && n%10==0){
                std::cout<<2<<std::endl;
                std::cout<<n/10000*10000<<" "<<n/10%10*10<<std::endl;
            }
             else if (n/10000!=0 && n/1000%10==0 && n/100%10==0 && n/10%10==0 && n%10!=0){
                std::cout<<2<<std::endl;
                std::cout<<n/10000*10000<<" "<<n%10<<std::endl;
            }
        }
        else if (n>999 && n<10000){
            if (n/10%10==0 && n%10!=0 && n/100%10==0){
                std::cout<<2<<std::endl;
                std::cout<<n/1000*1000<<" "<<n%10<<std::endl;
            }
            else if (n/10%10!=0 && n%10!=0 && n/100%10==0){
                std::cout<<3<<std::endl;
                std::cout<<n/1000*1000<<" "<<n/10%10*10<<" "<<n%10<<std::endl;
            }
            else if (n/10%10==0 && n%10!=0 && n/100%10!=0){
                std::cout<<3<<std::endl;
                std::cout<<n/1000*1000<<" "<<n/100%10*100<<" "<<n%10<<std::endl;
            }
            else if (n/10%10!=0 && n%10!=0 && n/100%10!=0){
                std::cout<<4<<std::endl;
                std::cout<<n/1000*1000<<" "<<n/100%10*100<<" "<<n/10%10*10<<" "<<n%10<<std::endl;
            }
            else if (n/10%10==0 && n%10==0 && n/100%10==0){
                std::cout<<1<<std::endl;
                std::cout<<n<<std::endl;
            }
            else if (n/10%10!=0 && n%10==0 && n/100%10!=0){
                std::cout<<3<<std::endl;
                std::cout<<n/1000*1000<<" "<<n/100%10*100<<" "<<n/10%10*10<<std::endl;
            }
            else if (n/10%10==0 && n%10==0 && n/100%10!=0){
                std::cout<<2<<std::endl;
                std::cout<<n/1000*1000<<" "<<n/100%10*100<<std::endl;
            }
            else if (n/10%10!=0 && n%10==0 && n/100%10==0){
                std::cout<<2<<std::endl;
                std::cout<<n/1000*1000<<" "<<n/10%10*10<<std::endl;
            }
        }
        else if (n>99 && n<1000){
            if (n%10==0 && n/10%10!=0){
                std::cout<<2<<std::endl;
                std::cout<<n/100*100<<" "<<n/10%10*10<<std::endl;
            }
            else if (n%10!=0 && n/10%10==0){
                std::cout<<2<<std::endl;
                std::cout<<n/100*100<<" "<<n%10<<std::endl;
            }
            else if (n%10!=0 && n/10%10!=0){
                std::cout<<3<<std::endl;
                std::cout<<n/100*100<<" "<<n/10%10*10<<" "<<n%10<<std::endl;
            }
            else if (n%10==0 && n/10%10==0){
                std::cout<<1<<std::endl;
                std::cout<<n<<std::endl;
            }
        }
    }
    return 0;
}        
