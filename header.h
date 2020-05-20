//name:TAMIR LEVI ,ID:308413178
//name:AMIR YEHUDA,ID:307966499
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <math.h>


struct Node {

	int key;
	struct Node* next;

}typedef Node;


//---function_1---//
Node* choiceList(int select);
void addNewOne(Node* list);
void pointToSnail(Node* current);
//===================================//

//---function_2---//
Node* whichList(Node* list);
//===================================//


//---function_3---//
void printList(Node* list);
//===================================//


