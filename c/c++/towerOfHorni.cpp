#include<iostream>
int tower(int x){
    if(x== 1){
        return 1;
    }
    else return 1+ 2*tower(x-1);
}

using namespace std;
int main(){
    int n;
    cout<<"enter the no of stacks: ";
    cin>>n;
    cout<<"the min num of turns is: "<<tower(n);
}