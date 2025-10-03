#include<iostream>
using namespace std;
int min(int a,int b,int c){
    if(a>=b){
        if(b>=c){
            return c;
        }
        else return b;
    }
    else{
        if(a>=c){
            return c;
        }
        else return a;
    }
}
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a,b,e;
    a=(k*l)/nl;
    b=c*d;
    e=p/np;
    cout<<min(a,b,e)/n<<endl;
}