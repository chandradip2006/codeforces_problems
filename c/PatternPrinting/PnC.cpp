#include<iostream>
using namespace std;
int factorial(int x){
    int z = 1;
    for(int i = 1 ; i <= x ; i++){
        z *= i;
    }
    return z;
}
int main(){
    // int n;
    // cout<<"enter n: ";
    // cin>>n;
    // int r;
    // cout<<"enter r: ";
    // cin>>r;
    // int a = 1 , b = 1 , c = 1;
    // for(int i = 1 ; i <= n ; i++){
    //     a *= i;
    // }
    // for(int j = 1 ; j <= r ; j++){
    //     b = b*j;
    // }
    // for(int k = 1 ; k <= (n - r) ; k++){
    //     c *= k;
    // }
    // cout<<"the combination is: "<<a / (b*c);


    int n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;
    cout<<"the combination is: "<<factorial(n)/(factorial(r)*factorial(n-r));

}