#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    char ch1[11]="codeforces";
    while(t--){
        char ch;
        cin>>ch;
        bool flag = false;
        for(int i=0;i<10;i++){
            if(ch1[i]==ch){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}