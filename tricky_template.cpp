#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch1[n+1],ch2[n+1],ch3[n+1];
        cin>>ch1>>ch2>>ch3;
        bool flag1 =false,flag2=false;
        for(int i=0;i<n;i++){
            if(ch1[i]==ch2[i]){
                if(ch2[i]!=ch3[i]){
                    flag1=true;
                    break;
                }
            }
            else{
                if(ch2[i]!=ch3[i]&&ch1[i]!=ch3[i]){
                flag2=true;
                break;
                }
            }
        }
        if(flag1||flag2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}