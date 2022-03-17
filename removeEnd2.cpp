#include <iostream>
#include "list.h"

using namespace std;

//remove last node
void removeEnd(node* &head)
{

  if (head != NULL)
    {

      if (head->next == NULL)
	{
	  head = NULL;
	}

      else
	{
	  node* current = head;
	  node* previous;
	  
	  while (current->next != NULL)
	    {
	      previous = current;
	      current = current->next;      
	    }
	  
	  previous->next = NULL;
	  delete current;
	  current = NULL;
	}
    }
  else
    {
      cout << "link list is empty" << endl;
    }      
}

//remove head
void removeHead(node* &head)
{
  if (head != NULL)
    {
      node* tempHead = head;
      head = head->next;
      delete tempHead;
    }
  else
    {
      cout << "link list is empty" << endl;
    }
}

//add head
void addHead(node* &head)
{
  node* newHead = new node();
  newHead->data = (rand()%20 + 1);

  node* temp = head;
  head = newHead;
  head->next = temp;
}

//add end node
void addEnd(node* &head)
{

  node* newEnd = new node();
  newEnd->data = (rand()%20 + 1);
  
  if (head != NULL)
    {
      node* current = head;
      node* previous;

      while (current->next != NULL)
	{
	  previous = current;
	  current = current->next;
	}
      
      current->next = newEnd;
      newEnd->next = NULL;
    }
  else
    {
      cout << "link list is empty" << endl;
      head = newEnd;
      head->next = NULL;
    }
}

//copy first 3 node
node* copyNode(node* head)
{

  node* copy1 = new node();
  node* copy2 = new node();
  node* copy3 = new node();

  copy1->data = head->data;
  copy2->data = (head->next)->data;
  copy3->data = ((head->next)->next)->data;

  copy1->next = copy2;
  copy2->next = copy3;
  copy3->next = NULL;

  return copy1;
}

//insert a node after value 2
void insert2(node* &head)
{
  int value = 9;
  int count = 0;
  node* temp;
  node* newNode = new node();
  newNode->data = (rand()%20 +1);
  
  if (head != NULL)
    {
      node* current = head;
      node* previous;
      
      
      if (head->data == value)
	{
	  temp = head->next;
	  head->next = newNode;
	  newNode->next = temp;
	  count++;
	  
	}
      
      else
	{
	  while (current->next != NULL)
	    {
	      previous = current;
	      current = current->next;
	      
	      
	      if ((current->data) == value)
		{
		  temp = current->next;
		  current->next = newNode;
		  newNode->next = temp;
		  count++;
		  break;
		} 
	      
	    }
	  
	}
      if (count == 0)
	{
	  cout << "no node with value " << value  << endl;
	}
    }
}

//remove node after value 2
void remove2(node* &head)
{

  int count = 0;
  int value = 9;
  if (head != NULL)
    {
      node* current = head;
      node* previous;

      if (head->data == value)
	{
	  node* temp = head;
	  head = head->next;
	  delete temp;
	  count++;
	}

      else
	{
	  while (current->next != NULL)
	    {
	      previous = current;
	      current = current->next;

	      if (current->data == value)
		{
		  node* temp = current->next;
		  previous->next = temp;
		  delete current;
		  count++;
		  break;
		}
	    }
	}
      if (count == 0)
	{
	  cout << "no node with this value" << endl;
	}
      
    }
}

//copy node after value 2
node* copyAfter(node* &head)
{
  node* copyN = new node();
  node* copy2 = new node();
  
  int value = 2;
  int count = 0;
  if (head != NULL)
    {
      node* current = head;
      node* previous;
      
      if (head->data == value)
	{
	  
	  copyN->data = (current->next)->data;
	  copy2->data = ((current->next)->next)->data;
	  
	  
	  copyN->next = copy2;
	  copy2->next = NULL;
	  count++;
	}
      else
	{
	  while (current->next != NULL)
	    {
	      previous = current;
	      current = current->next;
	      
	      if (current->data == value)
		{
		  node* copy = new node();
		  copy->data = current->data;
		  
		  
		  copyN->data = (current->next)->data;
		  copy2->data = ((current->next)->next)->data;

		  
		  copyN->next = copy2;
		  copy2->next = NULL;
		  
		  count++;
		}
	      else
		{

		}
	    }
	}
      if (count == 0)
	{
	  cout << "no value" << endl;
	}

    }
  return copyN;
}

//copy node after value 2 using iteration
node* copyAfter2(node* &head)
{

  node* copyHead = new node();
  node* newcurrent;
  int value = 2;
  int counter = 0;

  if (head != NULL)
    {
      node* current = head;
      node* previous;
      if (head->data == value)
	{

	}
      else
	{
	  while (current->next != NULL)
	    {
	      previous = current;
	      current = current->next;

	      if (current->data == value)
		{
		  copyHead->data = (current->next)->data;
		  current = (current->next)->next;
		  copyHead->next = NULL;
		  counter++;
		  break;
		}
   
	    }
		    
	  newcurrent = copyHead;
	  
	  while (current->next!= NULL)
	    {
	      node* copyNode = new node();
	      copyNode->data = current->data;
	      newcurrent->next = copyNode;
	      
	      newcurrent = newcurrent->next;
	      //previous = current;
	      current = current->next;
	    }
	  
	  node* copyNode = new node();
	  copyNode->data = current->data;
	  newcurrent->next = copyNode;

	  (newcurrent->next)->next = NULL;
	  
	}
      
      if (counter == 0)
	{
	  cout << "no value" << endl;
	  copyHead = NULL;
	}
    }
  return copyHead;
}

