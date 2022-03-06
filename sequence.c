include<stdio.h>

void search(int []);
void sequence(int []);

int main()
{
	int x[10] = {1,5,4,8,9,2,0,6,11,7};
	int ch;

	printf("Enter your choice:\n1.Search\n2.Sequence\n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			search(x);
			break;
		case 2:
			sequence(x);
			break;
	}
	
	return 0;
}

void search(int x[])
{
	int num, i, flag=0;

	printf("Enter the number to search: \n");
	scanf("%d",&num);

	for(i=0; i<10; i++)
	{
		if(num == x[i])
		{
			flag=1;
		}
	}

	if(flag == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}

void sequence(int x[])
{
	int i;

	for(i=0; i<10; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

