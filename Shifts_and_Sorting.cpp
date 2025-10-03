#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch[200001];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        int arr[count];
        int sum=0;
        for(int i=0;i<count;i++){
            if(ch[i]=='1'){
                sum++;
            }
            arr[i]=sum;
        }
        long long int ans=0;
        for(int i=0;i<count;i++){
            if(ch[i]=='0'){
                if(arr[i]>0){
                    ans+=arr[i]+1;
                }
            }
        }
        cout<<ans<<endl;
    }
}