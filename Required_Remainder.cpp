#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y,n;
        cin>>x>>y>>n;
        if(n%x==0){
            if(y==0){
                cout<<n<<endl;
            }
            else{
                cout<<(n/x-1)*x+y<<endl;
            }
        }
        else{
            if(n%x>=y){
                cout<<(n/x)*x+y<<endl;
            }
            else{
                cout<<(n/x-1)*x+y<<endl;
            }
        }
        t--;
    }
}