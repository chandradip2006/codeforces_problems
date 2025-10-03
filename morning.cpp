#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[5];
        cin>>ch;
        int sum;
        if(ch[0]=='0'){
            sum=10;
        }
        else{
            sum=ch[0]-'1'+1;
        }
        for(int i=0;i<3;i++){
            if(ch[i]=='0'||ch[i+1]=='0'){
                if(ch[i]=='0'&&ch[i+1]!='0'){
                    sum=sum+(10-(ch[i+1]-ch[i])+1);
                }
                else if(ch[i]!='0'&&ch[i+1]=='0'){
                    sum=sum+(10-(ch[i]-ch[i+1])+1);
                }
                else{
                    sum=sum+1;
                }
            }
            else{
                int z=ch[i+1]-ch[i];
                sum=sum+(mod(z)+1);
            }
        }
        cout<<sum<<endl;
        t--;
    }
}