#include <stdio.h>
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
