#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y,k;
        cin>>x>>y>>k;
        int sum=0;
        if(x>y){
            int z=y/k;
            sum=sum+2*z;
            if((y-k*z)==0){
                int z1=x-k*z;
                if(z1%k==0){
                    sum=sum+(2*(z1/k)-1);
                }
                else{
                    sum=sum+(2*(z1/k+1)-1);
                }
            }
            else{
                int z1=x-k*z;
                if(z1<=k){
                    sum=sum+2;
                }
                else{
                    if(z1%k==0){
                        sum=sum+(2*(z1/k)-1);
                    }
                    else{
                        sum=sum+(2*(z1/k+1)-1);
                    }
                }
            }
        }
        else if(x==y){
            if(x%k==0){
                sum=sum+2*(x/k);
            }
            else sum=sum+2*(x/k+1);
        }
        else{
            int z=x/k;
            sum=sum+2*z;
            if((x-k*z)==0){
                int z1=y-k*z;
                if(z1%k==0){
                    sum=sum+(2*(z1/k));
                }
                else{
                    sum=sum+(2*(z1/k+1));
                }
            }
            else{
                int z1=y-k*z;
                if(z1<=k){
                    sum=sum+2;
                }
                else{
                    if(z1%k==0){
                        sum=sum+(2*(z1/k));
                    }
                    else{
                        sum=sum+(2*(z1/k+1));
                    }
                }
            }
        }
        cout<<sum<<endl;
        t--;
    }
}