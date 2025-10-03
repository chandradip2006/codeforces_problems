#include<iostream>
using namespace std;
int power(int x){
    int count=0,p=1;
    while(x>0){
        x=x/2;
        p=p*2;
    }
    return p;
}
int operation(int x,int y,int z){
    int a = power(x);
    int count=0;
    while(a>0){
        count++;
        a=a/2;
    }
    if(y==0){
        return z;
    }
    else{
        if(x==1){
            return -1;
        }
        else{
            x=x/2;
        y=y-count;
        z++;
        return operation(x,y,z);
        }
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , count=0 ;
        bool flag =false;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            while(n%2==0){
                count++;
                arr[i]=arr[i]/2;
            }
        }
        cout<<operation(n,n-count,0)<<endl;
    }
}