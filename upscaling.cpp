#include<iostream>
using namespace std;
int found(int arr[],int i , int n){
    bool flag = false;
    for(int k=0;k<n;k++){
        if(arr[k]==i){
            flag=true;
            return 1;
        }
    }
    if(flag==false){
        return 0;
    }
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[2*n][2*n];
        if(n%2==0){
            int arr[n];
            int z1 = 0, z2=1;
            for(int i=0;i<n-1&&z1<2*n&&z2<2*n;i=i+2){
                arr[i]=z1;
                arr[i+1]=z2;
                z1 = z1+4;
                z2=z2+4;
            }
            for(int i=0;i<2*n;i++){
                for(int j=0;j<2*n;j++){
                    if(found(arr,i,n)==1&&found(arr,j,n)==1){
                        ch[i][j]='#';
                    }
                    else if(found(arr,i,n)==1&&found(arr,j,n)==0){
                        ch[i][j]='.';
                    }
                    else if(found(arr,i,n)==0&&found(arr,j,n)==1){
                        ch[i][j]='.';
                    }
                    else if(found(arr,i,n)==0&&found(arr,j,n)==0){
                        ch[i][j]='#';
                    }
                }
            }
        }
        else{
            int z=(n/2+1)*2;
            int arr[z];
            int z1 = 0, z2=1;
            for(int i=0;i<z-1&&z1<2*n&&z2<2*n;i=i+2){
                arr[i]=z1;
                arr[i+1]=z2;
                z1 = z1+4;
                z2=z2+4;
            }
            for(int i=0;i<2*n;i++){
                for(int j=0;j<2*n;j++){
                    if(found(arr,i,z)==1&&found(arr,j,z)==1){
                        ch[i][j]='#';
                    }
                    else if(found(arr,i,z)==1&&found(arr,j,z)==0){
                        ch[i][j]='.';
                    }
                    else if(found(arr,i,z)==0&&found(arr,j,z)==1){
                        ch[i][j]='.';
                    }
                    else if(found(arr,i,z)==0&&found(arr,j,z)==0){
                        ch[i][j]='#';
                    }
                }
            }
        }
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                cout<<ch[i][j];
            }
            cout<<endl;
        }
        t--;
    }
}