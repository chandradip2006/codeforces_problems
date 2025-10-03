#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int l = str.length();  // does not count the last null element
    cout << "Length of string is:"<<l;
}