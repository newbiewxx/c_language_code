/* 2019年10月17日 16:50:33 */
#include<stdio.h>
/* 结构体数组: 一个结构体这能存储一个学生的数据，要想存储多个学生，就应该选用结构体数组存储 */
int main(void) {
	/*struct student {  // 定义一个学生结构体
		long num;
		char name[20];
		char sex;
		int age;
		float score;
	};
	
	struct student s[3] = { {2019001, "wxx", 'M', 21, 80},    // 定义一个结构体数组变量
							{2019002, "gjj", 'M', 20, 80},
							{2019003, "cxb", 'M', 22, 80} };
	int age = s[0].age + s[1].age;  // 取s[0] 和 s[1] 的年纪相加赋值给普通变量age
	printf("%d\n", age);
	*/


	/* 练习题: 
	有五名学生，数据包括学号，姓名，三门课程成绩，从键盘输入学生成绩，然后显示每一位学生的平均成绩
	*/
	struct student {  // 定义学生结构体
		int num;
		char name[20];
		float score[3];
	};
	struct student s[5];  // 定义一个学生结构体数组，大小为5
	int i, j;
	float sum, avg[5];

	for (i = 0; i < 5; i++) {
		scanf("%d%s", &s[i].num, &s[i].name);
		sum = 0;  // 循环一次清零
		
		for (j = 0; j < 3; j++) {
			scanf("%f", &s[i].score[j]);
			sum += s[i].score[j];  // 统计三门成绩总合
		}
		avg[i] = sum / 3;  // 求取平均值
	}
	for (i = 0; i < 5; i++) {
		printf("%s:%.2f\n",s[i].name,avg[i]);  // 打印输出
	}
	return 0;
}
