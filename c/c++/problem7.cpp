#include<iostream>
int fac(int n){
    if(n==0){
        return 1;
    }
    else return n * fac(n-1);
}
int comb(int x , int y){
    return fac(x)/(fac(y)*fac(x-y));
}
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n -1 - i; j++){
            cout<<" ";
        }
        if(i == 0){
            cout<<1<<endl;
        }
        else {
            for(int k = 0 ; k <= i ; k++){
                cout<<comb(i , k)<<" ";
            }
            cout<<endl;
        }
    }
}