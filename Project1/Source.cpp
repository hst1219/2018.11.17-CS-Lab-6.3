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

	
	printf("�P���1���P���`���B:%d\n", a);
	printf("�P���2���P���`���B:%d\n", b);
	printf("�P���3���P���`���B:%d\n\n",c );

	
	if(max1(a,b,c)==a)	
		printf("����P��������q�ȶi�̦h��?  �P���1\n\n");
	if (max1(a, b, c) == b)
	   printf("����P��������q�ȶi�̦h��?  �P���2\n\n");
	if (max1(a, b, c) == c)
	   printf("����P��������q�ȶi�̦h��?  �P���3\n\n");



	m = bb[1][1] + bb[2][1] + bb[3][1];
	n = bb[1][2] + bb[2][2] + bb[3][2];
	o = bb[1][3] + bb[2][3] + bb[3][3];
	p = bb[1][4] + bb[2][4] + bb[3][4];
	q = bb[1][5] + bb[2][5] + bb[3][5];


	printf("A���P���`�q:%d\n", m);
	printf("B���P���`�q:%d\n", n);
	printf("C���P���`�q:%d\n", o);
	printf("D���P���`�q:%d\n", p);
	printf("E���P���`�q:%d\n\n", q);

	if(max2(m,n,o,p,q)==m)
	   printf("�����ӫ~��o�̦n? �ӫ~A\n\n");
	if (max2(m, n, o, p, q) == n)
		printf("�����ӫ~��o�̦n? �ӫ~B\n\n");
	if (max2(m, n, o, p, q) == o)
		printf("�����ӫ~��o�̦n? �ӫ~C\n\n");
	if (max2(m, n, o, p, q) == p)
		printf("�����ӫ~��o�̦n? �ӫ~D\n\n");
	if (max2(m, n, o, p, q) == q)
		printf("�����ӫ~��o�̦n? �ӫ~E\n\n");


	
	
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