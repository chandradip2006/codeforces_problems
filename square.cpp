 #include<iostream>
 using namespace std;
 int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
 }
 int main(){
    int t , z;
    cin>>t;
    while(t>0){
        int arr[4][2];
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<4;i++){
            for(int j=1;j<4;j++){
                if(arr[i][0]==arr[j][0]){
                    z= mod(arr[i][1]-arr[j][1]);
                    break;
                }
            }
            break;
        }
        cout<<z*z<<endl;
        t--;
    }
 }