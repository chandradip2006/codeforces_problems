#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[501];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        int count1=0;
        for(int i=0;i<count-1;i++){
            if(ch[i]>ch[i+1]){
                count1++;
            }
        }
        cout<<count1+1<<endl;
        t--;
    }
}