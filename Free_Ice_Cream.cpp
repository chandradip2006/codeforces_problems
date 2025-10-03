#include<iostream>
using namespace std;
int main(){
    long long int n,x;
    cin>>n>>x;
    int count=0;
    while(n>0){
        char ch;
        cin>>ch;
        int d;
        cin>>d;
        if(ch=='+'){
            x=x+d;
        }
        else{
            if(x>=d){
                x=x-d;
            }
            else count++;
        }
        n--;
    }
    cout<<x<<" "<<count<<endl;
}