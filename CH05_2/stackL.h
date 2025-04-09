#pragma once
typedef int element;	// ���� ����(element)�� �ڷ����� int�� ����

typedef struct stackNode {
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top; // ���� ����ü�� ��带 ����� top�� ����ü�����ͷ�

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();