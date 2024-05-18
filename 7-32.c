#include<stdio.h>
int main(void) {
	int num, i;
	scanf("%d", &num);
	for (i = 2; i <= num; i++)
	{
		if(i == num)
		{
			printf("计借计\n");
			break;
		}
		else if (num % i == 0)
		{
			printf("计ぃ琌借计\n");
			break;
		}
	}
}