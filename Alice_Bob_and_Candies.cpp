#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
            int i=1,j=n-1;
            int count=1;
            int sum1=v[0],sum2=0;
            while(i<=j){
                int sum=0;
                if(sum<=v[i-1]){
                    while(sum<=v[i-1]){
                        sum+=v[j];
                        j--;
                    }
                    sum2+=sum;
                    count++;
                }
                sum=0;
                if(sum<=v[j+1]){
                    while(sum<=v[j+1]){
                        sum+=v[i];
                        i++;
                    }
                    sum1+=sum;
                    count++;
                }
            }
            cout<<count<<" "<<sum1<<" "<<sum2<<endl;
    }
}