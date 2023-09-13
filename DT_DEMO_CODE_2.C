/*Program to display the allocated memory size to variable variables */

#include<stdio.h>

int main()

{
    int a;
    float b;
    char c;
    char d[10];
    unsigned int e;
    long f;
    double g;

    printf("memory size for int :%d\n",sizeof(a));
    printf("memory size for float :%d\n",sizeof(b));
    printf("merory size for char :%d\n",sizeof(c));
    printf("memory size for string :%d\n",sizeof(d));
    printf("memory size for unsign int :%d\n",sizeof(e));
    printf("memory size of long :%d\n",sizeof(f));
    printf("memory size of double :%d\n",sizeof(g));
}