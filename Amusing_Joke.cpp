#include<iostream>
using namespace std;
void swap(char* ch1, char* ch2){
    char temp =*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
int main(){
    char ch1[101],ch2[101];
    cin>>ch1>>ch2;
    int count1=0,count2=0;
    while(ch1[count1]!='\0'){
        count1++;
    }
    while(ch2[count2]!='\0'){
        count2++;
    }
    char ch3[101];
    cin>>ch3;
    int count3=0;
    while(ch3[count3]!='\0'){
        count3++;
    }
    if(count3!=(count1+count2)){
        cout<<"NO"<<endl;
    }
    else{
        char ch[count3];
        for(int i=0;i<count1;i++){
            ch[i]=ch1[i];
        }
        for(int j=count1;j<count3;j++){
            ch[j]=ch2[j-count1];
        }
        for(int i=0;i<count3-1;i++){
            for(int j=0;j<count3-1;j++){
                if(ch[j]>ch[j+1]){
                    swap(&ch[j],&ch[j+1]);
                }
                if(ch3[j]>ch3[j+1]){
                    swap(&ch3[j],&ch3[j+1]);
                }
            }
        }
        bool flag = true;
        for(int i=0;i<count3;i++){
            if(ch3[i]!=ch[i]){
                flag =false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}