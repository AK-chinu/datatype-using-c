#include<stdio.h>
int main(){
    short int a=32768;// Range signed short -32768 to 32767
    printf("%d",a);// Cyclic Property , move clockwise after 32767 we have to move one which is -32768
    return 0;
}