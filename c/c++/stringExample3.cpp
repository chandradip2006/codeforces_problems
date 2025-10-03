#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a even length string: ";
    cin>>s;
    int l = s.length();
    int i = 0;
    int j = l/2 - 1;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}