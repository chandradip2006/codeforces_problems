#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int c[4];
    for(int i=0;i<4;i++){
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            c[0]++;
        }
        else if(arr[i]==2){
            c[1]++;
        }
        else if(arr[i]==3){
            c[2]++;
        }
        else c[3]++;
    }
    int sum=c[3];
    if(c[0]>=c[2]){
        sum=sum+c[2];
        if((c[0]-c[2])/2>=c[1]){
            sum=sum+c[1];
            if((c[0]-c[2]-2*c[1]%4)==0){
                sum=sum+((c[0]-c[2])-2*c[1])/4;
            }
            else{
                sum=sum+((c[0]-c[2])-2*c[1])/4+1;
            }
        }
        else{
            sum=sum+(c[0]-c[2])/2;
            sum=sum+(c[1]-(c[0]-c[2])/2)/2+(c[1]-(c[0]-c[2])/2)%2;
        }
    }
    else{
        sum=sum+c[2];
        sum=sum+c[1]/2+c[1]%2;
    }
    cout<<sum<<endl;
}