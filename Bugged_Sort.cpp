#include<iostream>
using namespace std;
void swap(int* x , int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0;i< n;i++){
            cin>>a[i];
        }
        for(int i=0;i< n;i++){
            cin>>b[i];
        }
        bool flag = true;
        for(int i=0;i<n-1;i++){
            for(int j=0;j< n-1-i;j++){
                if((a[j]>=a[j+1])&&(b[j]>=b[j+1])){
                    swap(&a[j], &a[j+1]);
                    swap(&b[j], &b[j+1]);
                }
                else {
                    flag = false;
                    break;
                }
            }
            if(flag==false){
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}