#include<stdio.h>
int main() {

	/*int a[5] = { 0,1,2,3,4 };
	int* pa = a;
	*(pa + 2) = 10;

	printf("%d", *(pa + 2));
	*/



//���ڿ�
	//char data[] = "megastudy";
	//printf("���° ���ڸ� �ٲܰǰ���?\n");
	//int a;
	//scanf_s("%d",&a);
	//getchar(); //getchar(); ����!
	//printf("���� �ٲܰǰ���?\n");
	//char k;
	//scanf_s("%c",&k);
	//char* pc = data;
	//*(pc + (a-1)) = 'k'; //''Ȭ����ǥ ����!
	//printf("%s", pc);

//���߹迭
	/*int data[2][3] = { 
		{1,2,3},
	    {4,5,6} };
	int* pa = data[0];
	int** ppa;
	ppa = &pa;

	*(pa + 1) = 10;
	pa = data[1];
	*(*ppa + 2) = 20;

	printf("%s", pa);*/
	

	char fruits[3][10] = { "orange","apple","peach" };
	char* pa = fruits[0];
	char* pc;
	char** ppc;
	ppc = &pc;
	int choice = 0, spell;

	printf("���� ���� ��\n");
	int a;
	scanf_s("%d",&a);
	getchar(); //getchar(); ����!
	printf("���� �ٲܰǰ���?\n");
	char k;
	scanf_s("%c",&k);
	char* pc = &fruits;
	*(pc + (a-1)) = 'k'; //''Ȭ����ǥ ����!
	printf("%s", pc);

return 0;

 }