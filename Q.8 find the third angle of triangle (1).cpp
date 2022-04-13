//c programme to find all angles of a triangle if two angles are given//
#include<stdio.h>
int main()
{
	int a,b,c;
	
	//input two angles of the triangle//
	printf("enter two angles of the triangle");
	scanf("%d%d",&a,&b);
	
	//compute third angle//
	c=180-(a+b);
	
	//print the value third angle//
	printf("third angle of the triangle=%d",c);
}

