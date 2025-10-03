#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        unordered_map<char , int>m;
        for(int i=0;i<n;i++){
            m[str[i]]++;
        }

        bool flag=false;

        for(int i=1;i<n-1;i++){
            if(m[str[i]]>1){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}