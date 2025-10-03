#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    string str;
    cin>>str;

    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }

    for(int i=0;i<n;i++){
        arr[str[i]-'a']++;
    }

    unordered_map<char , int>m;
    for(int i=0;i<26;i++){
        if(k-arr[i]<0){
            m[(char)('a'+i)]=k;
            break;
        }
        else{
            m[(char)('a'+i)]=arr[i];
            k=k-arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(m[str[i]]){
            m[str[i]]--;
        }
        else{
            cout<<str[i];
        }
    }
    cout<<endl;
}