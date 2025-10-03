#include<iostream>
using namespace std;
int max(int x , int y){
    if(x>=y){
        return x;
    }
    else return y;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        if(n%2==0){
            int a[n/2],b[n/2];
            int count1=0, count2=0;
            for(int i=0;i<n;i++){
                cin>>arr[i];
                if(i%2==0){
                    a[count1]=arr[i];
                    count1++;
                }
                else{
                    b[count2]=arr[i];
                    count2++;
                }
            }
            int z1=a[0], z2=b[0];
            for(int i=0;i<n/2;i++){
                if(a[i]>z1){
                    z1=a[i];
                }
                if(b[i]>z2){
                    z2=b[i];
                }
            }
            cout<<max(z1+n/2,z2+n/2)<<endl;
        }
        else{
            int a[n/2+1],b[n/2];
            if(n>1){
                int count1=0, count2=0;
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                    if(i%2==0){
                        a[count1]=arr[i];
                        count1++;
                    }
                    else{
                        b[count2]=arr[i];
                        count2++;
                    }
                }
                int z1=a[0], z2=b[0];
                for(int i=1;i<n/2+1;i++){
                    if(a[i]>z1){
                        z1=a[i];
                    }
                    if(b[i-1]>z2){
                        z2=b[i-1];
                    }
                }
                cout<<max(z1+n/2+1,z2+n/2)<<endl;
            }
            else {
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                    if(i%2==0){
                        a[0]=arr[i];
                    }
                }
                cout<<a[0]+n/2+1<<endl;
            }
        }
    }
}