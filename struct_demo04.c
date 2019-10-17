/* 2019年10月17日 19:06:32 */
#include<stdio.h>
#include<stdlib.h>
/*
在定义数组的时候，首先就得规划好内存空间，且内存必须数一段连续的内存空间，为了避免造成这种内存的浪费
于是便引入了链表来解决这种情况的缺陷，于是便有了链表数据结构。
一个链表，有多个节点组成， 节点两部分 ： 1. 数据域，保存节点的数据  2.地址域，保存下个节点地址，用于指向下一节点

struct node {
	int num;  // 数据域
	struct node * next; // 地址域, 定义指向自身的指针
};


创建一个链表过程:
1.	首先定义三个指针变量 分别是 头指针 head 以及 p, q 他们都是指向结构体类型的数据
2.	利用动态内存分配 malloc(size)函数开辟一个空间，生成一个新节点，是 p 和 q 都指向它
3.  初始化head为空
4.  从键盘输入一个数据给p所指向的节点
5.  把p的值赋给head,使之指向头结点
6.  利用malloc(size)函数在开辟一个新的空间，生成下一个节点，使p指向它并给它的数据域赋值
7.  将p的值赋给q所指向的节点的地址域变量，是它指向下一个节点，从而连接起来
8.  将p赋值给q，使之也指向下一个节点，为下一次连接做准备
9.  重复 6, 7, 8操作，将会产生若干个连接起来的节点，从而生成链表
*/
*/

/*
输出链表中的数据,首先必须知道头指针head的值，否则无法向下连接
1.  先设一个指针变量p，将head的值赋给p，从而使p指向第一个节点
2.  输出p所指向的节点的数据项
3.  然后是p指向下一节点，p = p -> next
4.  再输出新节点的数据项
5.  重复执行2, 3, 4，直到指针变量p的值为空

创建存入正整数的单链表，并输出该单链表的正整数
*/
struct node {
	int data;
	struct node  * next;
};

struct node * creat(struct node * head) {   // 函数返回的是与结点相同类型的指针
	struct node *p1, *p2;
	p1 = p2 = (struct node * ) malloc(sizeof(struct node));  // 申请新节点
	scanf("%d", &p1 -> data);  // 输入结点的值

	p1 -> next = NULL; // 将新节点的指针置为空

	while (p1 -> data != 0) {
		if (head == NULL) 
			head = p1;  // 空表，插入表头
		else 
			p2 -> next = p1;  // 非空表，接到表尾
		
		p2 = p1;
		p1 = (struct node * ) malloc(sizeof(struct node));  // 申请下一个新结点
		scanf("%d", &p1 -> data);  // 输入结点的值
	}
	p2 -> next = NULL;
	return head;   // 返回链表头指针
}

void print(struct node * head)  // 输出以head为头指针的各个节点的值
{
	struct node * temp;
	temp = head;

	while (temp != NULL) {
		printf("%6d",temp -> data);  //  输出各节点的值
		temp = temp -> next;   // 跟踪链表增长
	}
	printf("\n");
}

int main(void) {
	struct node * head; // 定义头指针
	head = NULL; // 建一个空表
	head = creat(head); // 创建单链表
	print(head); // 打印单链表
	return 0;
}
