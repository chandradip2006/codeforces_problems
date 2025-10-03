#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , m , count=0,count1=0;
        cin>>n>>m;
        while(n>0){
            char ch[11];
            cin>>ch;
            int i=0;
            while(ch[i]!='\0'){
                i++;
                count1++;
            }
            if(count1<=m){
                count++;
            }
            n--;
        }
        cout<<count<<endl;
        t--;
    }
}