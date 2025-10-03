#include<iostream>
using namespace std;
int min(int x,int y){
    if(x>=y){
        return y;
    }
    else return x;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,count1=0,count2=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                count1++;
            }
            else count2++;
        }
        cout<<min(count1,count2)<<endl;
        t--;
    }
}