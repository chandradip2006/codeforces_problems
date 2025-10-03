#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int count1=0,count2=0,count3=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                count1++;
            }
            if(a[i]==1){
                count2++;
            }
            if(b[i]==1){
                count3++;
            }
        }
        if(mod(count2-count3)<count1){
            cout<<1+mod(count2-count3)<<endl;
        }
        else if(mod(count2-count3)==count1){
            cout<<count1<<endl;
        }
        t--;
    }
}