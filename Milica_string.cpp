#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        char ch[n+1];
        cin>>ch;
        int count=0;
        for(int i=0;i<n;i++){
            if(ch[i]=='B'){
                count++;
            }
        }
        if(count==k){
            cout<<0<<endl;
        }
        else{
            if(count>k){
                int z=count-k,count1=0;
                for(int i=0;i<n;i++){
                    if(ch[i]=='B'){
                        count1++;
                        if(count1==z){
                            cout<<1<<endl;
                            cout<<i+1<<" "<<'A'<<endl;
                            break;
                        }
                    }
                }
            }
            else{
                int z=k-count,count1=0;
                for(int i=0;i<n;i++){
                    if(ch[i]=='A'){
                        count1++;
                        if(count1==z){
                            cout<<1<<endl;
                            cout<<i+1<<" "<<'B'<<endl;
                            break;
                        }
                    }
                }
            }
        }
        t--;
    }
}