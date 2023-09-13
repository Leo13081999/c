/*find elligiblity of voting 
print  name of voter, age of voter*/

#include<stdio.h>

int main()
{
// declration of variable
char vnm[20];
int age;

//print output value in user
printf("Enter Name Of Voter :");
scanf("%s",&vnm);
printf("Enter Age Of Voter :");
scanf("%d",&age);

// condition if age greater than 18
if (age>18)
{
printf("%s is elligible age :%d\n",vnm,age);
}
else
{
printf("%s is not elligible in vote age :%d\n",vnm,age);
}

}



