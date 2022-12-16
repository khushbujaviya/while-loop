//print factorial  ofn using whlile


#include<stdio.h>
main()
{
	int a=1;
	int n;
	int fac=1;
	
	printf("enter value n:");
	scanf("%d",&n);
	
	while(a<=n)
	{
			fac*=a;
			a++;
	
	
}
	printf("%d\n",fac);

}
