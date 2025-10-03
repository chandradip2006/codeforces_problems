#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    char ch[101];
    cin>>ch;
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=0;i<count;i++){
        if(ch[i]=='U'){
            count1++;
        }
        else if(ch[i]=='D'){
            count2++;
        }
        else if(ch[i]=='R'){
            count3++;
        }
        else count4++;
    }
    cout<<x+count3-count4<<" "<<y+count1-count2<<endl;
}