//4.print n to 1 using while



#include<stdio.h>
main()
{
	int a=10;
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	while(a>=n)
	{
		printf("%d\n",a);
		
		a--;
	}
}
