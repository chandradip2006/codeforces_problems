#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count1=0;
        int count2=0;
        int count3=0;
        int count4=0;

        for(int i=0;i<n;i++){
            if(i%4==0){
                count1++;
            }
            if(i%4==1){
                count2++;
            }
            if(i%4==2){
                count3++;
            }
            if(i%4==3){
                count4++;
            }
        }

        if(count1!=count4||count2!=count3){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
    }
}