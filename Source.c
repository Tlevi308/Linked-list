//name:TAMIR LEVI ,ID:308413178
//name:AMIR YEHUDA,ID:307966499
#include"header.h"



//---function_1---//
Node* choiceList(int select) {

	if (select)//choice snack
	{
		printf("The snake chosen");
		printf("\n");
		
		Node* snake = (Node*)malloc(sizeof(Node));
		if (!snake)
		{
			printf("It is not possible");
			return NULL;
		}
		return snake;
	}

	else//choice snil
	{
		printf("The snail chosen");
		printf("\n");
		
		Node* snail = (Node*)malloc(sizeof(Node));
		if (!snail)
		{
			printf("It is not possible");
			return NULL;
		}
		return snail;
	}
}

void addNewOne(Node* list){

	//creat a new Node
	Node* new = (Node*)malloc(sizeof(Node));
	if (!new)
	{
		printf("It is not possible");
		return NULL;
	}
	//insert a random key
	int newKey = rand() % 10;
	new->key = newKey;
	new->next = NULL;
	//reach to the lest list
	Node* current = list;
	while ((current->next != NULL)&&(current!=NULL))
	{
		current = current->next;
	}
	//point to the new Node 
	current->next = new;
}

void pointToSnail(Node* current) {

	Node* tmp = current;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = current;
}


//---function_2---//
Node* whichList(Node* list) {

	if ((list == NULL) || (list->next == NULL))
	{
		printf("that empty list");
		return;
	}
	
	//two pointer to run on the list
	Node* first = list;
	Node* last = list;

	//check if that list in circle or not
	while ((first != NULL) && (first->next != NULL)
		&& (last != NULL))
	{
		last = last->next;
		first = first->next->next;

		//that snail list 
		if (first == last)
			break;

	}

	if (first == last)//that snail list 
	{
		 printf("That snail list");
		 printf("\n");
		//find Node that start the loop
		last = list;
		while (last != first) 
		{
			last = last->next;
			first = first->next;
		}
		//return Node that start the loop
		printf("the Node that start the loop of snail list is : ");
		printf("%d", last->key);
		printf("\n");
		return last;
	}
	else
	{
		printf("That snake list");
		printf("\n");
		return NULL;
	}
}


//---function_3---//
void printList(Node* list) {

	//tmp to save at Node start the circel
	Node* tmp = whichList(list);

	if (tmp == NULL)//snake list
	{
		Node* current = list;
		while (current != NULL)
		{
			printf("%d->", current->key);
			current = current->next;
		}
		printf("NULL");
	}
	else//snail link
	{
		Node* current = list;
		while (current != tmp)
		{
			printf("%d->", current->key);
			current = current->next;
		}

		printf("[>");
		printf("%d", tmp->key);
		printf("->");
		current = current->next;
		while (current != tmp)
		{
			printf("%d->", current->key);
			current = current->next;
		}
		printf("]");
	}
	

}






