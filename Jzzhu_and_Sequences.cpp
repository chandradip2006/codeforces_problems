#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main(){
    int x , y , n;
    cin>>x>>y>>n;
    if(n==1){
        if(x>=0){
            cout<<x<<endl;
        }
        else cout<<MOD+x<<endl;
    }
    else if(n==2){
        if(y>=0){
            cout<<y<<endl;
        }
        else cout<<MOD+y<<endl;
    }
    else if(n==3){
        long long z=y-x;
        if(z>=0){
            cout<<z%MOD<<endl;
        }
        else {
            if(z%MOD==0){
                cout<<0<<endl;
            }
            else cout<<(z%MOD)+MOD<<endl;
        }
    }
    else{
        if((n-1)%3==0){
            if((n-1)%2==0){
                if(x>=0){
                    cout<<x<<endl;
                }
                else cout<<MOD+x<<endl;
            }
            else{
                if(x<=0){
                    cout<<x*(-1)<<endl;
                }
                else cout<<MOD-x<<endl;
            }
        }
        else if((n-2)%3==0){
            if((n-2)%2==0){
                if(y>=0){
                    cout<<y<<endl;
                }
                else cout<<MOD+y<<endl;
            }
            else{
                if(y<=0){
                    cout<<y*(-1)<<endl;
                }
                else cout<<MOD-y<<endl;
            }
        }
        else{
            long long z=y-x;
            if((n-3)%2==0){
                if(z>=0){
                    cout<<z%MOD<<endl;
                }
                else cout<<(z%MOD)+MOD<<endl;
            }
            else{
                if(z<=0){
                    cout<<z*(-1)%MOD<<endl;
                }
                else {
                    if((z*(-1))%MOD==0){
                        cout<<0<<endl;
                    }
                    else cout<<(z*(-1))%MOD+MOD<<endl;
                }
            }
        }
    }
}
