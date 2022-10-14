include<stdio.h>
#include<conio.h>

int main()
{
	clrscr();
	int i;
	int arr[5];
	int max=0;
	int min=0;

	printf("Enter The Number:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}

	max=arr[0];
	min=arr[0];
	for(i=0; i<5; i++)
	{
		if (max<arr[i])
		{
			max=arr[i];
		}
		else if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("Max Number Is: %d\n",max);
	printf("Min Number Is: %d\n",min);
	getch();
	return 0;
}
