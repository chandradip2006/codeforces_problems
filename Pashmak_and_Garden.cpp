#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int main(){
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        int z=y2-y1;
        cout<<x1+z<<" "<<y1<<" "<<x2+z<<" "<<y2<<endl;
    }
    else if(y1==y2){
        int z=x2-x1;
        cout<<x1<<" "<<y1+z<<" "<<x2<<" "<<y2+z<<endl;
    }
    else{
        if(mod(x1-x2)==mod(y1-y2)){
            cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2<<endl;
        }
        else cout<<-1<<endl;
    }
}