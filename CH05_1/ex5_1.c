#include <stdio.h>
#include "stackS.h"
// test
int main(void) {
	element item;
	printf("\n** ���� ���� ���� **\n");
	printStack();
	push(1);	printStack();		// 1 ����
	push(2);  printStack();		// 2 ����
	push(3);	printStack();		// 3 ����

	item = peek();  printStack();	// ���� top�� ���� ���
	printf("peek => %d", item);

	item = pop();  printStack();	// ����
	printf("\t pop  => %d", item);

	item = pop();  printStack();	// ����
	printf("\t pop  => %d", item);

	item = pop();  printStack();	// ����
	printf("\t pop  => %d\n", item);

	getchar();  return 0;
} 