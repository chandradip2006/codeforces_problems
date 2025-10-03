#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch[8][8];
        int arr[8];
        for(int i=0;i<8;i++){
            int count =0;
            for(int j=0;j<8;j++){
                cin>>ch[i][j];
                if(ch[i][j]=='#'){
                    count++;
                }
            }
            arr[i]=count;
        }
        int z;
        for(int i=1;i<7;i++){
            if(arr[i-1]==2&&arr[i]==1&&arr[i+1]==2){
                z=i;
                break;
            }
        }
        int z1;
        for(int i=0;i<8;i++){
            if(ch[z][i]=='#'){
                z1=i;
                break;
            }
        }
        cout<<z+1<<" "<<z1+1<<endl;
        t--;
    }
}