#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter The Value Of A=");
	scanf("%d",&a);
	printf("Enter The Value Of B=");
	scanf("%d",&b);
	printf("Enter The Value Of C=");
	scanf("%d",&c);
	
	(a<b)?(a<c)?printf("A is Minimum"):printf("C is minimum")
		 :(b<c)?printf("B is Minimum"):printf("C is Minimum");
}
