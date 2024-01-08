#include<stdio.h>

//int add(int x, int y) {
//	return x + y;
//}
//
//int minus(int x, int y) {
//	return x - y;
//}
//
//int multyply(int x, int y) {
//	return x * y;
//}


	void swap(int *m, int *n) {
		int temp = *m;
		*m = *n;
		*n = temp;
		//값 바꿔치기 하려면 포인터를 써야 됨// 동적할당, 정적할당에 의해
	}

int main() {

	int a = 3;
	int b = 5;
	swap(&a, &b);
	printf("a:%d b:%d", a, b);

	//int a= add(10, 20);
	//int b = minus(10, 5);
	//int c = multyply(10, 10);
	//printf("%d %d %d", a, b, c);

	//void goJapan() {
	//	printf("일본여행 가고 싶어요\n");
	//}

	//while (1) {
	//	goJapan();
	//}



	return 0;

}