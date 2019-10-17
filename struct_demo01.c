/* 2019年10月17日 15:00:45 */
#include<stdio.h>
/*
结构体类型: 将一个事物的各种属性封装在一起，建立关系来共同描述一个事物。

类型声明：
struct 结构体名 :
{
	数据类型1 成员名 1;
	数据类型2 成员名 2;
	数据类型3 成员名 3;
	..................
};
例如一个学生的事体，用结构体来描述
*/
int main(void) {

struct student {   // 定义一个学生的结构体
	char no[10];
	char name[10];
	float height;
	int age;
	char sex[1];
};

// 结构体还可以嵌套结构体类型
struct date {    // 定义了一个date 结构体
	int month;
	int day;
	int year;
};

struct Employeel {
	char name[20];
	char department[30];
	struct date birthday;   // 嵌套了另一个结构体
	long box;
};

/*
结构体变量的声明:

结构体类型名 变量名列表;

*/
struct student student1,student2;  // 定义了两个学生结构体变量
/* 注意： 一个结构体变量中的成员占用内存中的连续存储空间 */ 

// 直接定义法
struct student1 {   // 定义一个学生的结构体
	char no[10];
	char name[10];
	float height;
	int age;
	char sex[1];
}student3,student4;  // 在末尾定义结构体变量

/* 结构体变量的引用：
结构体变量名 . 成员名

注意 ： 
    1.成员名与程序中普通变量名相同，但二者并不代表同意对象
		2.不能将结构体作为一个整体进行输出，输入，赋值
		3.如果成员本身即是结构体，需要一层层进入到最低一级的成员
		4.结构体变量成员可以和普通变量一样进行各种运算
		5.可以引用结构体变量成员的地址，也可以引用结构体变量的地址
		  (1) & 结构体变量名 . 成员名
		  (2) & 结构体变量名

结构体变量的初始化：
*/
struct stu {   // 定义一个学生的结构体
	char no[10];
	char name[10];
	float height;
	int age;
	char sex[4];
}s = {"2019", "wang", 52.00, 22, "man" } ;

    printf("NO:%s\nName:%s\nHeigth:%f\nAge:%d\nSex:%s\n",s.no,s.name,s.height,s.age,s.sex);
	return 0;
}
