#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int arr[18];
    int count=0;
    while(n>0){
        arr[count]=n%10;
        n=n/10;
        count++;
    }
    
    if(arr[count-1]!=9){
        for(int i=0;i<count;i++){
            if(arr[i]>=5){
                arr[i]=9-arr[i];
            }
        }
    }
    else{
        for(int i=0;i<count-1;i++){
            if(arr[i]>=5){
                arr[i]=9-arr[i];
            }
        }
    }
    long long z=0;
    for(int i=0;i< count ;i++){
        z=z*10+arr[count-1-i];
    }
    cout<<z<<endl;
}