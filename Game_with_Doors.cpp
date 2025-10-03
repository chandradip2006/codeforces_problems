#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int l , r , L ,R;
        cin >> l >> r >> L >> R;
        if(l>R||L>r){
            cout<<1<<endl;
        }
        else if(l>=R||L>=r){
            cout<<2<<endl;
        }
        else if((l<=R&&l>=L&&r<=R&&r>=L)){
            cout<<!(!(l-L))+!(!(r-R))+(r-l)<<endl;
        }
        else if((L<=r&&L>=l&&R<=r&&R>=l)){
            cout<<!(!(L-l))+!(!(R-r))+(R-L)<<endl;
        }
        else if(L>l&&L<r&&R>r){
            cout<<2+(r-L)<<endl;
        }
        else if(L<l&&l<R&&r>R){
            cout<<2+(R-l)<<endl;
        }
        t--;
    }
}
