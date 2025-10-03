#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch1[21];
    cin>>ch1;
    int count=0;
    while(ch1[count]!='\0'){
        count++;
    }
    char ch[n][count];
    for(int i=0;i<count;i++){
        ch[0][i]=ch1[i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<count;j++){
            cin>>ch[i][j];
        }
    }
    bool flag=true;
    int count1=0;
    for(int j=0;j<count;j++){
        for(int i=0;i<n-1;i++){
            if(ch[i][j]!=ch[i+1][j]){
                flag=false;
                break;
            }
        }
        if(flag){
            count1++;
        }
        else break;
    }
    cout<<count1<<endl;
}