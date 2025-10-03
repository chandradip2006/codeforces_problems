#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }

        vector<string>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            string str;
            cin>>str;
            v.push_back(str);
        }

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]=='U'){
                    nums[i]--;
                }
                else {
                    nums[i]++;
                }
            }
            nums[i]=nums[i]%10;
            if(nums[i]<0){
                nums[i]=10+nums[i];
            }

            cout<<nums[i]<<" ";
        }

        cout<<endl;
    }
}