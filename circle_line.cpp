#include<iostream>
using namespace std;
int min(int x , int y){
    if(x>=y){
        return y;
    }
    else return x;
}
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s,t;
    cin>>s>>t;
    if(s>t){
        swap(&s,&t);
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        if(i>=(s-1)&&i<(t-1)){
            sum1=sum1+arr[i];
        }
        else sum2=sum2+arr[i];
    }
    cout<<min(sum1,sum2)<<endl;
}