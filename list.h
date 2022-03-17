//list.h
#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <cctype>
//#include <cstdlib>
using namespace std;

struct node
{
    int data;
    node * next;
};

/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */

void removeHead(node* &head);
//void removeLast(node* &head, node* current, node* previous);
void removeEnd(node* &head);
void addHead(node* &head);
void addEnd(node* &head);
node* copyNode(node* head);
void insert2(node* &head);
void remove2(node* &head);
node* copyAfter(node* &head);
node* copyAfter2(node* &head);
node* removeAfter2(node* &head);
node* removeAllAfter(node* &head);

//practice for dual credit
void addNew(node* &head);
void printEveryOther(node* &head);
void addSum(node* &head);
void removeFirstNum(node* &head);
void removeLast(node* &head);
void removeLastSame(node* &head);
void moveFirLast(node* &head);
void swapFLData(node* &head);
node* swapFLNode(node* &head);

  /* These functions are already written and can be called to test out your code */
  void build(node * & head);      //supplied
  void display_all(node * head); //supplied
  

#endif
