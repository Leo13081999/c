// four partner share equal profit

#include<stdio.h>

int main()
{
    int a,b,c,d,net;
    printf("Enter capital of a\tb\tc\td :");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    net=a+b+c+d;

    printf("Share Of A :%d\t Profit Share :%d\n",(a/net),10000*(a/net));
    printf("share Of B :%d\t Profit Share :%d\n",(b/net),10000*(b/net));
    printf("Share Of c :%d\t Profit Share :%d\n",(c/net),10000*(c/net));
    printf("Share Of d :%d\t Profit Share :%d\n",(d/net),10000*(d/net));

}