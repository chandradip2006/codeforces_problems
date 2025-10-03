#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int sum=0;
        if(a>=m){
            sum=sum+m;
            if(b>=m){
                sum=sum+m;
            }
            else{
                if(b+c>=m){
                    sum=sum+m;
                }
                else{
                    sum=sum+(b+c);
                }
            }
        }
        else{
            if(b>=m){
                sum=sum+m;
            }
            else{
                if(a+b+c>=2*m){
                    sum=sum+2*m;
                }
                else{
                    sum=sum+(a+b+c);
                }
            }
        }
        cout<<sum<<endl;
        t--;
    }
}