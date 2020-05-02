#include <stdio.h>
#include <stdlib.h>
#include "define.h" 
#include "func.h"

void InsertToHead(struct ListNode **head_p, int data);

int main(void){
	struct ListNode five = {5, NULL};
	struct ListNode **head_p;
	struct ListNode *head;
	head_p = &head;
	head = &five;

	printf("before\n");
	PrintList(head);

	InsertToHead(head_p, 2);

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
