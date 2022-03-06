#include<stdio.h>

int main()
{
	int a, b, i, t;

	printf("Enter number of elements of array x: \n");
	scanf("%d",&a);

	printf("Enter number of elements of array y: \n");
	scanf("%d",&b);

	int x[a], y[b];

	printf("Enter elements of array X: \n");
	for(i=0; i<a; i++)
	{
		scanf("%d",&x[i]);
	}

	printf("Enter elements of array Y: \n");
	for(i=0; i<b; i++)
	{
		scanf("%d",&y[i]);
	}

	t=a+b;
	int arr[t],j=0,k, temp=0;

	for(i=0; i<a; i++)
	{
		arr[i]=x[i];
	}

	for(i=a; i<t; i++)
	{
		arr[i]=y[j];
		j++;
	}
/*
	for(i=0; i<t; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
*/
	for(i=0; i<t; i++)
	{
		for(k=i;k<t;k++)
		{
			if(arr[i] > arr[k])
			{
				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}

	printf("Elements of array X after Sorting\n");
	for(i=0; i<a; i++)
	{
		x[i] = arr[i];
		printf("%d ",x[i]);
	}
	printf("\n");

	j=0;
	printf("Elements of array Y after Sorting\n");
	for(i=a; i<t; i++)
	{
		y[j] = arr[i];
		printf("%d ",y[j]);
	}
	printf("\n");

	return 0;
}

