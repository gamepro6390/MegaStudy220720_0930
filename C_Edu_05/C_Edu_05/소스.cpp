/*
Chapter 05
*/

#include <stdio.h>
#include <string>

using namespace std;

int main(void)
{
	int Number;
	char* Name;

	printf("�Է� : ");
	scanf_s("%d", &Number);

	if (Number == 1)
	{
		Name = (char*)"hong";
	}
	else if (Number == 2)
	{
		Name = (char*)"Lim";
	}
	else 
	{
		Name = (char*)"Lee";
	}
	printf("����� : %s\n", Name);

	switch (Number)
	{
	case 1:
		printf("ȫ�浿");
		break;
	case 2:
		printf("�Ӳ���");
		break;
	case 3:
		printf("�̸���");
		break;
	default:
		printf("�߸��Է��Ͽ����ϴ�.");
	}
}