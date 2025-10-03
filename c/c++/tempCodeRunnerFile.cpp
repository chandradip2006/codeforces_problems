#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch[101];
        cin>>ch;
        int z = strlen(ch);
        int idx=-1;
        for(int i=0;i<z-1;i++){
            if(ch[i]==ch[i+1]){
                idx=i;
            }
        }
        cout<<z-1-idx<<endl;
    }
}