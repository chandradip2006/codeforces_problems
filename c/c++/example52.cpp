// star plus
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the odd no of rows: ";
//     cin>>n;
//     int z = n / 2;
//     for(int i = 1 ; i <= z ; i++){
//         for(int j = 1 ; j <= z ; j++){
//             cout<<"  ";
//         }
//         cout<<"* "<<endl;
//     }
//     for(int i = 1 ; i <= n ; i++){
//         cout<<"* ";
//     }
//     cout<<endl;
//     for(int i = 1 ; i <= z ; i++){
//         for(int j = 1 ; j <= z ; j++){
//             cout<<"  ";
//         }
//         cout<<"* "<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of odd rows: ";
    cin>>n;
    int z = n / 2 + 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i == z || j == z){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}