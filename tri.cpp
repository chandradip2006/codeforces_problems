// #include<iostream>
//  using namespace std;
//  #define MOD 1000000007
//  int up(int n , long long int a , long long int b , int count){
//      if(count==n){
//          return a%MOD;
//      }
//      long long int z=a%MOD;
//      a=((a*3)%MOD+b)%MOD;
//      b=((b*3)%MOD+z)%MOD;
//      return up(n , a , b , count+1)%MOD;
//  }
//  int main(){
//      int n=20;
//     //  cin>>n;
 
//      cout<<up(n , 1 , 0 , 1)<<endl;
//  }

 #include<bits/stdc++.h>
 using namespace std;
 #define MOD 1000000007
//  int up(int n , long long int a , long long int b , int count){
//     //  if(count==n){
//     //      return a%MOD;
//     //  }
//     //  long long int z=a%MOD;
//     //  a=((a*3)%MOD+b)%MOD;
//     //  b=((b*3)%MOD+z)%MOD;
//     //  return up(n , a , b , count+1)%MOD;


//  }
 int main(){
     int n=20;
    //  cin>>n;
    long long int p=1;
    for(int i=1;i<=n-2;i++){
        p=p*2;
    }
     if(n==1){
        cout<<1<<endl;
     }
     else {
        cout<<p*(2*p+1);
     }
    //  cout<<up(n , 1 , 0 , 1)<<endl;
 }

