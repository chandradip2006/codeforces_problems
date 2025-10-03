#include<iostream>
using namespace std;
void swap(int* x , int* y){
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
        int arr[n],arr1[n+2],count=1;
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
        arr1[0]=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                arr1[count]=i+1;
                count++;
            }
        }
        arr1[count]=n;
        int count1=0;
        for(int i=0;i<count;i++){
            if((arr1[i+1]-arr1[i])>=3){
                count1=count1+(arr1[i+1]-arr1[i])/3;
            }
        }
        cout<<count1<<endl;
        t--;
    }
}