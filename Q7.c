#include<stdio.h>
void main(){
    int p=1;
    int q=1;
    int r=p||--q;
    int s=p--&&--q;
    int t=p+q+r+s;
    printf("%d",t);
}