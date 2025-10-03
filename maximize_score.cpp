#include<iostream>
using namespace std;
int min(int x , int y){
    if(x>y){
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
    int t;
    cin>>t;
    while(t>0){
        int n , sum=0;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
        for(int i=0;i<2*n;i=i+2){
            sum=sum+min(arr[i],arr[i+1]);
        }
        cout<<sum<<endl;
        t--;
    }
}