#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        if(n%k==0){
            cout<<n/k<<endl;
        }
        else{
            if(k>=n){
                cout<<1<<endl;
            }
            else{
                int arr[2*(int)sqrt(n)];
                arr[0]=1;
                int count=1;
                int z=n;
                for(int i=2;i<=sqrt(n);i++){
                    if(n%i==0){
                        arr[count]=i;
                        count++;
                        arr[count]=n/i;
                        count++;
                    }
                }
                arr[count]=n;
                count++;
                int arr1[count];
                int count1=0;
                for(int i=0;i<count;i++){
                    if(z/arr[i]<=k){
                        arr1[count1]=arr[i];
                        count1++;
                    }
                }
                int z1=arr1[0];
                for(int i=1;i<count1;i++){
                    if(arr1[i]<z1){
                        z1=arr1[i];
                    }
                }
                cout<<z1<<endl;
            }
        }
    }
}