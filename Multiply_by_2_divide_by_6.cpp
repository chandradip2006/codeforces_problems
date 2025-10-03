#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count1=0,count2=0;
        int z1=n,z2=n;
        while(z1%2==0){
            count1++;
            z1=z1/2;
        }
        while(z2%3==0){
            count2++;
            z2=z2/3;
        }
        if(pow(2,count1)*pow(3 , count2)!=n){
            cout<<-1<<endl;
        }
        else{
            if(count1>count2){
                cout<<-1<<endl;
            }
            else cout<<max(count1,count2)+abs(count1-count2)<<endl;
        }
    }
}