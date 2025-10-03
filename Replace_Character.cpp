#include<iostream>
using namespace std;
void swap(char* ch1 , char* ch2){
    char temp = *ch1;
    *ch1=*ch2;
    *ch2=temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch1[n+1] , ch[n];
        cin>>ch1;
        for(int i=0;i<n;i++){
            ch[i]=ch1[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(ch[j]>ch[j+1]){
                    swap(&ch[j],&ch[j+1]);
                }
            }
        }
        int arr[n],count=1 , count1=0;
        char ch2[n];
        for(int i=0;i<n;i++){
            if(ch[i]==ch[i+1]){
                count++;
            }
            else{
                arr[count1]=count;
                count=1;
                ch2[count1]=ch[i];
                count1++;
            }
        }
        arr[count1]=count;
        ch2[count1]=ch[n-1];
        count1++;
        int z=arr[0],z1=INT_MIN;
        for(int i=0;i<count1;i++){
            if(arr[i]>=z){
                z=arr[i];
                z1=i;
            }
        }
        for(int i=0;i<n;i++){
            if(ch1[i]!=ch2[z1]){
                ch1[i]=ch2[z1];
                break;
            }
        }
        cout<<ch1<<endl;
    }
}