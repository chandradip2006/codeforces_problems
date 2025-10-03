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
        char ch1=ch[0];
        for(int i=0;i<n;i++){
            if(ch[i]>ch1){
                ch1=ch[i];
            }
        }
        cout<<ch1-'a'+1<<endl;
        t--;
    }
}