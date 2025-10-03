#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b , c;
        cin>>a>>b>>c;
        long long count=0;
        count=count+a;

        count=count+b/3;
        if(b%3==1){
            if(c<2){
                cout<<-1<<endl;
                continue;
            }
            else{
                count++;
                c=c-2;
            }
        }
        else if(b%3==2){
            if(c<1){
                cout<<-1<<endl;
                continue;
            }
            else{
                count++;
                c=c-1;
            }
        }

        if(c%3==0){
            count=count+c/3;
        }
        else{
            count=count+c/3+1;
        }

        cout<<count<<endl;
    }
}