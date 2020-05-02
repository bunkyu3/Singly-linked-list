#include <stdio.h>
#include <stdlib.h>
#include "define.h" 
#include "func.h"

void InsertToTop(struct ListNode *head, int data);

int main(void){
	struct ListNode five = {5, NULL};
	struct ListNode *head;
	head = &five;

	printf("before\n");
	PrintList(head);

	InsertToTop(head, 2);

	printf("after\n");
	PrintList(head);
	return 0;
}

void InsertToTop(struct ListNode *head, int data){
	struct ListNode *newNode;
	newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}
