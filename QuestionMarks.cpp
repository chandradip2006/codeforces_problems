#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , arr[4] , sum=0;
        cin>>n;
        char ch[4*n];
        cin>>ch;
        for(int i=0;i<4;i++){
            arr[i]=0;
        }
        for(int i=0;i<4*n;i++){
            if(ch[i]=='A'){
                arr[0]++;
            }
            else if(ch[i]=='B'){
                arr[1]++;
            }
            else if(ch[i]=='C'){
                arr[2]++;
            }
            else if(ch[i]=='D'){
                arr[3]++;
            }
        }
        for(int i=0;i<4;i++){
            if(arr[i]<=n){
                sum+=arr[i];
            }
            else{
                sum+=n;
            }
        }
        cout<<sum<<endl;
        t--;
    }
}