#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool flag = false;
        cin>>n;
        int arr[n] , count[10];
        for(int i=0;i< 10 ;i++){
            count[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i];
            count[arr[i]%10]++;
        }
        for(int i=0;i< 10;i++){
            if(count[i]>=3){
                if((3*i)%10==3){
                    cout<<"YES"<<endl;
                    flag = true;
                    break;
                }
            }
        }
        if(!flag){
            for(int i=0;i< 10;i++){
                if(count[i]>=2){
                    for(int j=0;j<10&&j!=i;j++){
                        if(count[j]>=1){
                            if((2*i+j)%10==3){
                                cout<<"YES"<<endl;
                                flag=true;
                                break;
                            }
                        }
                    }
                }
                if(flag){
                    break;
                }
            }
        }
        if(!flag){
            for(int i=0;i<8;i++){
                for(int j=i+1;j< 9;j++){
                    for(int k=j+1;k<10;k++){
                        if(count[i]>=1&&count[j]>=1&&count[k]>=1){
                            if((i+j+k)%10==3){
                                cout<<"YES"<<endl;
                                flag=true;
                                break;
                            }
                        }
                    }
                    if(flag){
                        break;
                    }
                }
                if(flag){
                    break;
                }
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
}