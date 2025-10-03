#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        char ch1[n+1],ch2[m+1];
        cin>>ch1;
        cin>>ch2;
        int count=0;
        for(int i=0;i<m;i++){
            if(count==n){
                break;
            }
            else{
                if(ch2[i]==ch1[count]){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}