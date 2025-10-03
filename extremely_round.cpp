#include<iostream>
using namespace std;
int power(int count){
    if(count==1){
        return 1;
    }
    else return 10*power(count-1);
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int z=n , count=0;
        while(z>0){
            count++;
            z=z/10;
        }
        int f=n/power(count);
        int ans = 9*(count-1)+f;
        cout<<ans<<endl;
        t--;
    }
}