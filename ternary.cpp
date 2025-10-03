#include <iostream>
using namespace std;
int main(){
    int n;
    // scanf("%d" , &n);
    cin>>n;
    char x , y;
    // scanf("%c" , &x);
    cin>>x;
    int z1 =0, z2=0;
    while(x!='*'){
        int count=n-1;
        while(count>0){
            // scanf("%c" , &y);
            cin>>y;
            if((x=='+'&&y=='-')||(x=='-'&&y=='+')){
                z1=1;
            }
            else if(y!='+'&&y!='-'&&y!='.'){
                z2=1;
            }
            x=y;
            count--;
        }
        // scanf("%c" , &x);
        cin>>x;
    }
    if(z2==1){
        // printf("INVALID");
        cout<<"INVALID";
    }
    else {
        if(z1==1){
            // printf("SHORT CIRCUIT");
            cout<<"SHORT CIRCUIT";  
        }
        // else printf("OKAY");
        else cout<<"OKAY";
    }
  return 0;
}