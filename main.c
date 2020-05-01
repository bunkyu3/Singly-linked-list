#include <stdio.h>

struct ListNode{
	int data;
	struct ListNode *next;
};

int PrintList(struct ListNode *head);

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

int PrintList(struct ListNode *head){
	int i = 0;
	struct ListNode *current = head;
	while(current != NULL){
		i++;
		printf("%2d\n", current->data);
		current = current->next;
	}
	return i;
}

