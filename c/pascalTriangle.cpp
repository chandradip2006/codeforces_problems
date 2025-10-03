#include<iostream>
using namespace std;
int fac(int r){
    if(r == 0){
        return 1;
    }
    else {
        return r * fac(r-1);
    }
}
int comb(int x , int y){
    return fac(x) / (fac(y) * fac(x-y));

}
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j < n - i ; j++){
            cout<<" ";
        }
        if(n == 0){
            cout<<1<<endl;;
        }
        else {
            for(int k = 0 ; k <= i ; k++){
                cout<<comb(i , k);
                cout<<" ";
            }
            cout<<"\n";
        }
    }
}