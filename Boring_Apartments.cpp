#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int z=x%10;
        int count=0;
        while(x>0){
            x=x/10;
            count++;
        }

        int sum=0;
        for(int i=1;i<=count;i++){
            sum=sum+i;
        }

        cout<<(z-1)*10+sum<<endl;
    }
}