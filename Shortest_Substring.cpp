#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    unordered_map<char , int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }

    int i=0;
    int j=n-1;
    while(i<=j){
        if(m[s[i]]>1&&m[s[j]]>1){
            m[s[j]]--;
            j--;
        }
        else if(m[s[i]]>1){
            m[s[i]]--;
            i++;
        }
        else if(m[s[j]]>1){
            m[s[j]]--;
            j--;
        }
        else{
            break;
        }
    }

    cout<<j-i+1<<endl;
}