#include <iostream>
#include "list.h"

using namespace std;


int main()
{
  node * head = NULL;
     
  build(head);
  display_all(head);
 
    //PLEASE PUT YOUR CODE HERE to call the function assigned

    /*
    removeHead(head);
    display_all(head);
    
    
    removeEnd(head);
    display_all(head);
    
    
    addHead(head);
    display_all(head);
    
    
    addEnd(head);
    display_all(head);
    

    
    node* newCopy;
    newCopy = copyNode(head);
    display_all(head);
    display_all(newCopy);
    
    
    insert2(head);
    display_all(head);
    */
    
    //remove2(head);
    //display_all(head);

    /*
    node* copy;
    copy = copyAfter(head);
    display_all(copy);
    */

    //node* copy;
    //copy = copyAfter2(head);
    //display_all(copy);

  //removeAfter2(head);
  //display_all(head);

  //removeAllAfter(head);
  //display_all(head);



  
  //addNew(head);
  //display_all(head);

  //printEveryOther(head);

  //addSum(head);
  //display_all(head);

  //removeFirstNum(head);
  //display_all(head);

  //removeLast(head);
  //display_all(head);

  //removeLastSame(head);
  //display_all(head);

  //moveFirLast(head);
  //display_all(head);

  //swapFLData(head);
  //display_all(head);

  node* newH = new node();
  newH = swapFLNode(head);
  display_all(newH);
  /*
    head = new node();
    head->data = 1;

    node* node1 = new node();
    node1->data = 2;
    head->next = node1;

    node* node2 = new node();
    node2->data = 3;
    node1->next = node2;

    node* node3 = new node();
    node3->data = 9;
    node2->next = node3;
    
    node* node4 = new node();
    node4->data = 10;
    node3->next = node4;

    node* node5 = new node();
    node5->data = 8;
    node4->next = node5;

    node* node6 = new node();
    node6->data = 7;
    node5->next = node6;

    node6->next = NULL;

    display_all(head);

    
    node* copy;
    copy = copyAfter2(head);
    display_all(copy);
    */

    //removeAfter2(head);
    //display_all(head);
    //remove2(head);
    //insert2(head);
    //display_all(head);
    
    return 0;
}
