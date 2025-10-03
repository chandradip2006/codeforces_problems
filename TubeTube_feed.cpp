#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,x;
        cin>>n>>x;
        bool flag=false;
        int a[n],b[n],c[n],count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]+i<=x){
                c[count]=i;
                flag=true;
                count++;
            }
        }
        for(int j=0;j<n;j++){
                cin>>b[j];
        }
        if(flag){
            int z=b[c[0]];
            for(int i=1;i<count;i++){
                if(b[c[i]]>z){
                    z=b[c[i]];
                }
            }
            int z1;
            for(int i=0;i<count;i++){
                if(b[c[i]]==z){
                    z1=c[i];
                    break;
                }
            }
            cout<<z1+1<<endl;
        }
        else cout<<-1<<endl;
        t--;
    }
}