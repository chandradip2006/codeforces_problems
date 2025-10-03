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
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(ch[i]=='A'){
                count1++;
            }
            else{
                count2++;
            }
        }
        if(count1==count2){
            cout<<'?'<<endl;
        }
        else{
            cout<<ch[n-1]<<endl;
        }
        t--;
    }
}