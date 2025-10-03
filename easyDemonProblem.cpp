#include<iostream>
using namespace std;
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int m1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            m1[i][j]=arr1[i]*arr2[j];
        }
    }
    while(q>0){
        int r , sum=0;
        cin>>r;
        while(sum!=r){
            int m2[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    m2[i][j]=m1[i][j];
                }
            }
            sum=0;
            for(int i=0;i<n;i++){
                int c=0;
                for(int j=0;j<m;j++){
                    m2[i][j]=0;
                }
                for(int k=0;k<n;k++){
                    m2[k][c]=0;
                }
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(m2[i][j]!=0){
                            sum=sum+m2[i][j];
                        }
                    }
                }
            }
        }
        if(sum==r){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        q--;
    }
}