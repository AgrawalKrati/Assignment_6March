#include<iostream>
#include<cstring>

using namespace std;

class Matrix
{
	public:
		int row, col;
/*
		Matrix()
		{
			row=0;
			col=0;
		}
		Matrix(int r, int c)
		{
			row=r;
			col=c;
		}
*/
		void getRow()
		{
			cout<< "Enter the row: " << endl;
			cin >> row;
		}

		void getCol()
		{
			cout<< "Enter the columns: " << endl;
			cin >> col;
		}
	
		int a[3][3];

		int setElement(int i, int j, int value)
		{
			a[i][j] = value;
			return a[i][j];
		}

		void AddMatrices(int m1[][3], int m2[][3])
		{
			memset(a, 0, sizeof(a));

			for(int i=0; i<row; i++)
			{
				for(int j=0; j<col; j++)
				{
					a[i][j] = m1[i][j]+m2[i][j];
				}
			}
		}

		void MultiplyMatrices(int m1[][3], int m2[][3])
		{
			memset(a, 0, sizeof(a));

			for(int i=0; i<row; i++)
			{
				for(int j=0; j<col; j++)
				{
					for(int k=0; k<row; k++)
					{
						//printf("m1[%d][%d]=%d m2[%d][%d]=%d a[%d][%d]=%d\n",i,k,m1[i][k],k,j,m2[k][j],i,j,a[i][j]); 
						a[i][j] += m1[i][k]*m2[k][j];
						//printf("a[%d][%d] = %d\n",i,j,a[i][j]);
					}
				}
			}

		}

		void display(int m[][3])
		{
			//printf("Elements of matrix are: \n");
			for(int i=0; i<row; i++)
			{
				for(int j=0; j<col; j++)
				{
					printf("%d ",m[i][j]);
				}
			}
			printf("\n");
		}
};

int main()
{
	Matrix m;
	int rows, columns,i, j, value;

	m.getRow();
	m.getCol();

	Matrix m1, m2;

	cout << "Enter the elements for 1st matrix " << endl;
	for(i=0; i<m.row; i++)
	{
		for(j=0; j<m.col; j++)
		{
			cin >> value;
			m1.setElement(i,j,value);
		}
	}		
	
	cout << "Enter the elements for 2nd matrix " << endl;
	for(i=0; i<m.row; i++)
	{
		for(j=0; j<m.col; j++)
		{
			cin >> value;
			m2.setElement(i,j,value);
		}
	}

	cout << "Elements of 1st matrix are: " << endl;
	m.display(m1.a);

	cout << "Elements of 2nd matrix are: " << endl;
	m.display(m2.a);

	m.AddMatrices(m1.a, m2.a);
	cout << "Addition of 2 matrices is: " << endl;
	m.display(m.a);

	m.MultiplyMatrices(m1.a, m2.a);
	cout << "Multiplication of 2 matrices is: " << endl;
	m.display(m.a);

	return 0;
}

