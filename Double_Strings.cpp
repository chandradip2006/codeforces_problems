#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v;
        unordered_map<string , int>m;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            v.push_back(str);
            m[str]=1;
        }

        string s;

        for(int i=0;i<n;i++){
            if(v[i].size()==1){
                s.push_back('0');
                continue;
            }
            bool flag=false;
            for(int j=1;j<v[i].size();j++){
                string s1;
                string s2;
                for(int k=0;k<j;k++){
                    s1.push_back(v[i][k]);
                }
                for(int k=j;k<v[i].size();k++){
                    s2.push_back(v[i][k]);
                }

                if(m[s1]&&m[s2]){
                    s.push_back('1');
                    flag=true;
                    break;
                }
            }

            if(!flag){
                s.push_back('0');
            }


        }
        cout<<s<<endl;
    }
}