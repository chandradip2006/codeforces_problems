#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"enter the no of elements of the array: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int x;
    cout<<"enter a number: ";
    cin>>x;
    int count = 0;
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] == x){
            count++;
        }
    }
    cout<<"the no of the element "<<x<<" is: "<<count;
}