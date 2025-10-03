#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int z=min({i, j, 2*n-2-i, 2*n-2-j});
            cout<<n-z<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;

    pattern(n);
}