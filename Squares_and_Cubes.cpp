#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int z1=1,z2=1,x1=1,x2=1;
        int count=0;
        while(x1<=n||x2<=n){
            if(x1!=x2){
                if(x1<=n){
                    count++;
                    z1++;
                    x1=z1*z1;
                }
                if(x2<=n){
                    count++;
                    z2++;
                    x2=z2*z2*z2;
                }
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
}