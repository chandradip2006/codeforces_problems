#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y;
        cin>>x>>y;
        int count=0;
        if(y%2==0){
            count=count+(y/2);
            if(7*count>=x){
                cout<<count<<endl;
            }
            else{
                int z=x-7*count;
                if(z%15==0){
                    count=count+(z/15);
                    cout<<count<<endl;
                }
                else{
                    count=count+(z/15+1);
                    cout<<count<<endl;
                }
            }
        }
        else{
            count=count+(y/2+1);
            if(7*(y/2)+11>=x){
                cout<<count<<endl;
            }
            else{
                int z=x-7*(y/2)-11;
                if(z%15==0){
                    count=count+(z/15);
                }
                else{
                    count=count+(z/15+1);
                    cout<<count<<endl;
                }
            }
        }
        t--;
    }
}