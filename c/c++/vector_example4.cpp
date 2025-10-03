#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"enter the length of the array:";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int sum1 = 0 , sum2 = 0;
    for(int i = 0 ; i < v.size(); i++){
        if(i % 2 == 0){
            sum1 += v[i];
        }
        else {
            sum2 += v[i];
        }
    }
    cout<<"the difference is: "<<sum1 - sum2;
}