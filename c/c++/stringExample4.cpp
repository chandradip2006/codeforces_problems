#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a string of length of greater than 5: ";
    cin>>s;
    int i = 1;
    int j = 4;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}