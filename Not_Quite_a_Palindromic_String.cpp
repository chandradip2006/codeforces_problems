#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        string str;
        cin>>str;
        int count1=0;
        int count2=0;
        int count3=0;

        for(int i=0;i<n/2;i++){
            if(str[i]==str[n-i-1]){
                if(str[i]=='0'){
                    count1++;
                }
                else count2++;
            }
            else{
                count3++;
            }
        }

        if(count1+count2==k){
            cout<<"YES"<<endl;
        }
        else if(count1+count2>k){
            if((count1+count2-k)%2!=0){
                cout<<"NO"<<endl;
            }
            else{
                if(count1+count2-k<=2*min(count1 , count2)){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
        else{
            if((k-count1-count2)%2!=0){
                cout<<"NO"<<endl;
            }
            else{
                if(k-count1-count2<=count3){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
}