#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;

    cin>>str1>>str2;
    int i=str1.size()-1;
    int j=str2.size()-1;

    while(i>=0&&j>=0){
        if(str1[i]==str2[j]){
            i--;
            j--;
        }
        else break;
    }

    cout<<i+j+2<<endl;
}