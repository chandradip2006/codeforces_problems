#include<iostream>
using namespace std;
int main(){
    int k , n , w;
    cin>>k>>n>>w;
    int z=((w)*(w+1))/2*k;
    if(z<=n){
        cout<<0<<endl;
    }
    else cout<<z-n<<endl;
}