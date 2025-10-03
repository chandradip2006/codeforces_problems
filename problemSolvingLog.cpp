#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , count=0;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        int arr[26];
        for(int i=0;i<26;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[ch[i]-'A']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]>=i+1){
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
}