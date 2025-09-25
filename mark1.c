#include<stdio.h>
#include<conio.h>
int main()
{
printf("\t\t\t\t\t\t\tBCA-a");
printf("\n________________________________________________________________________________________________________________________");
printf("\nname:ravi\t\t\t\t\t\t\t\treg no:001");
printf("\n_______________________________________________________________________________________________________________________");
float mark[5]={70,75,80,85,90};
float total=mark[0]+mark[1]+mark[2]+mark[3]+mark[4];
float average=total/5;
printf("\ntamil\t\t\t\t\t\t:%5.2f",mark[0]);
printf("\nenglish\t\t\t\t\t\t:%5.2f",mark[1]);
printf("\nmaths\t\t\t\t\t\t:%5.2f",mark[2]);
printf("\nscience\t\t\t\t\t\t:%5.2f",mark[3]);
printf("\nsocial\t\t\t\t\t\t:%5.2f",mark[4]);
printf("\n_______________________________________________________________________________________________________________________");
printf("\ntotal\t\t\t\t\t\t:%5.2f\t\t\tavg:%5.2f",total,average);
printf("\n_______________________________________________________________________________________________________________________");
if(average>50)
printf("\nresult:pass");
else
printf("\nresult:fail");
getch();
return 0;
}
