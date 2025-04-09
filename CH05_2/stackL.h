#pragma once
typedef int element;	// 스택 원소(element)의 자료형을 int로 정의

typedef struct stackNode {
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top; // 시험 구조체로 노드를 만들고 top도 구조체포인터로

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();