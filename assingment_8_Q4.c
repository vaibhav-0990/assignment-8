#include<stdio.h>
int main()
{
	int i,n,x,sum=0;
	printf("give n:\n");
	scanf("%d",&n);
	printf("give %d numbers:",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);

		sum=(sum+(x%10));
	}
	printf("output:%d",sum);
}


