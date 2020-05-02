#include <stdio.h>
#include <stdlib.h>
#include "define.h" 
#include "func.h"

void InsertToHead(struct ListNode **head_p, int data);
void InsertToTail(struct ListNode **head_p, int data);
void InsertToMiddle(struct ListNode **head_p, int data, int position);

int main(void){
	struct ListNode five = {5, NULL};
	struct ListNode **head_p;
	struct ListNode *head;
	head_p = &head;
	head = &five;

	printf("before\n");
	PrintList(head);

	InsertToHead(head_p, 2);
	InsertToTail(head_p, 10);
	InsertToMiddle(head_p, 7, 3);

	printf("after\n");
	PrintList(head);
	return 0;
}

void InsertToHead(struct ListNode **head_p, int data){
	struct ListNode *newNode;
	newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
	newNode->data = data;
	newNode->next = *head_p;
	*head_p = newNode;
}

void InsertToTail(struct ListNode **head_p, int data){
	struct ListNode *newNode, *p, *q;
	newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
	newNode->data = data;
	p = *head_p;
	while(p != NULL){
		q = p;
		p = p->next;
	}
	q->next = newNode;
	newNode->next = p;
}

void InsertToMiddle(struct ListNode **head_p, int data, int position){
	int i = 1;
	struct ListNode *newNode, *p, *q;
	newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
	newNode->data = data;
	p = *head_p;
	while(i<position){
		i++;
		q = p;
		p = p->next;
	}
	q->next = newNode;
	newNode->next = p;
}
