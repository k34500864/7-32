#include<stdio.h>
int main(void) {
	int num, i;
	scanf("%d", &num);
	for (i = 2; i <= num; i++)
	{
		if(i == num)
		{
			printf("此數為質數\n");
			break;
		}
		else if (num % i == 0)
		{
			printf("此數不是質數\n");
			break;
		}
	}
}