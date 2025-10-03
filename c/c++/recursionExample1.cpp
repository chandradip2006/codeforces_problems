#include<iostream>
using namespace std;
void printNto1(int x){
    if(x == 1){
        cout<<1<<endl;
    }
    else {
        cout<<x<<endl;
        printNto1(x-1);
    }
}
int main(){
    int n;
    cin>>n;
    printNto1(n);
}