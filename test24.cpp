#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int roll;
    float spi_1;
    float spi_2;
    float cpi;
}NODE;
int main(){
    freopen("spi.txt" , "r" , stdin);
    // freopen("cpi.txt" , "w" , stdout);
    int n=1200;
    int z=n;
    NODE arr[1200];
    int count=0;
    while(n--){
        cin>>arr[count].roll;
        cin>>arr[count].spi_1;
        cin>>arr[count].spi_2;
        cin>>arr[count].cpi;

        count++;

    }

    bool flag=false;
    for(int i=0;i<z;i++){
        // flag=false;
        // for(int j=0;j<z-1-i;j++){
        //     if(arr[j].cpi<arr[j+1].cpi){
        //         swap(arr[j] , arr[j+1]);
        //         flag=true;
        //     }
        // }
        // if(!flag){
        //     break;
        // }

        if(arr[i].roll==241140){
            cout<<arr[i].roll<<"   "<<arr[i].spi_1<<"   "<<arr[i].spi_2<<"   "<<arr[i].cpi<<endl;
            break;
        }
    }
    // cout<<"roll no"<<" | "<<"spi_1"<<"  |  "<<"spi_2"<<"  |  "<<"cpi"<<"  |"<<endl;
    // cout<<"-------------------------------------"<<endl;
    // for(int i=0;i<1200;i++){
    //     // cout<<arr[i].roll<<"   "<<arr[i].spi_1<<"   "<<arr[i].spi_2<<"   "<<arr[i].cpi<<endl;

    //     printf("%d  |  %.2f  |  %.2f  |  %.2f  | \n" , arr[i].roll,arr[i].spi_1 , arr[i].spi_2 , arr[i].cpi);
    //     // cout<<"-------------------------------------"<<endl;
    // }
}