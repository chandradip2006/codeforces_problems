#include<stdio.h>
#include<string.h>
int main(){
        char ch[1000];
        scanf("%[^\n]s" , ch);
        printf("%s" , ch);
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     bool flag = true;
//     while(flag){
//         string s;
//         cin>>s;
//         if(s.size()==0){
//             flag = false;
//             break;
//         }
//         else{
//             cout<<s<<endl;
//         }
//     }
// }