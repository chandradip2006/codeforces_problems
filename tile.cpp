#include<bits/stdc++.h>

using namespace std;

int path(int x , int y){
    if(x<0){
        return 0;
    }
    if(x==0){
        return 1;
    }
    return path(x-1,y)+path(x-y,y);
}
int main(){
    int n,m;
    cin>>n>>m;

    cout<<path(n , m)<<endl;
}