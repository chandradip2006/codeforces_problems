#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"enter the length of the array: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int z1;
    for(int i = 0 ; i < v.size()-1 ; i++){
        int r1 = -1;
        if(v[i] <= v[i+1]){
            r1 = 1;
        }
        z1=r1;
    }
    int z2;
    for(int i = 0 ; i < v.size()-1 ; i++){
        int r2 = -1;
        if(v[i] >= v[i+1]){
            r2 = 1;
        }
        z2 = r2;
    }
    if(z1==1 || z2==1){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
}