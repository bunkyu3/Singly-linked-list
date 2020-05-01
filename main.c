#include <stdio.h>

struct ListNode{
	int data;
	struct ListNode *next;
};

int main(void){
	struct ListNode ten = {10, NULL};
	struct ListNode seven = {7, &ten};
	struct ListNode five = {5, &seven};
	struct ListNode *current;

	current = &five;
	printf("%2d\n", current->data);
	current = current->next;
	printf("%2d\n", current->data);
	current = current->next;
	printf("%2d\n", current->data);
	return 0;
}
