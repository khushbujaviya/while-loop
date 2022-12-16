//print sum 1 to n using whlile


#include<stdio.h>
main()
{
	int a=1;
	int n;
	int sum=0;
	
	printf("enter value n:");
	scanf("%d",&n);
	
	while(a<=n)
	{
			sum+=a;
		a++;
	
	
}
	printf("%d\n",sum);

}
 
