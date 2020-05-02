#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int PrintList(struct ListNode *head){
	int i = 0;
	struct ListNode *current =head;
	while(current != NULL){
		i++;
		printf("%2d\n", current->data);
		current = current->next;
	}
	return i;
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
