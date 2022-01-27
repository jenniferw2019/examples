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
