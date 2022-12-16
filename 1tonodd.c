//print odd nu for 1 to n using while loop


#include<stdio.h>
main()
{
	int a=1;
	int n;
	
	printf("enter value n:");
	scanf("%d",&n);
	while(a<=n)
		{
				if(a%2==0)
				{
						printf("%d\n",a);
				}
			
			a++;
		}
}
