/* A pro for student marksheet 
Input - Student name , roll no and marks obtained in variaous subjects 
Compute - Total ,Percentage 
*/

#include<stdio.h>

int main()

{
    //declaration of variables
    char snm[10];
    int rn,s1,s2,s3,s4,s5,total;
    float per;
    
    //Read data from user
    printf("Enter Student Name:");
    scanf("%s",&snm);
    printf("Enter Roll No:");
    scanf("%d",&rn);
    printf("Enter sub1\tsub2\tsub3\tsub4\tsub5 marks:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    // Compute 

    total=s1+s2+s3+s4+s5; 
    per=(float) total/5;
    
    //
    printf("\t\t\t Marksheet\n");
    printf(" Roll nnumber :%d\t Student Name :%s\n",rn,snm);
    printf("sub1%d\tsub2%d\tsub3%d\tsub4%d\tsub5%d\n",s1,s2,s3,s4,s5);
    printf("total marks Obtained :%d\n",total);
    printf("Percentage :%.2f\n",per);

}
