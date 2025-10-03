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
        char ch1[n+1],ch2[n+1];
        for(int i=0;i<n;i++){
            if(i%2==0){
                ch1[count1]=ch[i];
                count1++;
            }
            else{
                ch2[count2]=ch[i];
                count2++;
            }
        }
        bool flag=true;
        for(int i=0;i<count1;i++){
            for(int j=0;j<count2;j++){
                if(ch1[i]==ch2[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                    break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}