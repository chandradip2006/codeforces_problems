#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int k;
    cin>>k;
    while(k--){
        char s[200001], t[200001];
        cin>>s>>t;
        int m = strlen(s);
        int n = strlen(t);
        int count=0;
        for(int i=0;i<m&&count<n;i++){
            if(s[i]==t[count]){
                count++;
            }
            else{
                if(s[i]=='?'){
                    s[i]=t[count];
                    count++;
                }
            }
        }
        for(int i=0;i< m;i++){
            if(s[i]=='?'){
                s[i]= 'a';
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else cout<<"NO"<<endl;
    }
}