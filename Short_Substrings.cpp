#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch[101];
        cin>>ch;
        cout<<ch[0];
        for(int i=1;i<strlen(ch);i++){
            if(i%2!=0){
                cout<<ch[i];
            }
        }
        cout<<endl;
    }
}
