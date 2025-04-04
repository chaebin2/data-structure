#include "listS.h"
#include <stdio.h>
int insertElement(int L[], int n, int x) { // 리스트 L에 원소 x를 삽입하는 함수 n에는 size를 x에는 삽입할 값을 넣을거임.
	int i = 0, k = 0, move = 0; // move는 자리이동 횟수 카운터

	// 원소의 크기를 비교하여 삽입 위치 k 찾기 
	for (int i = 0; i < n; i++) {
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n) // 삽입 원소가 가장 큰 원소인 경우 
		k = n;

	for (i = n; i > k; i--) {
		L[i] = L[i - 1];
		move++;
	}
	
	L[k] = x; // 자리 이동하여 만든 자리k에 삽입 원소 저장
	return move;
}
int deleteElement(int L[], int n, int x) {
	int i, k = n, move = 0; // move는 자리이동 횟수 카운터

	// 원소의 크기를 비교하여 삭제 위치 k 찾기
	for (i = 0;i < n;i++) {
		if (L[i] == x) {
			k = i;
			break;
		}
	}

	if (i == n)
		move = n;

	// k+1 부터 마지막 원소까지 앞으로 자리이동
	for (i = k; i < n - 1; i++) {
		L[i] = L[i + 1];
		move++;
	}

	return move;

}