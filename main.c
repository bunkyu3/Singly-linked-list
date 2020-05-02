#include <stdio.h>
#include <stdlib.h>
#include "define.h" 
#include "func.h"

void DeleteFromLinkedList(struct ListNode **head_p, int position);

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

	DeleteFromLinkedList(head_p, 1);		//この時点で4,5,7,10
	DeleteFromLinkedList(head_p, 4);		//この時点で4,5,7
	DeleteFromLinkedList(head_p, 2);

	printf("after\n");
	PrintList(head);
	return 0;
}

void DeleteFromLinkedList(struct ListNode **head_p, int position){
	int i = 1;
	struct ListNode *p, *q;
	p = *head_p;
	if(position==1){
		*head_p = p->next;
		free(p);
	}else{
		while( (p!=NULL)&&(i<position) ){
			i++;
			q = p;
			p = p->next;
		}
		if(p==NULL){
			printf("Position dose not exit\n");
		}else{
			q->next = p->next;
			free(p);
		}
	}
}

