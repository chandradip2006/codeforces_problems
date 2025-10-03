#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,z;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        int count=0;
        if(n%2==0){
            for(int i=n/2-1;i>0;i--){
                if(ch[i]==ch[i-1]){
                    count++;
                }
                else break;
            }
            cout<<2*(count+1)<<endl;
        }
        else{
            for(int i=n/2;i>0;i--){
                if(ch[i]==ch[i-1]){
                    count++;
                }
                else break;
            }
            cout<<2*(count+1)-1<<endl;
        }
        t--;
    }
}