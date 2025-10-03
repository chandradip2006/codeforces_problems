#include<iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        long long int n , a , b;
        cin>>n>>a>>b;
        if(b>2*a){
            cout<<a*n<<endl;
        }
        else{
            if(n%2==0){
                cout<<(n/2)*b<<endl;
            }
            else {
                long long int sum=((n-1)/2)*b+a;
                cout<<sum<<endl;
            }
        }
    }
}