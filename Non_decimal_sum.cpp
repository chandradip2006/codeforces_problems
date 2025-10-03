#include<iostream>
#include<cmath>
using namespace std;
// void sum1(int x , int y){
//     if(x<=y){
//         int ld= x%y;
//         if(ld>=0&&ld<=9){
//             cout<<(char)(ld+'0');
//         }
//         else{
//             cout<<(char)(ld+'A'-10);
//         }
//     }
//     else{
//         int ld=x%y;
//         if(ld>=0&&ld<=9){
//             return sum1(x/y , y);
//             cout<<(char)(ld+'0');
//         }
//         else{
//             return sum1(x/y , y);
//             cout<<(char)(ld+'A'-10);
//         }
//     }
// }
int main(){
    int n , rad , sum=0;
    cin>>n>>rad;
    while(n--){
        char ch[6];
        cin>>ch;
        int count=0;
        while(ch[count]!='\0'){
            count++;
        }
        for(int i= count-1;i>=0;i--){
            if(ch[i]>='0'&&ch[i]<='9'){
                sum=sum+(ch[i]-'0')*pow(rad , count-1-i);
            }
            else{
                sum=sum+(ch[i]-'A'+10)*pow(rad , count-1-i);
            }
        }
    }
    // sum1(sum , rad);
    char ch1[10];
    int count1=0;
    while(sum>0){
        int ld=sum%rad;
        if(ld<=9&&ld>=0){
            ch1[count1]=(char)(ld+'0');
            count1++;
        }
        else {
            ch1[count1]=(char)(ld+'A'-10);
            count1++;
        }
        sum=sum/rad;
    }
    for(int i= count1-1;i>=0;i--){
        cout<<ch1[i];
    }
}