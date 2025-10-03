#include<iostream>
using namespace std;
void print1toN(int x){
    if(x == 0) return;
    else{
        print1toN(x-1);
        cout<<x<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print1toN(n);
}