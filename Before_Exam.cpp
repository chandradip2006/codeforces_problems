#include<iostream>
using namespace std;
int main(){
    int d,sum;
    cin>>d>>sum;
    int a[d][2];
    int sum1=0,sum2=0;
    for(int i=0;i< d;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
            if(j==0){
                sum1=sum1+a[i][j];
            }
            else sum2=sum2+a[i][j];
        }
    }
    if(sum1<=sum&&sum<=sum2){
        cout<<"YES"<<endl;
        int sum3=0 , sum4=0 , sum5=0 , temp;
        for(int i=0;i<(d-1);i++){
            temp = sum3;
            for(int j=a[i][0];j<=a[i][1];j++){
                sum3=(sum3+j);
                for(int k=i+1;k<d;k++){
                    sum4=sum4+a[k][0];
                    sum5=sum5+a[k][1];
                }
                if(sum4<=(sum-sum3)&&(sum-sum3)<=sum5){
                    cout<<j<<" ";
                    break;
                }
                else sum3=temp;
            }
            sum4=0,sum5=0;
        }
        cout<<sum-sum3<<endl;
    }
    else cout<<"NO"<<endl;
}