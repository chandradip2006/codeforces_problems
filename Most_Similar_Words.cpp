#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        char ch[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ch[i][j];
            }
        }
        int z= (n*(n-1))/2;
        int arr[z];
        int count=0 ,sum=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum=0;
                for(int k=0;k<m;k++){
                    sum=sum+abs(ch[i][k]-ch[j][k]);
                }
                arr[count++]=sum;
            }
        }
        int p =arr[0];
        for(int i=0;i<z;i++){
            if(arr[i]<p){
                p=arr[i];
            }
        }
        cout<<p<<endl;
    }
}