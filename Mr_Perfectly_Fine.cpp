#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        int count1=0, count2=0, count3=0;
        while(n--){
            int m;
            cin>>m;
            string s;
            cin>>s;
            if(s=="10"){
                a[count1]=m;
                count1++;
            }
            if(s=="01"){
                b[count2]=m;
                count2++;
            }
            if(s=="11"){
                c[count3]=m;
                count3++;
            }
        }
        if(count3>0){
            sort(c,c+count3);
            if(count1>0&&count2>0){
                sort(a , a+count1);
                sort(b , b+count2);
                if((a[0]+b[0])<c[0]){
                    cout<<a[0]+b[0]<<endl;
                }
                else cout<<c[0]<<endl;
            }
            else cout<<c[0]<<endl;
        }
        else{
            if(count1>0&&count2>0){
                sort(a , a+count1);
                sort(b , b+count2);
                cout<<a[0]+b[0]<<endl;
            }
            else cout<<-1<<endl;
        }
    }
}