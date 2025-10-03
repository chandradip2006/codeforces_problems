#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n] , arr1[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        bool flag = true;
        if(sum%n==0){
            for(int i=0;i<n;i++){
                arr1[i]=arr[i]-(sum/n);
            }
            for(int i=0;i<n;i++){
                if(arr1[i]!=0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
                t--;
                continue;
            }
            else{
                int arr2[n];
                int count=0;
                for(int i=0;i<n;i++){
                    if(arr1[i]!=0){
                        arr2[count]=arr1[i];
                        count++;
                    }
                }
                for(int i=0;i<count;i++){
                    if(arr2[i]<0){
                        for(int j=i+1;j<count;j++){
                            if(arr2[j]>0){
                                int s=0;
                                for(int k=0;k<j;k++){
                                    s=s+arr2[k];
                                }
                                if(s<0){
                                    flag=true;
                                    break;
                                }
                            }
                        }
                        break;
                    }
                }
                if(flag){
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
        }
        else cout<<"NO"<<endl;
        t--;
    }
}