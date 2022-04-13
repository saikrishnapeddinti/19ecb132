// calculator types
#include<stdio.h>
#include<math.h>
main()
{float distance,area,time,volume,temp,f_c,c_f,x;
printf("enter the distance: ");
scanf("%f",& distance);
printf("enter the area: ");
scanf("%f",& area);
printf("enter the time: ");
scanf("%f",& time);
printf("enter the volume: ");
scanf("%f",& volume);
printf("enter the temp: ");
scanf("%f",& temp);
f_c=((temp-32)*5/9);
c_f=((9/5*(temp)+32));
printf("no 1 is km to m\n");
printf("no 2 is sqkm to sqm\n");
printf("no 3 is hrs to sec\n");
printf("no 4 is lit to ml\n");
printf("no 5 is f to c\n");
printf("no 6 is m to km\n");
printf("no 7 is sqm to sqkm\n");
printf("no 8 is sec to hrs\n");
printf("no 9 is ml to l\n");
printf("no 10 is c to f\n");
printf("enter your choice from 1 to 10:");
scanf("%f",& x);
if(x==1)
{printf("\n the distance in metres is:%f",distance*1000);}
else if(x==2)
{printf("the area in squaremetres is:%f/n",area*1000000);}
else if(x==3)
{printf("the time in sec is:%f",time*3600);}
else if(x==4)
{printf("the time in ml is:%f",volume*1000);}
else if(x==5)
{printf("the time in c is:%f",f_c);}
else if(x==6)
{printf("the distance in km is:%f",distance*0.001);}
else if(x==7)
{printf("the area in squarekm is:%f",area*0.000001);}
else if(x==8)
{printf("the time in hrs is:%f",time/3600);}
else if(x==9)
{printf("the volume in litres is:%f",volume*0.001);}
else if(x=10)
{printf("the temp in f is:%f",c_f);}
}



