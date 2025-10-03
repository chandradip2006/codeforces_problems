// printing the characters and their ascii values
#include<iostream>
using namespace std;
int main(){
    int i = 0 ;
    while(i < 26){
        int z = 65 + i;
        char ch = (char) z;
        cout<<65 + i<<" : "<<ch<<endl;
        i++;
    }
}
