#pragma once
#define Q_SIZE 4
typedef char element;	// 큐 원소(element)의 자료형을 char로 정의

typedef struct {
	element queue[Q_SIZE];
	int front, rear;
};
