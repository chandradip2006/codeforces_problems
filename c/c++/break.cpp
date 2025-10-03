#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i = n - 1 ; i >= 1 ; i--){
        if(n % i == 0){
            cout<<"the greatest factor of "<<n<<" except "<<n<<"is: "<<i;
            break;   // to get out of the loop whenever the condition satisfy for the first time
        }
        else continue;
    }
}