//remove 3 nodes after value 2
node* removeAfter2(node* &head)
{

  int value = 2;
  int counter = 0;

  if (head != NULL)
    {
      node* current = head;
      node* previous;
      
      if (head->data == value)
	{

	  for (int i = 0; i < 3; i++)
	    {
	      if (current->next != NULL)
		{
		  node* tempC = current->next;
		  previous->next = tempC;
		  delete current;
		  current = current->next;
		}
	      else
		{
		  break;
		}
	    }
	}
      else
	{
	  while (current->next != NULL)
	    {
	      previous = current;
	      current = current->next;

	      if (current->data == value)
		{
		  previous = current;
		  current = current->next;
		  counter++;
		  break;
		}
	    }
	  for (int i = 0; i < 3; i++)
	    {
	      if (current->next != NULL)
		{
		  node* tempC = current->next;
		  previous->next = tempC;
		  delete current;
		  current = current->next;
		}
	      else
		{
		  break;
		}
	    }
	}
      if (counter == 0)
	{
	  cout << "no value" << endl;
	}
    }
  return head;
}

node* removeAllAfter(node* &head)
{

  int value = 2;
  int counter = 0;

  if (head!= NULL)
    {
      node* current = head;
      node* previous;

      if (head->data == value)
	{

	}
      else
	{
	  while (current->next != NULL)
	    {
	      previous = current;
	      current = current->next;

	      if (current->data == value)
		{
		  previous = current;
		  current = current->next;
		  counter++;
		  break;
		}
	    }
	  while (current->next != NULL)
	    {
	      node* tempN = current->next;
	      previous->next = tempN;
	      delete current;
	      current = current->next;
	      
	    }
	  delete current;
	  previous->next = NULL;
	}
      if (counter == 0)
	{
	  cout << "no value" << endl;
	}
    }
  return head;
}

// practice for dual credit

//add new node to end w/ same value as first node
void addNew(node* &head)
{
  node* newNode = new node();
  int value = 0;
  if (head!= NULL)
    {
      node* current = head;
      node* previous;
      
      value = head->data;

      while (current->next != NULL)
	{
	  previous = current;
	  current = current->next;
	}
      
      newNode->data = value;
      current->next = newNode;
      newNode->next = NULL;
      
    }
  
}

void printEveryOther(node* &head)
{

  int counter = 0;
  int number = 0;
  if (head != NULL)
    {
      node* current = head;
      node* print = head;
      //node* previous;

      //cout << head->data << endl;

      while (current->next != NULL)
	{
	  //previous = current;
	  current = current->next;
	  counter = counter + 1;
	}
      counter = counter + 1;

      cout << counter << endl;

      for (int i = 0; i < counter; i = i + 2)
	{
	  if (print != NULL)
	    {
	      cout << print->data << endl;
	      number++;
	      if (print->next != NULL)
		{
		  if ((print->next)->next != NULL)
		    {
		      print = (print->next)->next;
		    }
		}
	    }
	  
	}
      cout << "print out "<< number << endl;
    }
  
}

void addSum(node* &head)
{
  int counter = 0;
  node* sum = new node();
  if (head != NULL)
    {
      node* current = head;
      while (current->next != NULL)
	{
	  current = current->next;
	  counter = counter + current->data;
	}
      counter = counter + 1;
      sum->data = counter;
      current->next = sum;
      sum->next = NULL;
    }
}

void removeFirstNum(node* &head)
{
  int num = 2;
  if (head != NULL)
    {
      node* current = head;
      node* previous;
      if (head->data != 2)
	{
	  node* temp = head;
	  head = head->next;
	  delete temp;
	}
      else
	{
	  while (current->next != NULL)
	    {
	      if (current->data != 2)
		{
		  node* temp = current->next;
		  previous->next = temp;
		  delete current;
		  break;
		}
	      else
		{
		  previous = current;
		  current = current->next;
		}
	    }
	  
	}
    }
}

void removeLast(node* &head)
{
  if (head != NULL)
    {
      node* current = head;
      node* previous;
      while (current->next != NULL)
	{
	  previous = current;
	  current = current->next;
	}
      node* temp = current;
      previous->next = NULL;
      delete temp;
    }
  
}

void removeLastSame(node* &head)
{
  int value = head->data;
  if (head != NULL)
    {
      node* current = head;
      node* previous;

      while (current->next != NULL)
	{
	  previous = current;
	  current = current->next;
	}
      if (current->data != value)
	{
	  node* temp = current;
	  previous->next = NULL;
	  delete temp;
	}
      else
	{
	  cout << "Last node is same as the first" << endl;
	}
    }
}

void moveFirLast(node* &head)
{
  node* newLast = new node();
  newLast->data = head->data;

  if (head!= NULL)
    {
      node* temp = head;
      head = head->next;
      delete temp;

      node* current = head;

      while (current->next != NULL)
	{
	  current = current->next;
	}
      current->next = newLast;
      newLast->next = NULL;
      
    }
}

void swapFLData(node* &head)
{
  int headData = head->data;
  int lastData = 0;

  if (head != NULL)
    {
      node* current = head;

      while (current->next != NULL)
	{
	  current = current->next;
	}
      lastData = current->data;

      head->data = lastData;
      current->data = headData;

    }
  
}

node* swapFLNode(node* &head)
{
  node* newHead = new node();
  node* newLast = new node();

  if (head != NULL)
    {
      node* temp = head->next;
      head->next = NULL;
      newLast = head;
      node* current = temp;
      node* previous;

      while (current->next != NULL)
	{
	  previous = current;
	  current = current->next;
	}
      newHead = current;
      newHead->next = temp;
      previous->next = newLast;
      newLast->next = NULL;
      
    }
  return newHead;
}
