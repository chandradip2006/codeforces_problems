#include<iostream>
using namespace std;
int same(char ch[] , int n){
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(ch[i]!=ch[i+1]){
            flag=false;
            break;
        }
    }
    if(flag){
        return 1;
    }
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[51];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        if(same(ch,count)==1){
            cout<<-1<<endl;
        }
        else cout<<count-1<<endl;
        t--;
    }
}