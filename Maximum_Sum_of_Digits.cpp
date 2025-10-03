#include<iostream>
using namespace std;
long long power(int x){
    if(x==1){
        return 10;
    }
    else return 10*power(x-1);
}
int main(){
    long long n;
    cin>>n;
    long long int z=n;
    int count=0;
    while(z>0){
        count++;
        z=z/10;
    }
    long long k=n/power(count-1);
    long long int p= k*power(count-1)-1;
    long long int r=n-k*power(count-1)+1;
    int sum=0;
    while(p>0){
        int ld=p%10;
        sum=sum+ld;
        p=p/10;
    }
     while(r>0){
        int ld=r%10;
        sum=sum+ld;
        r=r/10;
    }
    cout<<sum<<endl;
}