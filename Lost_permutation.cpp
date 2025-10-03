#include<iostream>
using namespace std;
int check(int s, int a){
    while(s>0){
        s=s-a;
        a++;
    }
    if(s==0){
        return 1;
    }
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int m,s,sum1=0;
        cin>>m>>s;
        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
            sum1=sum1+arr[i];
        }
        int z=arr[0];
        for(int i=1;i<m;i++){
            if(arr[i]>z){
                z=arr[i];
            }
        }
        int sum = (z*(z+1))/2;
        if(s==(sum-sum1)){
            cout<<"YES"<<endl;
        }
        else if(s>(sum-sum1)){
            if(check(s-(sum-sum1),z+1)==1){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}