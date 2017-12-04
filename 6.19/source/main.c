#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	int face1, face2, sum, roll, frequency[13] = { 0 };
	int i;
	srand(time(NULL));
	for ( roll = 1; roll <= 360000; roll++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		sum = face1 + face2;
		++frequency[sum];
	}
	printf("%4s%17s\n", "SUM", "Frequency");
	for (sum = 2; sum <= 12; sum++)
	{
		printf("%4d%17d\n", sum, frequency[sum]);
	}
	system("pause");
	return 0;
}