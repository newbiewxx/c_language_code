/*2019年10月16日 21:49:20*/
#include<stdio.h>
/* 例题1 */
int main()
{
	int m, * p;  // 定义整形变量m 和指针变量 p
	
	p = &m;    // 此时 p 指向 m 的内存地址
	printf("Please input m:");
	scanf("%d", p);   
	printf("%d\n", *p);  // 输出结果为你输入的数据

	m = 4;
	printf("%d,%d\n", m, *p);  // 输出 4,4

	*p = 8; // 同样会影响 m 的值

	printf("%d,%d\n", m, *p);  // 输出结果为 8，8
	
	return 0;

}
