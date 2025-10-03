#include<bits/stdc++.h>
using namespace std;
typedef struct node1{
    int roll1;
    char str1[200];
}NODE1;

typedef struct node2{
    int roll2;
    string dept;
    string branch;
}NODE2;

typedef struct node{
    int roll;
    float spi_1;
    float spi_2;
    float cpi;
}NODE;

void swap(NODE* x , NODE* y){
    NODE temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    freopen("college.txt" , "r" , stdin);
    // freopen("final1.txt" , "w" , stdout);
    int n=1210;
    NODE1 arr1[1210];
    int count=0;
    while(n--){
        cin>>arr1[count].roll1;
        int idx=0;
        cin>>arr1[count].str1[idx];
        while(arr1[count].str1[idx]!='\n'){
            idx++;
            cin>>arr1[count].str1[idx];
        }
        cout<<arr1[count].roll1<<"   "<<arr1[count].str1<<endl; 

        count++;
    }

    // for(int i=0;i<1210;i++){
    //     cout<<arr1[i].roll1<<"   "<<arr1[i].str1<<endl;   
    // }
    // fclose(fopen("roll_name.txt"));
    // int count;

    // freopen("roll_branch.txt" , "r" , stdin);
    // int n;
    // n=1210;
    // NODE2 arr2[1210];
    // count=0;
    // while(n--){
    //     cin>>arr2[count].roll2;
    //     cin>>arr2[count].dept;
    //     cin>>arr2[count].branch;

    //     count++;
    // }

    // for(int i=0;i<1210;i++){
    //     cout<<arr2[i].roll2<<" "<<arr2[i].dept<<" "<<arr2[i].branch<<endl;
    // }
    // // freopen("spi.txt" , "r" , stdin);
    // n=1200;
    // int z=1200;
    // NODE arr[1200];
    // count=0;

    // while(n--){
    //     cin>>arr[count].roll;
    //     cin>>arr[count].spi_1;
    //     cin>>arr[count].spi_2;
    //     cin>>arr[count].cpi;

    //     count++;
    // }

    // bool flag = false;
    // for(int i=0;i<z-1;i++){
    //     flag=false;
    //     for(int j=0;j<z-1-i;j++){
    //         if(arr[j].cpi<arr[j+1].cpi){
    //             swap(arr[j] , arr[j+1]);
    //             flag=true;
    //         }
    //     }
    //     if(!flag){
    //         break;
    //     }
    // }

    // for(int i=0;i<1200;i++){
    //     for(int j=0;j<1210;j++){
    //         if(arr[i].roll==arr1[j].roll1){
    //             cout<<i+1<<".  "<<arr1[j].roll1<<"    "<<arr1[j].str1<<"    ";
    //             break;
    //         }
    //     }

    //     for(int j=0;j<1210;j++){
    //         if(arr[i].roll==arr2[j].roll2){
    //             cout<<arr2[j].dept<<"    "<<arr2[j].branch<<"    ";
    //             break;
    //         }
    //     }
    //     cout<<arr[i].spi_1<<"    "<<arr[i].spi_2<<"    "<<arr[i].cpi<<endl;
    // }

    // freopen("final1.txt" , "w" , stdout);



}