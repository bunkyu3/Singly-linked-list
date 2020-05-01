#include <stdio.h>
#include "define.h" 
#include "func.h"

int main(void){
	int node_no;
	struct ListNode ten = {10, NULL};
	struct ListNode seven = {7, &ten};
	struct ListNode five = {5, &seven};
	struct ListNode *head;

	head = &five;
	node_no = PrintList(head);
	printf("number of nodes is %d\n", node_no);
	return 0;
}
