#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
        int count=0 , z;
        if(n%2==0){
            z= n/2-1;
        }
        else{
            z=n/2;
        }
        for(int i = z;i<n;i++){
            if(arr[z]==arr[i]){
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
}