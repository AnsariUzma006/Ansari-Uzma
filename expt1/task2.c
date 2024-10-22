#include<stdio.h>

int main(){

int Physics,Chemistry,Maths,Average;

printf("\t\t\t****Student Eligibility Calculation****\n\n\n");

printf("Enter Physics Marks:");
scanf("%d",&Physics);
printf("Enter Chemistry Marks:");
scanf("%d",&Chemistry);
printf("Enter Maths Marks:");
scanf("%d",&Maths);
Average= (Physics+Chemistry+Maths)/3;
printf("PCM Average=%d\n",Average);
Average>50?printf("You are elligible for admission\n"):("You are not elligible for admission\n");

return 0;
}
