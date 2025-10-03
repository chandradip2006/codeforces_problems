#include<iostream>
using namespace std;
int vowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    else return 0;
}
int main(){
   int n=3;
   int count1=0;
   int arr[3];
   while(n>0){
        char ch[100];
        for(int i=0;i<100;i++){
            cout<<ch[i];
        }
        int count=0;
        for(int i=0;i<count;i++){
            if(vowel(ch[i])==1){
                count++;
            }
        }
        arr[count1]=count;
        count1++;
        n--;
   }
   if(arr[0]==5&&arr[1]==7&&arr[2]==5){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
}