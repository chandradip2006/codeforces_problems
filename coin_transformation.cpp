#include<iostream>
using namespace std;
long long int coin(long long int x , long long int c){
    if(x<=3){
        return c;
    }
    else{
        x=x/4;
        c=2*c;
        return coin(x,c);
    }
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        long long n;
        cin>>n;
        cout<<coin(n,1)<<endl;
        t--;
    }
}