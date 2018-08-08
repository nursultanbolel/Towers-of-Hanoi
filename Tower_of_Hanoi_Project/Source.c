#include<stdio.h>
#include<math.h>
void T(int, char, char, char);
main()
{
	int num, i, j, a[10], step;
	printf("How many do you play with discs?:");
	scanf_s("%d", &num);
	printf("The beginning step of the game:\nA[");
	for (i = 0, j = num; i < 10, j>0; i++, j--)
	{
		a[i] = j;
		printf("%d ", a[i]);
	}
	printf("]\nB[]\nC[]\n");
	printf("The sequence of moving discs in the game are :\n");
	T(num, 'A', 'B', 'C');
	step = pow(2, num) - 1;
	printf("\nThe number of steps:%d", step);
	printf("\nThe last step of the game:\nA[]\nB[]\nC[");
	for (i = 0, j = num; i < 10, j>0; i++, j--)
	{
		a[i] = j;
		printf("%d ", a[i]);
	}
	printf("]\n");
	system("pause");
}
void T(int num, char peg, char aux, char end)
{
	if (num == 1)
	{
		printf("\n Move disc 1 from peg %c to peg %c", peg, end);
		return;
	}
	T(num - 1, peg, end, aux);
	printf("\n Move disc %d from peg %c to peg %c", num, peg, end);
	T(num - 1, aux, peg, end);
}