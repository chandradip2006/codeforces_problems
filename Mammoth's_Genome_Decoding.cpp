#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    if(n%4!=0){
        cout<<"==="<<endl;
    }
    else{
        int arr[4] , count=0;
        for(int i=0;i<4;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            if(ch[i]=='A'){
                arr[0]++;
            }
            else if(ch[i]=='T'){
                arr[1]++;
            }
            else if(ch[i]=='G'){
                arr[2]++;
            }
            else if(ch[i]=='C'){
                arr[3]++;
            }
            else count++;
        }
        int z=arr[0];
        for(int i=1;i<4;i++){
            if(arr[i]>z){
                z=arr[i];
            }
        }
        int sum=0;
        for(int i=0;i<4;i++){
            sum=sum+(z-arr[i]);
        }
        if(count<sum){
            cout<<"==="<<endl;
        }
        // else if(count==0){
        //     cout<<ch<<endl;
        // }
        else if(count==sum){
            char ch1[sum];
            for(int i=0;i<z-arr[0];i++){
                ch1[i]='A';
            }
            for(int i=z-arr[0];i<2*z-arr[1]-arr[0];i++){
                ch1[i]='T';
            }
            for(int i=2*z-arr[1]-arr[0];i<3*z-arr[0]-arr[1]-arr[2];i++){
                ch1[i]='G';
            }
            for(int i=3*z-arr[0]-arr[1]-arr[2];i<sum;i++){
                ch1[i]='C';
            }
            int idx=0;
            for(int i=0;i<n;i++){
                if(ch[i]=='?'){
                    ch[i]=ch1[idx];
                    idx++;
                }
            }
            cout<<ch<<endl;
        }
        else{
            if((count-sum)%4!=0){
                cout<<"==="<<endl;
            }
            else{
                char ch1[sum];
                for(int i=0;i<z-arr[0];i++){
                    ch1[i]='A';
                }
                for(int i=z-arr[0];i<2*z-arr[1]-arr[0];i++){
                    ch1[i]='T';
                }
                for(int i=2*z-arr[1]-arr[0];i<3*z-arr[0]-arr[1]-arr[2];i++){
                    ch1[i]='G';
                }
                for(int i=3*z-arr[0]-arr[1]-arr[2];i<sum;i++){
                    ch1[i]='C';
                }
                int idx=0;
                for(int i=0;i<n;i++){
                    if(ch[i]=='?'){
                        ch[i]=ch1[idx];
                        idx++;
                    }
                }
                int flag=0;
                for(int i=0;i<n;i++){
                    if(ch[i]=='?'){
                        if(flag%4==0){
                            ch[i]='A';
                            flag++;
                        }
                        else if(flag%4==1){
                            ch[i]='T';
                            flag++;
                        }
                        else if(flag%4==2){
                            ch[i]='G';
                            flag++;
                        }
                        else if(flag%4==3){
                            ch[i]='C';
                            flag++;
                        }
                    }
                }

            }
            cout<<ch<<endl;
        }
    }
}