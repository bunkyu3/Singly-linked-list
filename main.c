#include <stdio.h>
#include <stdlib.h>
#include "define.h" 
#include "func.h"

void DeleteHead(struct ListNode **head_p);
void DeleteTail(struct ListNode **head_p);

int main(void){
	struct ListNode *two;
	two = (struct ListNode *)malloc(sizeof(struct ListNode));
	two->data = 2;
	two->next = NULL;
	
	struct ListNode **head_p;
	struct ListNode *head;
	head_p = &head;
	head = two;
	InsertInLinkedList(head_p, 4, 2);
	InsertInLinkedList(head_p, 5, 3);
	InsertInLinkedList(head_p, 7, 4);
	InsertInLinkedList(head_p, 10, 5);

	printf("before\n");
	PrintList(head);

	DeleteHead(head_p);
	DeleteTail(head_p);

	printf("after\n");
	PrintList(head);
	return 0;
}

void DeleteHead(struct ListNode **head_p){
	struct ListNode *p;
	p = *head_p;
	*head_p = p->next;
	free(p);
}

void DeleteTail(struct ListNode **head_p){
	struct ListNode *p, *q;
	p = *head_p;
	while(p->next != NULL){
		q = p;
		p = p->next;
	}
	q->next = p->next;
	free(p);
}
