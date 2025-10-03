#include<iostream>
using namespace std;
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
    bool flag=true;
    if(count1!=count2){
        cout<<"NO"<<endl;
    }
    else {
        for(int i=0;i<count1;i++){
            if(ch1[i]!=ch2[count1-1-i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}