#include<iostream>
using namespace std;
void swap(int* x , int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int square(int m , int n){
    if(m==0){
        return 0;
    }
    else{
        int z= n/m;
        int temp = m;
        m=n%m;
        n=temp;
        return z+square(m ,n);
    }

}
int main(){
    int m ,n;
    cin>>m>>n;
    if(m>n){
        swap(&m , &n);
    }
    cout<<square(m,n)<<endl;
}