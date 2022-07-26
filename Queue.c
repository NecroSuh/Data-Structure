#include <stdio.h>
#include <stdlib.h>
#define EMPTY 0

typedef struct node {
	int data;
	struct node* link;
}Queue;

Queue* GetNode() {
	Queue* tmp;

	tmp = (Queue*)malloc(sizeof(Queue));
	tmp->link = EMPTY;

	return tmp;
}

void Enqueue(Queue** front, Queue** rear, int data) {
	if (*front == EMPTY) {	// 첫번째 Enqueue
		*front = GetNode();
		*rear = *front;
	}
	else {
		(*rear)->link = GetNode();
		*rear = (*rear)->link;
	}
	(*rear)->data = data;
}

void Dequeue(Queue** front) {
	Queue* tmp;

	if (*front == EMPTY) {
		printf("Queue is Empty!!\n");
		return;
	}

	tmp = *front;
	printf("%d\n", (*front)->data);
	*front = (*front)->link;
	free(tmp);
}

int main() {
	// front, rear 선언
	Queue* front = EMPTY;
	Queue* rear = EMPTY;
	
	Enqueue(&front, &rear, 10);
	Enqueue(&front, &rear, 20);
	Enqueue(&front, &rear, 30);

	Dequeue(&front);
	Dequeue(&front);
	Dequeue(&front);
	Dequeue(&front);
	return 0;
}