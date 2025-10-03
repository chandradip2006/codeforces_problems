#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=0;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(str[i]=='x'){
            if(str[i]==str[i+1]){
                count++;
            }
            else{
                if(count>=3){
                    ans+=count-2;
                }
                count=1;
            }
        }
    }

    if(count>=3){
        ans+=count-2;
    }

    cout<<ans<<endl;
}