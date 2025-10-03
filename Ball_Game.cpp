#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int z=((i*i)-i+2)/2;
        if(z%n!=0){
            cout<<z%n<<" ";
        }
        else cout<<n<<" ";
    }
    cout<<endl;
}