#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        int p=1,s=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            p=p*arr[i];
            s=s+arr[i];
        }
        if(s>=0){
            if(p==1){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            int z=(-1)*s;
            if(z%2==0){
                if(p==1){
                    if((z/2)%2==0){
                        cout<<z/2<<endl;
                    }
                    else{
                        cout<<z/2+1<<endl;
                    }
                }
                else{
                    if((z/2)%2==0){
                        cout<<z/2+1<<endl;
                    }
                    else{
                        cout<<z/2<<endl;
                    }
                }
            }
            else{
                if(p==1){
                    if(((z+1)/2)%2==0){
                        cout<<(z+1)/2<<endl;
                    }
                    else{
                        cout<<(z+1)/2+1<<endl;
                    }
                }
                else{
                    if(((z+1)/2)%2==0){
                        cout<<(z+1)/2+1<<endl;
                    }
                    else{
                        cout<<(z+1)/2<<endl;
                    }
                }
            }
        }
        t--;
    }
}