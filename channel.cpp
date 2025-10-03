#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , a, q;
        cin>>n>>a>>q;
        char ch[q+1];
        cin>>ch;
        if(n==a){
            cout<<"YES"<<endl;
        }
        else{
            int z=a;
            bool flag=false;
            for(int i=0;i<q;i++){
                if(ch[i]=='+'){
                    z++;
                }
                else z--;
                if(z==n){
                    cout<<"YES"<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag){
                t--;
                continue;
            }
            else{
                int count1=0,count2=0;
                for(int i=0;i<q;i++){
                    if(ch[i]=='+'){
                        count1++;
                    }
                    else count2++;
                }
                int z1= n-a;
                if(count1>=z1){
                    cout<<"MAYBE"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        t--;
    }
}