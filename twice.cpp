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
        int n , sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i = 0 ; i <n-1;i++){
            for(int j = 0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{
                sum=sum+((count+1)/2);
                count=0;
            }
        }
        sum=sum+(count+1)/2;
        cout<<sum<<endl;
        t--;
    }
}