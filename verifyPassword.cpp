#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n , count1=0,count2=0;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        bool flag = true;
        for(int i = 0 ; i < n ; i++){
            if(!((ch[i]>='0'&&ch[i]<='9')||(ch[i]>='a'&&ch[i]<='z'))){
                flag=false;
                t--;
                break;
            }
        }
        if(flag==false){
            continue;
        }
        for(int i = 0 ; i < n ; i++){
            if(ch[i]>='0'&&ch[i]<='9'){
                count1++;
            }
            else if(ch[i]>='a'&&ch[i]<='z'){
                count2++;
            }
        }
        for(int i = 0 ; i < n-1 ; i++){
            if(count1==0||count2==0){
                if(ch[i]>ch[i+1]){
                    flag=false;
                    t--;
                    break;
                }
            }
            else{
                if(ch[i]>='a'&&ch[i]<='z'){
                    if(i<count1){
                        flag=false;
                        t--;
                        break;
                    }
                }
            }
        }
        if(flag==true){
            for(int i=0; i < count1-1;i++){
                if(ch[i]>ch[i+1]){
                    flag=false;
                    t--;
                    break;
                }
            }
            for(int j = count1;j<n-1;j++){
                if(ch[j]>ch[j+1]){
                    flag = false;
                    t--;
                    break;
                }
            }
        }
        bool flag1 = flag;
        if(flag1==false){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
        }
        t--;
    }
}