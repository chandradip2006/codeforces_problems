#include<iostream>
using namespace std;
int main(){
    char k;
    cout<<"Enter a character: ";
    cin>>k;
    char ch[] = {'a' , 'e' , 'd' , 'p', 'l' , 'r' , 's' , 'h' , 'z' , 'n'};
    int count = 0;
    for(int i = 0 ; i < 10 ;i++){
        if(k <= ch[i]){
            count++;
        }
        else continue;
    }
    int arr[count];
    int j = 0;
    for(int i = 0 ; i < 10 ; i++){
        if(k <= ch[i]){
            arr[j] = ch[i] - k;
            j++;
        }
        else continue;
    }
    int l = arr[0];
    for(int i = 0 ; i < count ; i++){
        if(arr[i] <= l){
            l = arr[i];
        }
        else continue;
    }
    char k1 = k + l;
    cout<<"The smallest character is: "<<k1;
}