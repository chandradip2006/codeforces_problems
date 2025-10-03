#include<iostream>
using namespace std;
void swap(char* ch1,char* ch2){
    char temp=*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        char ch1[4],ch2[4];
        cin>>ch1>>ch2;
        swap(&ch1[0],&ch2[0]);
        cout<<ch1<<" "<<ch2<<endl;
        t--;
    }
}