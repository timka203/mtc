#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
void task6()
{
	printf("1 делали\n");
	int a[10] = { 0 };
	int x, y = 0;
	int min = 100;
	int max = 0;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = -50 + rand() % 150;
		printf("%d\n\n", a[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		
		if (a[i] < min)
		{
			min = a[i];
			y = i;
		}
	}
	max=min*3;
	a[y] = a[9];
	a[9] = max;
	
	printf("\nAfter sorting\n");

	for (size_t i = 0; i < 10; i++)
	{
		printf("A[%d] = %d\n", i, a[i]);
	}

}
void task5()
{
	printf("1,6 делали\n");
	int a[8] = { 0 };
	int x=0, y = 0;
	int min = 100;
	long int m = 1;
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = -50 + rand() % 150;
		printf("%d\n\n", a[i]);
		if (a[i] < 0)
			x++;
		if (a[i] == 0)
			y++;
		if (a[i > 0])
			m = a[i] * m;
	}
	
	printf("\n%d(-), %d(0)\, %d(+)n", x, y,m);
}
void task4()
{
	printf("1 делали\n");
	int a[8] = { 0 };
	int x,y = 0;
	int min = 100;
	int max = 0;
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = 50 + rand() % 50;
		printf("%d\n\n", a[i]);
	}
	for (size_t i = 0; i < 8; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	x = min + max;
	y = max - min;
	printf("\n%d, %d\n",x,y);
}
void task3()
{
	printf("1 делали\n");
	int a[8] = { 0 };
	int count = 0;
	
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = 50 + rand() % 50;
		printf("%d\n\n", a[i]);
	}
	for (size_t i = 0; i < 8; i++)
	{
		if (a[i] > a[0])
		{
			count++;
		}
	}
	printf("\nAfter sorting  (%d)are bigger than first element\n", count);

	for (size_t i = 0; i < 8; i++)
	{
		printf("A[%d] = %d\n", i, a[i]);
	}

}




void task2()
{
	printf("1 делали\n");
	int a[8] = { 0 };
	
	int it = 0;
	int max = 0;
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = 50 + rand() % 50;
		printf("%d\n\n", a[i]);	
	}
	for (size_t i = 0; i < 8; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			it = i;
		}
	}
	a[it] = a[0];
	a[0] = max;
	printf("\nAfter sorting\n");

	for (size_t i = 0; i < 8; i++)
	{
		printf("A[%d] = %d\n   ", i, a[i]);
	}

}
void task1()
{
	printf("1 делали\n");
	int a[8] = { 0 };
	int x = 0;
	int it = 0;
	for (size_t i = 0; i < 8; i++)
	{
		a[i] = 50 + rand() % 50;
		printf("%d\n\n", a[i]);

		for (int i = 0; i < 8 - 1; i++)
		{
			for (int j = 8 - 2; j >= i; j--)
			{
				if (a[j] < a[j + 1])
				{
					x = a[j];
					a[j] = a[j + 1];
					a[j + 1] = x;

					it++;
				}
			}
		}

	}
	printf("\nAfter sorting\n");

	for (size_t i = 0; i < 8; i++)
	{
		printf("A[%d] = %d   ", i, a[i]);
	}
	printf("\n--------------------\n");
	for (int i = 0; i < 8 - 1; i++)
	{
		int x = 0;
		int it = 0;
		for (int j = 8 - 2; j >= i; j--)
		{
			if (a[j] > a[j + 1])
			{
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;

				it++;
			}
		}
	}


	printf("\nAfter sorting\n");

	for (size_t i = 0; i < 8; i++)
	{
		printf("A[%d] = %d    ", i, a[i]);
	}



}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}