#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string: ";
    getline(cin,str);
    int l = sizeof(str) / sizeof(str[0]);  //count the last null element of the string
    char ch[] = {'a' , 'e' , 'i' , 'o' , 'u'};
    int count;
    for(int i = 0 ; i < l ; i++){
        for(int j = 0 ; j < 5 ; j++){
            if(str[i] == ch[j]){
                count++;
            }
            else continue;
        }
    }
    cout<<"the no of vowel in the word is: "<<count;
}