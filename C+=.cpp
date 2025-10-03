#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b,n;
        cin>>a>>b>>n;
        if(a>b){
            swap(&a,&b);
        }
        int count=0;
        while(a<=n&&b<=n){
            a+=b;
            swap(&a,&b);
            count++;
        }
        cout<<count<<endl;
        t--;
    }
}