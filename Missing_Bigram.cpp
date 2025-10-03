#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<string>v;
        for(int i=0;i<n-2;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }

        string str;
        str.push_back(v[0][0]);
        str.push_back(v[0][1]);

        for(int i=0;i<v.size()-1;i++){
            if(v[i+1][0]==v[i][1]){
                str.push_back(v[i+1][1]);
            }
            else{
                str.push_back(v[i+1][0]);
                str.push_back(v[i+1][1]);
            }
        }

        if(str.size()!=n){
            str.push_back('a');
        }

        cout<<str<<endl;
    }
}