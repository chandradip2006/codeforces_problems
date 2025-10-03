#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k,x;
        cin>>n>>k>>x;
        if(k>n){
            cout<<-1<<endl;
        }
        else{
            if(k>=x){
                if(k-x==1){
                    int sum=(k*(k-1))/2;
                    int j=n-k;
                    while(j>0){
                        sum=sum+x;
                        j--;
                    }
                    cout<<sum<<endl;
                }
                else if(k==x){
                    int sum=(k*(k-1))/2;
                    int j=n-k;
                    while(j>0){
                        sum=sum+(x-1);
                        j--;
                    }
                    cout<<sum<<endl;
                }
                else cout<<-1<<endl;
            }
            else {
                    int sum=(k*(k-1))/2;
                    int j=n-k;
                    while(j>0){
                        sum=sum+x;
                        j--;
                    }
                    cout<<sum<<endl;
                }
        }
        t--;
    }
}