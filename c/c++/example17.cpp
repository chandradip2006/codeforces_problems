#include<iostream>
using namespace std;
int main(){
    float x , y;
    cout<<"enter the X coordinate: ";
    cin>>x;
    cout<<"enter the Y coordinate: ";
    cin>>y;
    if (x > 0 && y > 0) cout<<"the point lies on 1st quadrant";
    else if (x < 0 && y > 0) cout<<"the point lies on 2nd quadrant";
    else if (x < 0 && y < 0) cout<<"the point lies on 3rd quadrant";
    else if (x > 0 && y < 0) cout<<"the point lies on 4th quadrant";
    else if (x != 0 && y == 0) cout<<"the point lies on x axis";
    else if (x == 0 && y != 0) cout<<"the point lies on Y axis";
    else cout<<"the point lies at origin";

}