#include <stdio.h>
#include <stdlib.h>
#include "define.h" 
#include "func.h"

void InsertInLinkedList(struct ListNode **head_p, int data, int position);

int main(void){
	struct ListNode five = {5, NULL};
	struct ListNode **head_p;
	struct ListNode *head;
	head_p = &head;
	head = &five;

	printf("before\n");
	PrintList(head);

	InsertInLinkedList(head_p, 2, 1);
	InsertInLinkedList(head_p, 10, 3);
	InsertInLinkedList(head_p, 7, 3);

	printf("after\n");
	PrintList(head);
	return 0;
}

void InsertInLinkedList(struct ListNode **head_p, int data, int position){
	int i=1;
	struct ListNode *newNode, *p, *q;
	newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
	newNode->data = data;
	p = *head_p;
	if(position == 1){
		newNode->next = p;
		*head_p = newNode;
	}else{
		while( (p != NULL)&&(i<position) ){
			i++;
			q = p;
			p = p->next;
		}
		q->next = newNode;
		newNode->next = p;
	}

}
