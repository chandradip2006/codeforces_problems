#include<iostream>
using namespace std;
void swap(char* ch1,char* ch2){
    char temp=*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[11];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        bool flag = false;
        for(int i=0;i<count-1;i++){
            if(ch[i]!=ch[i+1]){
                flag=true;
                swap(&ch[i],&ch[i+1]);
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
            cout<<ch<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}