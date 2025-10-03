#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int l = str.length();
    for(int i = 0 ; i < l ; i++){
        if(i % 2 == 0){
            str[i] = 'a';
        }
        else continue;
    }
    cout<<str;
}