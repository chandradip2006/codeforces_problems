#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[10];
        cin>>ch;
        int z1,z2;
        for(int i=0;i<9;i++){
            if(ch[i]=='1'){
                z1=i;
            }
            else if(ch[i]=='3'){
                z2=i;
            }
        }
        if(z1>z2){
            cout<<31<<endl;
        }
        else cout<<13<<endl;
        t--;
    }
}