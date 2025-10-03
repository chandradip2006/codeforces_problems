#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    int arr[5];
    for(int i=0;i<5;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        if(ch[i]=='a'){
            arr[0]++;
        }
        else if(ch[i]=='b'){
            arr[1]++;
        }
        else if(ch[i]=='c'){
            arr[2]++;
        }
        else if(ch[i]=='d'){
            arr[3]++;
        }
        else arr[4]++;
    }
    int z1=arr[0],z2=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>z1){
            z1=arr[i];
        }
        if(arr[i]<z2){
            z2=arr[i];
        }
    }
    cout<<z2<<" "<<z1<<endl;
}
