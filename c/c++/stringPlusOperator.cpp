#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string s = str;
    cout<<str<<" "<<str.length()<<endl;;
    s = str + " garg";
    cout<<s<<" "<<s.length()<<endl;;
    s = "garg " + str;
    cout<<s<<" "<<s.length()<<endl;;
}