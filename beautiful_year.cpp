#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int distinct(int x){
    int arr[4];
    int count=0;
    while(x>0){
        arr[count]=x%10;
        count++;
        x=x/10;
    }
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    bool flag=true;
    for(int i=0;i<3;i++){
        if(arr[i]==arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag){
        return 1;
    }
    else return 0;
}
int main(){
    int n;
    cin>>n;
    n++;
    while(distinct(n)!=1){
        n++;
    }
    cout<<n<<endl;
}