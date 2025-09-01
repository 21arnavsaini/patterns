//Q23: Write a program to calculate a library fine based on late days.
#include <stdio.h>
int main(){
int Late_days;
printf( "Provide the number of days you are late for submission of book : " );
scanf("%d",&Late_days);
if(Late_days==0)
{printf("NO fine");
}
else if(Late_days<=7)
{ printf("Fine for the late days is %d",Late_days*2);
}
else if(Late_days>7 && Late_days<= 15)
{ printf("Fine for the late days is %d",Late_days*4);
}
else if(Late_days>15&&Late_days<=30)
{printf("Fine for the laye days is %d",Late_days*6);
}
else if(Late_days>30)
{printf("Membership cancelled");}
return 0;
}
