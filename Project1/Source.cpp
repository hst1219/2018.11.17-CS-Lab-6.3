#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)


int max1(int x, int y, int z);
int max2(int g, int g1, int g2,int g3,int g4);

int main()
{
	int bb[4][6];
	int i, j;
	int a, b, c;
	int m, n, o, p, q;
	
	

	for (i = 0; i < 4; i++)
	{
		if (i == 0)
			printf("%s", "Saleperson");
		else if (i == 1)
			printf("   %d       ", 1);
		else if (i == 2)
			printf("   %d       ", 2);
		else 
			printf("   %d       ", 3);

		
		
		if (i == 0)
		{
			printf("%3c%3c%3c%3c%3c", 'A', 'B', 'C', 'D', 'E');
			printf("\n");
		}
		else
		{
			for (j = 1; j < 6; j++)
			{
				scanf("%d", &bb[i][j]);
			}

		}
	}
	printf("\n\n");

	a = 12 * bb[1][1] + 16 * bb[1][2] + 10 * bb[1][3] + 14 * bb[1][4] + 15 * bb[1][5];
	b = 12 * bb[2][1] + 16 * bb[2][2] + 10 * bb[2][3] + 14 * bb[2][4] + 15 * bb[2][5];
	c = 12 * bb[3][1] + 16 * bb[3][2] + 10 * bb[3][3] + 14 * bb[3][4] + 15 * bb[3][5];

	
	printf("銷售員1的銷售總金額:%d\n", a);
	printf("銷售員2的銷售總金額:%d\n", b);
	printf("銷售員3的銷售總金額:%d\n\n",c );

	
	if(max1(a,b,c)==a)	
		printf("哪位銷售員幫公司賺進最多錢?  銷售員1\n\n");
	if (max1(a, b, c) == b)
	   printf("哪位銷售員幫公司賺進最多錢?  銷售員2\n\n");
	if (max1(a, b, c) == c)
	   printf("哪位銷售員幫公司賺進最多錢?  銷售員3\n\n");



	m = bb[1][1] + bb[2][1] + bb[3][1];
	n = bb[1][2] + bb[2][2] + bb[3][2];
	o = bb[1][3] + bb[2][3] + bb[3][3];
	p = bb[1][4] + bb[2][4] + bb[3][4];
	q = bb[1][5] + bb[2][5] + bb[3][5];


	printf("A的銷售總量:%d\n", m);
	printf("B的銷售總量:%d\n", n);
	printf("C的銷售總量:%d\n", o);
	printf("D的銷售總量:%d\n", p);
	printf("E的銷售總量:%d\n\n", q);

	if(max2(m,n,o,p,q)==m)
	   printf("哪項商品賣得最好? 商品A\n\n");
	if (max2(m, n, o, p, q) == n)
		printf("哪項商品賣得最好? 商品B\n\n");
	if (max2(m, n, o, p, q) == o)
		printf("哪項商品賣得最好? 商品C\n\n");
	if (max2(m, n, o, p, q) == p)
		printf("哪項商品賣得最好? 商品D\n\n");
	if (max2(m, n, o, p, q) == q)
		printf("哪項商品賣得最好? 商品E\n\n");


	
	
	system("pause");
	return 0;
}



int max1(int x, int y, int z)
{
	int maxx;
	maxx = x;
	if (y > maxx)
	 maxx = y;
	if (z > maxx)
	 maxx = z;

	return maxx;
}

int max2(int g, int g1, int g2, int g3, int g4)
{
	int maxxx;
	maxxx = g;
	if (g1 > maxxx)
	maxxx = g1;
	if (g2 > maxxx)
	maxxx = g2;
	if (g3 >= maxxx)
	maxxx = g3;
	if (g4 >= maxxx)
	maxxx = g4;

	return maxxx;
}