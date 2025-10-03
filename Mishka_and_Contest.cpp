#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0;
    int count1=0;
    while(i<n){
        if(v[i]<=k){
            count1++;
        }
        else {
            break;
        }
        i++;
    }

    if(count1==n){
        cout<<n<<endl;
    }
    else{
        int count2=0;
        int j=n-1;
        while(j>=0){
            if(v[j]<=k){
                count2++;
            }
            else{
                break;
            }
            j--;
        }

        cout<<count1+count2<<endl;
    }
}