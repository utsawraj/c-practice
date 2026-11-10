#include<stdio.h>
int main(){
    //int n;
    //printf("Enter a number");
    //scanf("%d",&n);
    //scope of variable
    int i;
    //agar int i pehle declare kr diye to fir i ka value print hoga
    //wrna nhi hoga print i ka value
    for( i=1;i<=10;i=i+3){
        printf("hello world\n");
    }
    printf("value of i is %d",i);
    // next value dega i ka output me
    return 0;
}
