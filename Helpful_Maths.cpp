#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[101];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    int arr[count];
    int count1=0;
    for(int i=0;i<count;i=i+2){
        arr[count1]=ch[i]-'0';
        count1++;
    }
    sort(arr,arr+count1);
    for(int i=0;i<count1-1;i++){
        cout<<arr[i]<<'+';
    }
    cout<<arr[count1-1]<<endl;
}