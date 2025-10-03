#include<iostream>
#include<vector>
using namespace std;
string addStrings(string num1, string num2) {
    int z1=num1.size();
    int z2=num2.size();
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<z1;i++){
        v1.push_back(num1[i]-'0');
    }
    for(int i=0;i<z2;i++){
        v2.push_back(num2[i]-'0');
    }
    if(z1>=z2){
        for(int i=0;i<z1-z2;i++){
            v2.insert(v2.begin() , 0);
        }
        z2=z1;
    }
    else {
        for(int i=0;i<z2-z1;i++){
            v1.insert(v1.begin() , 0);
        }
        z1=z2;
    }
    for(int i=z1-1;i>0;i--){
        v1[i]=v1[i]+v2[i];
        if(v1[i]>=10){
            v1[i-1]++;
            v1[i]=v1[i]%10;
        }
    }
    v1[0]=v1[0]+v2[0];
    if(v1[0]>=10){
        v1[0]=v1[0]%10;
        v1.insert(v1.begin() , 1);
        z1++;
    }
    string s;
    for(int i=0;i<z1;i++){
        s.push_back('0'+v1[i]);
    }
    return s;
}
int main(){
    string s1 , s2;
    cin>>s1>>s2;
    cout<<addStrings(s1 , s2);
}