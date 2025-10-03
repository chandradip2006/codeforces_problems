#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b , x;
    cin>>a>>b>>x;
    if(x%2==0){
        if(x/2==a){
            int z=a;
            for(int i=0;i<z;i++){
                cout<<"10";
                a--;
                b--;
            }

            for(int i=0;i<b;i++){
                cout<<"1";
            }
            cout<<endl;
        }
        else {
            int z=x/2;
            for(int i=0;i<z;i++){
                cout<<"01";
                a--;
                b--;
            }

            for(int i=0;i<a;i++){
                cout<<"0";
            }
            cout<<endl;
        }
    }

    else{
        int z=(x+1)/2;
        for(int i=1;i<=b-z;i++){
            cout<<"1";
        }

        for(int i=0;i<z;i++){
            cout<<"10";
            a--;
        }
        for(int i=0;i<a;i++){
            cout<<"0";
        }

        cout<<endl;
    }

}