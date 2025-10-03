#include<iostream>
using namespace std;
void swap(char* ch1 , char* ch2){
    char temp =*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        char arr[5];
        cin>>arr;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
        int count=0;
        bool flag = true;
        for(int i=0;i<4;i++){
            if(arr[i]==arr[i+1]){
                flag=true;
                count++;
            }
            else{
                flag= false;
            }
            if(count>0&&flag==false){
                break;
            }
        }
        if(count+1<3){
            cout<<4<<endl;
        }
        else if(count+1==4){
            cout<<-1<<endl;
        }
        else{
            cout<<6<<endl;
        }
        t--;
    }
}