#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"enter your mark percentage: ";
    cin>>p;
    if(100 >= p && p > 80) cout<<"very good";
    else if(80 >= p && p > 60) cout<<"good";
    else if(60 >= p && p > 40) cout<<"average";
    else cout<<"fail";

}