#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#pragma warning( disable : 4996 )
int main()
{
	int i, j, a = 0;
	int abc[SIZE] = { 0 };
	printf("�п�J5�ӼƦr:\n");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &abc[i]);

	}

	for (j = 0; j < SIZE; j++)
	{
		if (abc[j]>a)
		{
			a = abc[j];
		}
	}

	printf("�̤j�ƭȬ�:%d", a);
	system("pause");
	return 0;
}