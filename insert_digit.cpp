#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char d;
        cin>>d;
        char ch[n+1];
        cin>>ch;
        bool flag=false;
        int z;
        if(ch[0]<d){
            cout<<d;
            cout<<ch<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(ch[i]>=ch[i+1]){
                    if(ch[i]>=d&&d>ch[i+1]){
                        z=i;
                        flag =true;
                        break;
                    }
                }
            }
            if(flag){
            for(int i=0;i<=z;i++){
                cout<<ch[i];
            }
            cout<<d;
            for(int i=z+1;i<n;i++){
                cout<<ch[i];
            }
            cout<<endl;
        }
        else{
            cout<<ch<<d<<endl;
        }
        }
        t--;
    }
}