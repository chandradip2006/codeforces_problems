#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,k;
        cin>>x>>k;
        bool flag=true;
        while(flag){
            int sum=0;
            int z=x;
            while(z>0){
                sum=sum+(z%10);
                z=z/10;
            }
            if(sum%k==0){
                flag=false;
            }
            else{
                x++;
            }
        }
        cout<<x<<endl;
        t--;
    }
}