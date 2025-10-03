#include<bits/stdc++.h>
using namespace std;

int count(string &s){
    int call=0;
    stack<char>st;
    int count=0;
    int z=s.size();
    while(count<z){
        if(st.empty()){
            if(s[count]==')'){
                call++;
            }
            else {
                st.push(s[count]);
            }
        }
        else {
            if(st.top()=='('){
                if(s[count]==')'){
                    st.pop();
                }
                else {
                    st.push(s[count]);
                }
            }
            else {
                st.push(s[count]);
            }
        }
        count++;
    }
    call=call+st.size();
    return call;
}
int main(){
    string str;
    cin>>str;
    cout<<count(str)<<endl;
}