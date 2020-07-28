#include<stdio.h>
#include<conio.h>
int main ()
{
	int a [20], n, i;
	int r1=0, r2=0, r3=0, r4=0, r5=0, r6=0;
	printf("Enter the no.of accidents:\n");
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]>=0&&a[i]<=99)
	{
		r1=r1+1;
	}
	else if(a[i]>=100&&a[i]<=199)
	{
		r2=r2+1;
	}
	else if(a[i]>=200&&a[i]<=299)
	{
		r3=r3+1;
	}
	else if(a[i]>=300&&a[i]<=399)
	{
		r4=r4+1;
	}
	else if(a[i]>=400&&a[i]<=499)
	{
		r5=r5+1;
	}
	else if(a[i]>=500)
	{
		r6=r6+1; 
    }
    }
	printf("\nThe resulting frequency counts are");
	printf("\n%d",r1);
	printf("\n%d",r2);
	printf("\n%d",r3);
	printf("\n%d",r4);
	printf("\n%d",r5);
	printf("\n%d",r6);
}
