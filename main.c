#include <stdio.h>

struct ListNode{
	int data;
	struct ListNode *next;
};

int main(void){
	struct ListNode ten = {10, NULL};
	struct ListNode seven = {7, &ten};
	struct ListNode five = {5, &seven};

	printf("%2d %p\n", five.data, five.next);	//変数fiveの中身
	printf("%2d %p\n", seven.data, seven.next);	//変数secondの中身
	printf("%2d %p\n", ten.data, ten.next);		//変数tenの中身
	return 0;
}
