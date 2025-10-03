#include<iostream>
using namespace std;
int main(){
    int n,m,s,p;
    cin>>n>>m>>s>>p;
    int t=n*(m*60+s)+(n-1)*p;
    cout<<t/60<<endl;
    cout<<t%60<<endl;
}