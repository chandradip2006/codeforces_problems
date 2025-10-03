#include<iostream>
using namespace std;
int sum1toN(int x){
    if(x == 1){
        return 1;
    }
    else return x+sum1toN(x-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum1toN(n)<<endl;
}