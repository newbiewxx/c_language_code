/*2019年10月17日 12:21:19 */
#include<stdio.h>
/* 习题： 将数组中的N个元素相反顺序输出  

  分析题目: 
 相反输出，即：
 a[0]  < - > a[n-1]  交换
 a[1]  < - > a[n-2]  交换
 a[2]  < - > a[n-3]  交换
 ........................
 */

int main(void) {
	int a[10], i, t, *p, *q;
	printf("please input 10 numbers:");
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	p = a;  // p指向数组a的首地址
	q = a + 9;  // q指向数组q的尾地址
	
	while (p < q) {
		t = *p;
		*p = *q;
		*q = t;
		p++; 
		q--; 
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);  // 打印输出倒数后的数组
	}
	return 0;
}
