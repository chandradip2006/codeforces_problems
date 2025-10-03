#include<iostream>
using namespace std;
int main(){
    char ch1[11],ch2[11];
    cin>>ch1>>ch2;
    int count1=0,count2=0;
    long long int p =0, q=0;
    long long int a =0, b=0;
    while(ch1[count1]!='\0'){
        p=p*10+(ch1[count1]-'0');
        if(ch1[count1]!='0'){
            a=a*10+(ch1[count1]-'0');
        }
        count1++;
    }
    while(ch2[count2]!='\0'){
        q=q*10+(ch2[count2]-'0');
        if(ch2[count2]!='0'){
            b=b*10+(ch2[count2]-'0');
        }
        count2++;
    }
    long long int x=p+q;
    long long int z=a+b;
    long long int r=0;
    while(x>0){
        if(x%10!=0){
            r=r*10+(x%10);
            x=x/10;
        }
        else x=x/10;
    }
    long long int ans=0;
    while(r>0){
        ans=ans*10+r%10;
        r=r/10;
    }
    if(ans==z){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}