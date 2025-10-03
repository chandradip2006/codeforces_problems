#include<bits/stdc++.h>
#define MOD 2025
using namespace std;

vector<vector<int>>multiply(vector<vector<int>>v1 , vector<vector<int>>v2){
        vector<vector<int>>ans;
        for(int i=0;i<v1.size();i++){
            vector<int>v;
            for(int j=0;j<v2[0].size();j++){
                int sum=0;
                for(int k=0;k<v1[0].size();k++){
                    sum=sum+v1[i][k]*v2[k][j];
                    sum=sum%MOD;
                }
                
                v.push_back(sum%MOD);
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
    vector<vector<int>>pdt(vector<vector<int>>v , long long int n){
        if(n==0){
            return {{1 , 0} , {0, 1}};
        }
        else if(n==1){
            return v;
        }
        if(n%2==0){
            vector<vector<int>>u=pdt(v , n/2);
            return multiply(u , u);
        }
        else{
            vector<vector<int>>u=pdt(v , n/2);
            return multiply(multiply(u , u) , v);
        }
    }
    int nthFibonacci(long long int n) {
        // code here
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        
        else{
            vector<vector<int>>v;
            v={{1 , 1} , {1 , 0}};
            vector<vector<int>>u={{1} , {0}};
            
            vector<vector<int>>ans=multiply(pdt(v , n-1) ,u);
            
            return ans[0][0]%MOD;
        }
    }

int main(){
    long long n;
    cin>>n;

    cout<<nthFibonacci(n)<<endl;
}