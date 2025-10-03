#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int count1=0;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            int x=str[i]-'0';
            v.push_back(x);
            if(x==1){
                count1++;
            }
        }
        int z=sqrt(n);
        
        if(z*z==n){
            int arr[z][z];
            int count=0;
            for(int i=0;i<z;i++){
                for(int j=0;j<z;j++){
                    arr[i][j]=v[count];
                    count++;
                }
            }

            count=0;
            bool flag=true;
            for(int i=0;i<z;i++){
                if(arr[0][i]==1){
                    count++;
                }
                else{
                    flag=false;
                    break;
                }
            }

            for(int i=z-1;i>=0;i--){
                if(arr[i][0]==1){
                    count++;
                }
                else{
                    flag=false;
                    break;
                }
            }

            for(int i=0;i<z;i++){
                if(arr[i][z-1]==1){
                    count++;
                }
                else{
                    flag=false;
                    break;
                }
            }

            for(int i=z-1;i>=0;i--){
                if(arr[z-1][i]==1){
                    count++;
                }
                else{
                    flag=false;
                    break;
                }
            }

            if(flag==false){
                cout<<"No"<<endl;
            }
            else{
                if(count-4==count1){
                    cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;
            }
        }
        else cout<<"No"<<endl;
    }
}