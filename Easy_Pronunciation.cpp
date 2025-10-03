#include<iostream>
using namespace std;
int vowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char ch[n+1];
        cin>>ch;
        int z=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(i!=n-1){
                if(vowel(ch[i])==1){
                    if((i-z)<4){
                        z=i+1;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
            }
            else{
                if(vowel(ch[i])!=1){
                    if((n-z)>=4){
                        flag=false;
                    }
                }
                else{
                    if((n-1-z)>=4){
                        flag=false;
                    }
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        t--;
    }
}