#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>


class Test {
	int num= 0;
	std::string name = "bob";
	bool neutered = false;

public:
	Test();
	int get_num();
	void set_num(int new_num);
	std::string get_name();
	void set_name(std::string);
	void set_neutered(bool new_neutered);
	bool get_neutered();
};

class node {
public:
	Test data;
	node *next;
	node *prev;
	node *temp;
	node *head = NULL;
	int toremove = 0;
	void addnode(Test new_test, node* *head_ref);
	void remove(Test toremove, node* *head);
	//				ADD AND REMOVE ARE DEFINED IN FUNCT .CPP

	void printList(node *node)                         
	{
		std::cout << "Printing the list! data is printed in this order \nName| Num| neutered|\n";
		if (node == NULL) {
			std::cout << "the list is empty!\n";
			return;
		}
		while (node != NULL)
		{
			std::cout << " " << node->data.get_name() << " " << node->data.get_num() << " " << node->data.get_neutered() <<"\n";
			node = node->next;
		}
	}
	
	void deletelist(node* *head) {
		while (*head != NULL) {
			temp = *head;
			*head = (*head)->next;
			delete temp;
		}
		//delete head;
		std::cout << "List deleted!\n";
	}

	
};


