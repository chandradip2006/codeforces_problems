#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[]="codeforces";
        char ch1[11];
        cin>>ch1;
        int count=0;
        for(int i=0;i<10;i++){
            if(ch1[i]!=ch[i]){
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
}