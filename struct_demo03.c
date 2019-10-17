/* 2019年10月17日 18:43:28 */
#include<stdio.h>
/*
结构体指针类型： 指向结构体变量时，该指针的值就是他所指向的结构体变量的首地址，通常称为结构体类型指针
定义的一般形式： 结构体类型名 * 结构体类型名指针变量
*/
int main(void) {
  struct student {
    int num;
    char name[20];
    float score[3];
   } * s;  // 定义一个结构体类型指针
	/*
	在C语言中，利用指针访问结构体变量成员的方式有：
	1. (* 结构体类型名 ). 成员名    (*s).name
	2. 结构体类型指针变量 -> 成员名    s -> name
	*/

	struct Date {
		int day;
		int month;
		int year;
	};
	struct Date today, * p;
	
	p = &today;  // 将P指向结构体变量
	p -> day = 17;  
	p -> month = 10;
	p -> year = 2019;

	printf("Today's date is %d-%d-%d\n",p -> year, p -> month, p -> day); // 打印输出

	return 0;	
}

