// // print the factorial of first n natural numbers
// #include<iostream>
// using namespace std;
// int factorial(int x){
//     int z = 1;
//     for(int i = 1 ; i <= x ; i++){
//         z = z * i;
//     }
//     return z;
// }
// int main(){
//     int n;
//     cout<<"enter the natural number: ";
//     cin>>n;
//     for(int i = 1 ; i <= n ; i++){
//         cout<<i<<" : "<<factorial(i)<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a natural number: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        int z = 1;
        for (int j = 1 ; j <= i ; j++){
            z = z * j;
        }
        cout<<i<<" : "<<z<<endl;
    }
}