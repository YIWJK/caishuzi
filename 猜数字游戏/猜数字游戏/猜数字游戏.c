#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1.���Ի�����һ�������
//2.������
void menu()
{
	printf("*********************************\n");
	printf("****     1.play   0.exit     ****\n");
	printf("*********************************\n");
}

//RAND_MAX---32767
void game()
{
	//1.����һ�������
	int ret = 0;
	int guess = 0;//���ղµ�����
    //ʱ�������ǰ�������ʱ��=���������ʼʱ�䣨1970.1.1 0:0:0��=xxxx��
	//��ʱ�����������������������
	//time_t time(time_t *timer)
	//NULL--��ָ��

	ret = rand() % 100 + 1;//����1-100֮�������

	//2.������
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬����ˣ�\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����һ�ξ͹��ˣ���ҪƵ������
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}