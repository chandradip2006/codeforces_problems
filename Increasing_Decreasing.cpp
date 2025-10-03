#include<iostream>
using namespace std;
void output(int y,int i,int count,int z){
    if(count==0){
        cout<<z<<" ";
    }
    else{
        output(y-i,i+1,count-1,z);
        cout<<y-i<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y,n;
        cin>>x>>y>>n;
        int z=((n-2)*(n-1))/2;
        if(y-z-x>=n-1){
            int r=y-z;
            cout<<x<<" ";
            output(y,0,n-2,r);
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        t--;
    }
}