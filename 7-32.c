#include<stdio.h>
int main(void) {
	int num, i;
	scanf("%d", &num);
	for (i = 2; i <= num; i++)
	{
		if(i == num)
		{
			printf("���Ƭ����\n");
			break;
		}
		else if (num % i == 0)
		{
			printf("���Ƥ��O���\n");
			break;
		}
	}
}