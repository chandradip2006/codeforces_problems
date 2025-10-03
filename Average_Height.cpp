#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                b[count1]=a[i];
                count1++;
            }
            else{
                c[count2]=a[i];
                count2++;
            }
        }
        for(int i=0;i<count1;i++){
            cout<<b[i]<<" ";
        }
        for(int i=0;i<count2;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}