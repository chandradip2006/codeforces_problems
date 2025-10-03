#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        int arr1[n],count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if((arr[i]%2)!=(i%2)){
                arr1[count]=i;
                count++;
            }
        }
        if(count==0){
            cout<<0<<endl;
        }
        else{
            if(count%2!=0){
                cout<<-1<<endl;
            }
            else{
                int count1=0,count2=0;
                for(int i=0;i<count;i++){
                    if(arr1[i]%2==0){
                        count1++;
                    }
                    else count2++;
                }
                if(count1==count2){
                    cout<<count1<<endl;
                }
                else cout<<-1<<endl;
            }
        }
        t--;
    }
}