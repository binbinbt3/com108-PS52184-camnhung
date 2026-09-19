#include <stdio.h>
int main(){
    int a=5;
    int b=10;
    printf("truoc khi hoan vi: a=%d , b = %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("sau khi hoan vi: a = %d , b= %d\n",a,b);
    return 0;
}