#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>v;
        int max_num=0;
        for(int i=0;i<n;i++){
            vector<int>u;
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                max_num=max(max_num , x);
                u.push_back(x);
            }
            v.push_back(u);
        }

        pair<int , int>p;
        int count1=0;

        // int max_count=0;
        vector<int>freq;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(v[i][j]==max_num){
                    count1++;
                    count++;
                    p={i , j};
                }
            }
            freq.push_back(count);
            // max_count=max(count , max_count);
        }
        vector<int>idx;
        for(int i=0;i<n;i++){
            if(freq[i]>1){
                idx.push_back(i);
            }
        }

        if(idx.size()>1){
            cout<<max_num<<endl;
        }
        else{
            if(idx.size()==0){
                // int count2=0;
                // for(int i=0;i<n;i++){
                //     if(v[i][p.second]==max_num){
                //         count2++;
                //     }
                // }
                // if(count2==count1){
                //     cout<<max_num-1<<endl;
                // }
                // else cout<<max_num<<endl;
                // bool flag=false;
                // count1--;
                // for(int i=0;i<m;i++){
                //     int z=count1;
                //     if(v[p.first][i]==max_num){
                //         z++;
                //     }
                //     int count3=0;
                //     for(int j=0;j<n;j++){
                //         if(v[j][i]==max_num){
                //             count3++;
                //         }
                //     }
                //     if(count3==z){
                //         flag=true;
                //         break;
                //     }
                // }

                // if(flag){
                //     cout<<max_num-1<<endl;
                // }
                // else cout<<max_num<<endl;
                int num1=0;
                int num2=0;
                for(int i=0;i<n;i++){
                    bool flag=false;
                    for(int j=0;j<m;j++){
                        if(v[i][j]==max_num){
                            flag=true;
                            break;
                        }
                    }
                    if(flag){
                        num1++;
                    }
                }

                for(int i=0;i<m;i++){
                    bool flag=false;
                    for(int j=0;j<n;j++){
                        if(v[j][i]==max_num){
                            flag=true;
                            break;
                        }
                    }
                    if(flag){
                        num2++;
                    }
                }

                if(num1<=2||num2<=2){
                    cout<<max_num-1<<endl;
                }
                else cout<<max_num<<endl;
            }
            else{
                bool flag=false;
                count1=count1-freq[idx[0]];
                for(int i=0;i<m;i++){
                    int z=count1;
                    if(v[idx[0]][i]==max_num){
                        z++;
                    }
                    int count3=0;
                    for(int j=0;j<n;j++){
                        if(v[j][i]==max_num){
                            count3++;
                        }
                    }
                    if(count3==z){
                        flag=true;
                        break;
                    }
                }

                if(flag){
                    cout<<max_num-1<<endl;
                }
                else cout<<max_num<<endl;
            }
        }
    }
}