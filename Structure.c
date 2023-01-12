#include<stdlib.h>
#include<stdio.h>

void creat();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
	int info;
	struct node *next;};

