#pragma once
#define Q_SIZE 4
typedef char element;	// ť ����(element)�� �ڷ����� char�� ����

typedef struct {
	element queue[Q_SIZE];
	int front, rear;
};
