#include<iostream>
#include<vector>
// 1 2 3 2 1 3 1
using namespace std;
int main(){
// from forward
//     vector<int>v(7);
//     for(int i = 0 ; i < 7 ; i++){
//         cin>>v[i];
//     }

//     int x;
//     cout<<"enter a number: ";
//     cin>>x;

//     int occ = -1;
//     for(int i = 0 ; i < 7 ; i++){
//         if(v[i] == x){
//             occ= i;
//         }
//     }
//     cout<<occ<<endl;

// from backward
    vector<int>v(7);
    for(int i = 0 ; i < 7 ; i++){
        cin>>v[i];
    }

    int x;
    cout<<"enter a number: ";
    cin>>x;

    int occ = -1;
    for(int i = v.size()-1; i >= 0 ; i--){
        if(v[i] == x){
            occ= i;
            break;
        }
    }
    cout<<occ<<endl;

}