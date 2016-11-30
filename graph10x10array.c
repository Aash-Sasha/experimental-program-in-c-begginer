#include <stdio.h>
#include <conio.h>

void main()
{  
	int g[10][10], b, a, n, p, x, y;
	//make value of all element 0 by default
	for (a = 1; a <= 10; a = a + 1)
	{
		for (b = 1; b <= 10; b = b + 1)
		{
			g[a][b] = 0;
		}
	}

	//welcome screen
	printf("-=AaSh=-\n10x10 graph\n");

	//ask number of point user want to plot
	printf("How many points you want to plot ?\n");
	scanf_s("%d", &n);

	//getting input to know which point to be plotted
	for (p = 1; p <= n; p = p + 1)
	{
		printf("\n%d.INPUT value of x and y coordinate of point %d separated by a space\n", p, p);
		scanf_s("%d %d",&x,&y);
		g[y][x] = 1;
	}

	//print the graph
	for (a = 10; a >=1; a = a - 1)
	{
		if (a > 9)
			printf("\n%d| ", a);
		else
			printf("\n%d | ", a);
		for (b = 1; b <= 10; b = b + 1)
		{
			printf("%d ", g[a][b]);
		}
	}
	printf("\n-----------------------\n    1 2 3 4 5 6 7 8 9 10\n");
	_getch();
}
