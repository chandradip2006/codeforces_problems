#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch[11];
        cin>>ch;
        int z = strlen(ch);
        for(int i=0;i<z-2;i++){
            cout<<ch[i];
        }
        cout<<"i"<<endl;
    }
}