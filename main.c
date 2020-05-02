#include <stdio.h>
#include <stdlib.h>
#include "define.h" 
#include "func.h"

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
