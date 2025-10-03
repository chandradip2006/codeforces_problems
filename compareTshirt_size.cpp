#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        char a[51],b[51];
        cin>>a>>b;
        int count1=0,count2=0;
        while(a[count1]!='\0'){
            count1++;
        }
        while(b[count2]!='\0'){
            count2++;
        }
        if(a[count1-1]!=b[count2-1]){
            if(a[count1-1]=='L'){
                cout<<'>'<<endl;
            }
            else if(b[count1-1]=='L'){
                cout<<'<'<<endl;
            }
            else{
                if(a[count1-1]=='M'){
                    cout<<'>'<<endl;
                }
                else cout<<'<'<<endl;
            }
        }
        else{
            if(a[count1-1]=='L'){
                if(count1>count2){
                    cout<<'>'<<endl;
                }
                else if(count1<count2){
                    cout<<'<'<<endl;
                }
                else cout<<'='<<endl;
            }
            else{
                if(count1>count2){
                    cout<<'<'<<endl;
                }
                else if(count1<count2){
                    cout<<'>'<<endl;
                }
                else cout<<'='<<endl;
            }
        }
        t--;
    }
}