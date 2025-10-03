#include<iostream>
using namespace std;
int main(){
    float l , b;
    cout<<"enter the length of the rectangle: ";
    cin>>l;
    cout<<"enter the breadth of the rectangle: ";
    cin>>b;
    float p = 2 * (l + b);
    float a = l * b;
    if(p > a) cout<<"the perimeter is greater than its area";
    else if(a > p) cout<<"the area is greater than its perimeter";
    else cout<<"the area is equal to its perimeter";
}