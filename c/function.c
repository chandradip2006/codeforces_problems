#include<stdio.h>
void greet(){
    printf("hey , good morning\n");
    printf("how are you?\n");
    return;
}
int main(){
    printf("hey , i am chandradip karmakar\n");
    greet();  // calling the function
    printf("i study ai IIT Kanpur\n");
    greet();
    greet();
    return 0;
}