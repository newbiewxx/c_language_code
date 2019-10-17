/* 2019年10月17日 14:00:28 */
#include<stdio.h>
int strToInt(char * p);
/*
习题一：输入一个字符串，将其对应为相应的整形数据后输出
如主调函数接收到字符串为 -12a3b62，则转换为 -12362

 解题思路：
 向字符串顺序扫描，扫描到数字，就将该字符 减去字符 '0' (ASCII)，的到该数字字符的整形数字
 然后乘以10 加上下一个数字字符对应的整形数字，重复过程，直至扫描完毕，若扫描的自费飞数字，则直接跳过.
*/


int main() {
	char str[6];
	int  result;

	printf("please input a string:");
	scanf("%s", str);

	result = strToInt(str);
	printf("The result is : %d\n",result);

	return 0;


}
int strToInt(char * p) {
	int st = 0, sign = 0;
	if (* p == '+' || * p == '-') {  // 判断该字符到底带不带正负号，进行处理
		sign = (*p == '+' ? 1 : -1);
		p++;  // 指针下移一位
	}
	while (*p) {  // 判断该指针是否存在指向
		if (*p >= '0' && *p <= '9') {   // 判断字符是否在 '0' - '9' 之间
			st = st * 10 + (*p - '0');  // 取出该数字字符,然后与之后复合条件的数字字符结合
			p++;  // 指针下移
		}	
	}
	if (sign == -1) {
		st = -st;	
	}
	return st;
}
