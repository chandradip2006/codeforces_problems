#include<iostream>
#include<math.h>
using namespace std;
float distance(float x1, float y1,float x2, float y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
float min(float x, float y, float z){
    if(x<=y){
        if(x<=z){
            return x;
        }
        else return z;
    }
    else {
        if(y<=z){
            return y;
        }
        else return z;
    }
}
int main(){
    float arr[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    float z1=distance(arr[0][0],arr[0][1],arr[1][0],arr[1][1]);
    float z2=distance(arr[1][0],arr[1][1],arr[2][0],arr[2][1]);
    float z3=distance(arr[0][0],arr[0][1],arr[2][0],arr[2][1]);
    if(z1==z2&&z2==z3){
        cout<<(sqrt(3)*z1*z1)/4<<endl;
    }
    else{
        cout<<min(z1,z2,z3)*min(z1,z2,z3)<<endl;
    }
    
}