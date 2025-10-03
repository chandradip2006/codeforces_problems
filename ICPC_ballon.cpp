#include<iostream>
using namespace std;
void swap(char* ch1,char* ch2){
    char temp =*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(ch[j]>ch[j+1]){
                    swap(&ch[j],&ch[j+1]);
                }
            }
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(ch[i]!=ch[i+1]){
                count++;
            }
        }
        cout<<n+(count+1)<<endl;
        t--;
    }
}