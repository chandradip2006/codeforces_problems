#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        int sum=0;
        for(int i=0;i<n;i++){
            if(ch[i]=='1'){
                sum=sum+90;
            }
            else sum=sum-90;
        }
        if(sum<0){
            int z=(-1)*sum;
            int r=z%360;
            if(r==0){
                cout<<"E"<<endl;
            }
            else if(r==90){
                cout<<"S"<<endl;
            }
            else if(r==180){
                cout<<"W"<<endl;
            }
            else cout<<"N"<<endl;
        }
        else{
            int r=sum%360;
            if(r==0){
                cout<<"E"<<endl;
            }
            else if(r==90){
                cout<<"N"<<endl;
            }
            else if(r==180){
                cout<<"W"<<endl;
            }
            else cout<<"S"<<endl;
        }
        t--;
    }
}