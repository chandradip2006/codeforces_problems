#include<bits/stdc++.h>
using namespace std;
int check(vector<long long>&v , int s, int e ,  long long tar){
    if(s==e){
        return s;
    }
    // if(e-s==1){
    //     if(sum-v[e]>=tar){
    //         return e;
    //     }
    //     else return s;
    // }
    int mid=s+(e-s)/2;
    if(v[mid]>tar){
        return check(v , s , mid , tar);
    }
    else if(v[mid]<tar){
        return check(v , mid+1 , e , tar);
    }
    else{
        return mid;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k , x;
        cin>>n>>k>>x;
        vector<long long>v;
        long long int sum=0;
        for(int i=0;i<n;i++){
            int r;
            cin>>r;
            // sum=sum+r;
            v.push_back(r);
        }

        for(int i=n-1;i>=0;i--){
            sum=sum+v[i];
            v[i]=sum;
        }
        reverse(v.begin() , v.end());

        if(x%sum==0){
            if(x/sum>k){
                cout<<0<<endl;
            }
            else{
                cout<<n*(k-x/sum)+1<<endl;
            }
        }
        else{
            if(x/sum>=k){
                cout<<0<<endl;
            }
            else{
                long long tar=x-(x/sum)*sum;
                int idx=check(v , 0 , n-1  , tar);
                cout<<n*(k-x/sum)-idx<<endl;
            }
        }

    }
}