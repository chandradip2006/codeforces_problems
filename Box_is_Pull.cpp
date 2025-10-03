#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int n;
    cin>>n;
    while(n>0){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2||y1==y2){
            cout<<mod(x1-x2)+mod(y1-y2)<<endl;
        }
        else cout<<mod(x1-x2)+mod(y1-y2)+2<<endl;
        n--;
    }
}