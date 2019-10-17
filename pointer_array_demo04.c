/* 2019年10月17日 12:53:17 */
#include<stdio.h>
/* 经典习题， 利用指针作函数参数，完成数据的交换 */
 
void swap1(int *p1, int *p2) {   // 定义函数，用指针变量作为参数
	int temp;
	temp = *p1;
	*p1  = *p2;
	*p2 = temp;
}

void swap2(int p1, int p2) {   // 定义函数，用变量作为参数
	int temp;
	temp = p1;
	p1  = p2;
	p2 = temp;
}

int main(void) {
	int a, b;
	int * pointer_1, * pointer_2;

	pointer_1 = &a; // pointer_1 指向 a的内存单元
	pointer_2 = &b; // pointer_1 指向 b的内存单元

	printf("please input two numbers:");
	scanf("%d,%d", pointer_1, pointer_2); // 如输入 4,5

	printf("交换前: a = %d, b = %d\n", a, b);   // 4 5

	swap1(pointer_1, pointer_2);  // 调用函数
	printf("交换前: a = %d, b = %d\n", a, b);   // 5 4

	swap2(a, b);  // 调用函数
	printf("交换前: a = %d, b = %d\n", a, b);   // 5 4
	/*  注意，此时函数的调用并不能交换值，实参与形参单向传递，不能改变实参的内容  */
 
	
	return 0;
}
