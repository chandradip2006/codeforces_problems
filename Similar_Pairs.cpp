#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],a[n],b[n];
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                a[count1]=arr[i];
                count1++;
            }
            else{
                b[count2]=arr[i];
                count2++;
            }
        }
        if(count1%2==0&&count2%2==0){
            cout<<"YES"<<endl;
        }
        else{
            bool flag = false;
            for(int i=0;i<count1;i++){
                for(int j=0;j<count2;j++){
                    if(abs(a[i]-b[j])==1){
                        flag=true;
                        break;
                    }
                }
                if(flag){
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}