#include<iostream>
using namespace std;
int GCD(int x , int y){
    if(x>=y){
        if(y==0){
            return x;
        }
        else{
            int temp=x;
            x=y;
            y=temp%y;
            return GCD(x,y);
        }
    }
    else{
        if(x==0){
            return y;
        }
        else{
            int temp=y;
            y=x;
            x=temp%x;
            return GCD(x,y);
        }
    }
}
int main(){
    int n , sum=0;
    cin>>n;
    for(int i=2;i<n;i++){
        int z=n;
        while(z>0){
            sum=sum+(z%i);
            z=z/i;
        }
    }
    cout<<sum/GCD(sum, n-2)<<"/"<<(n-2)/GCD(sum, n-2)<<endl;
}