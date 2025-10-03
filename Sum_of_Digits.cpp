#include<iostream>
using namespace std;
int main(){
    char ch[100001];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    if(count==1){
        cout<<0<<endl;
    }
    else{
        int sum=0;
        for(int i=0;i<count;i++){
            sum=sum+(ch[i]-'0');
        }
        int count1=1;
        while(sum/10!=0){
            int z=0;
            while(sum>0){
                z=z+(sum%10);
                sum=sum/10;
            }
            sum=z;
            count1++;
        }
        cout<<count1<<endl;
    }
}