#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr , arr+n);
        int count=1;
        int arr1[n];
        int count1=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else {
                arr1[count1]=count;
                count1++;
                count=1;
            }
        }
        arr[count1]=count;
        count1++;
        int max[(count1*(count1+1))/2];
        int idx=0;
        for(int i=0;i<count1;i++){
            for(int j=i;j<count1;j++){
                if(i==j){
                    max[idx]=arr1[i]/2;
                    idx++;
                }
                else {
                    max[idx]=min(arr1[i],arr1[j]);
                }
            }
        }
        int z=max[0];
        for(int i=1;i<idx;i++){
            if(max[i]>z){
                z=max[i];
            }
        }
        cout<<z<<endl;
    }
}