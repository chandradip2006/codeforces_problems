#include<iostream>
using namespace std;
void swap(char* ch1,char* ch2){
    char temp =*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[53];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        for(int i=0;i<count-1;i++){
            for(int j=0;j<count-1;j++){
                if(ch[j]>ch[j+1]){
                    swap(&ch[j],&ch[j+1]);
                }
            }
        }
        cout<<ch<<endl;
        t--;
    }
}