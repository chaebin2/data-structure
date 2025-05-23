#include<stdio.h>
#include "stackS.h"

int top = -1;

// 스택이 공백 상태인지 확인하는 연산
int isStackEmpty() {
	if (top == -1) return 1;
	else return 0;
}
// 스택이 포화 상태인지 확인하는 연산
int isStackFull() {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}
// 스택의 top에 원소를 삽입하는 연산
void push(element item) {
	if (isStackFull()) {	// 포화상태인 경우
		printf("\n\n Stack is FULL! \n");
		return;
	}
	else stack[++top] = item; 
}

// 스택의 top에서 원소를 삭제하는 연산
element pop() {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty! \n");
		return 0;
	}
	else return stack[top--];	// 현재 top의 원소
}

// 스택의 top원소를 검색하는 연산
element peek() {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty!\n");
		exit(1);
	}
	else return stack[top];	// 현재 top의 원소 확인
}

// 스택의 원소를 출력하는 연산
void printStack() {
	int i;
	printf("\n STACK [");
	for (i = 0; i <= top;i++) {
		printf("%d", stack[i]);
	}
	printf("] ");
}