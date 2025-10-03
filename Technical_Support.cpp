#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(ch[i]=='Q'){
                count1++;
            }
            else count2++;
        }
        if(ch[n-1]=='Q'){
            cout<<"No"<<endl;
            t--;
            continue;
        }
        else{
            if(count1>count2){
                cout<<"No"<<endl;
            }
            else{
                int count3=0,count4=0;
                for(int i=n-1;i>0;i--){
                    if(!(ch[i]=='Q'&&ch[i-1]=='A')){
                        if(ch[i]=='Q'){
                            count3++;
                        }
                        else count4++;
                    }
                    else break;
                }
                if(count3+1<=count4){
                    cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;
            }
        }   
        t--;
    }
}