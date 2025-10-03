#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<vector<int>>v , vector<string>w , string str){
    unordered_map<string , vector<int>>m;

    for(int i=0;i<v.size();i++){
        m[w[v[i][1]]].push_back(v[i][0]);
    }

    return m[str];

}
int main(){
    solve();
}