#include<iostream>
using namespace std;
int main(){
    char ch1[51],ch2[51];
    cin>>ch1>>ch2;
    int count1=0;
    while(ch2[count1]!='\0'){
        count1++;
    }
    int count2=0;
    for(int i=0;i<count1;i++){
        if(ch2[i]==ch1[count2]){
            count2++;
        }
    }
    cout<<count2+1<<endl;
}