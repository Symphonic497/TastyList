#ifndef _TASTYLIST_H_
#define _TASTYLIST_H_

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void append(int num);

void add(int num);

void addafter(int num, int loc);

void insert(int num);

int delete(int num);

void display(struct node *r);

int count();


#endif
