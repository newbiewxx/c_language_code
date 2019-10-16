/*2019年10月16日 21:49:54*/
#include<stdio.h>
/* 1.从键盘输入两个整数，按大到小 排序 */
int main()
{
	int *p1, *p2, a, b, *t;
	printf("please input two numbers:");
	scanf("%d%d", &a, &b);

	p1 = &a;
	p2 = &b;

	if (*p1 < *p2) {
		// 交换指向
		t = p1;
		p1 = p2;
		p2 = t;
	}
	printf("%d,%d\n", *p1, *p2);

	return 0;
}
