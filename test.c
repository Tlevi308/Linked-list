//name:TAMIR LEVI ,ID:308413178
//name:AMIR YEHUDA,ID:307966499
#include"header.h"


int main() {

	Node* head = NULL;
	Node* current = NULL;
	//the first Node
	Node test;
	test.key = 1;
	test.next = NULL;

	printf("the run time is : O(n)");
	printf("\n\n");

	//creat snil or snake linked list
	//in probability 50:50
	srand(time(NULL));
	int select_list = rand() % 2;
	choiceList(select_list);
	//-------------------------//
	//for snake
	if (select_list)
	{
		//set value to the first 
		head = &test;

		//choice if add Node
		//in probability 0.01 for not
		int select_to_add = rand() % 100;
		while (select_to_add < 99)
		{
			addNewOne(head);
			select_to_add = rand() % 100;
		}

	}
	//for snial
	else
	{
		//set value to the first 
		head = &test;

		//select if that Node to close the circel
		//in probability 0.015 for yes
		int select_node = rand() % 1000;
		while (select_node > 14)
		{
			addNewOne(head);
			select_node = rand() % 1000;
		}
		//save that Node
		current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		//select if that Node the last Node
		//in probability 0.02 for the last
		int select_to_stop = rand() % 100;
		while (select_to_stop > 1)
		{
			addNewOne(head);
			select_to_stop = rand() % 100;
		}
		//connect the last own to current
		pointToSnail(current);
	}
	
	printf("\n");
	printList(head);
	printf("\n");


}







































