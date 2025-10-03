#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch1[3] , ch2[3];
    cin>>ch1>>ch2;
    int z1=ch2[0]-ch1[0];
    int z2=ch2[1]-ch1[1];
    if(z1>=0&&z2>=0){
        if(z1>=z2){
            cout<<z1<<endl;
            for(int i=1;i<=z2;i++){
                cout<<"RU"<<endl;
            }
            for(int i=z2+1;i<=z1;i++){
                cout<<"R"<<endl;
            }
        }
        else{
            cout<<z2<<endl;
            for(int i=1;i<=z1;i++){
                cout<<"RU"<<endl;
            }
            for(int i=z1+1;i<=z2;i++){
                cout<<"U"<<endl;
            }
        }
    }
    else if(z1>=0&&z2<=0){
        z2=abs(z2);
        if(z1>=z2){
            cout<<z1<<endl;
            for(int i=1;i<=z2;i++){
                cout<<"RD"<<endl;
            }
            for(int i=z2+1;i<=z1;i++){
                cout<<"R"<<endl;
            }
        }
        else{
            cout<<z2<<endl;
            for(int i=1;i<=z1;i++){
                cout<<"RD"<<endl;
            }
            for(int i=z1+1;i<=z2;i++){
                cout<<"D"<<endl;
            }
        }
    }
    else if(z1<=0&&z2>=0){
        z1=abs(z1);
        if(z1>=z2){
            cout<<z1<<endl;
            for(int i=1;i<=z2;i++){
                cout<<"LU"<<endl;
            }
            for(int i=z2+1;i<=z1;i++){
                cout<<"L"<<endl;
            }
        }
        else{
            cout<<z2<<endl;
            for(int i=1;i<=z1;i++){
                cout<<"LU"<<endl;
            }
            for(int i=z1+1;i<=z2;i++){
                cout<<"U"<<endl;
            }
        }
    }
    else{
        z1=abs(z1);
        z2=abs(z2);
        if(z1>=z2){
            cout<<z1<<endl;
            for(int i=1;i<=z2;i++){
                cout<<"LD"<<endl;
            }
            for(int i=z2+1;i<=z1;i++){
                cout<<"L"<<endl;
            }
        }
        else{
            cout<<z2<<endl;
            for(int i=1;i<=z1;i++){
                cout<<"LD"<<endl;
            }
            for(int i=z1+1;i<=z2;i++){
                cout<<"D"<<endl;
            }
        }
    }
}