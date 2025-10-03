#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=0;i<=sqrt(n);i++){
        int a=i;
        int b=n-a*a;
        if((a+b*b)==m){
            count++;
        }
    }
    cout<<count<<endl;
}