#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch1[]="Timur";
        char ch[n+1];
        cin>>ch;
        bool flag =true;
        if(n==5){
            for(int i=0;i<5;i++){
                int count=0;
                for(int j=0;j<n;j++){
                    if(ch[j]==ch1[i]){
                        count++;
                    }
                }
                if(count!=1){
                    flag=false;
                    break;
                }
            }
        }
        else {
            flag=false;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}