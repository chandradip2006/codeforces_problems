#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        long long n,q;
        cin>>n>>q;
        int count1=0,count2=0;
        long long arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
            if(arr[i]%2==0){
                count1++;
            }
            else count2++;
        }
        long long arr1[q][2];
        for(int i=0;i<q;i++){
            for(int j=0;j<2;j++){
                cin>>arr1[i][j];
            }
        }
        for(int i=0;i<q;i++){
            if(arr1[i][0]%2==0){
                if(arr1[i][1]%2==0){
                    sum=sum+count1*arr1[i][1];
                }
                else{
                    sum=sum+count1*arr1[i][1];
                    count2=count2+count1;
                    count1=0;
                }
            }
            else{
                if(arr1[i][1]%2==0){
                    sum=sum+count2*arr1[i][1];
                }
                else{
                    sum=sum+count2*arr1[i][1];
                    count1=count1+count2;
                    count2=0;
                }
            }
            cout<<sum<<endl;
        }
        t--;
    }
}