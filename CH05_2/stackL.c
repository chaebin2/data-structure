#include <stdio.h>
#include "stackL.h"
#include <stdlib.h>

// ������ ���� �������� Ȯ���ϴ� ����
int isStackEmpty() {
	if (top == NULL) return 1;
	else return 0;
}

// ������ top�� ���Ҹ� �����ϴ� ����
void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;	// ���� ��带 top�� ���� ����
	top = temp;			// top ��ġ�� ���� ���� �̵�
}

// ������ top���� ���Ҹ� �����ϴ� ����
element pop() {
	element item;
	stackNode* temp = top;

	if (isStackEmpty()) {
		printf("\n\n Stack is empty! \n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;	// top ��ġ�� ���� ��� �Ʒ��� �̵�
		free(temp);			// ������ ����� �޸� ��ȯ
		return item;		// ������ ���� ��ȯ
	}
}

// ������ top ���Ҹ� �˻��ϴ� ����
element peek() {
	if (isStackEmpty()) {
		printf("\n\n Stack is empty!\n");
		return 0;
	}
	else {
		return(top->data);	// ���� top�� ���� ��ȯ
	}
}

// ������ ���Ҹ� top���� bottom ������ ����ϴ� ����
void printStack() {
	stackNode* p = top;
	printf("\n STACK [ ");
	while (p) {		// p�� 0�� �ƴϸ� ��� ���Ϲ��� ������ �׷�����?
		printf("%d ", p->data);
		p = p->link;
	}
	printf("] ");
}
