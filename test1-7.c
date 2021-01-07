#include<stdio.h>
void printRectangle(int height, int weidth)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < weidth; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	printRectangle(3, 5);
	return 0;
}