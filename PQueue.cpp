/*
 * LaQueue
 * 
 * 
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *  
 * (c) copyright 2018, James Shockey - all rights reserved
 * 
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"



/*
 * Class Priority Queue
 */

		
/*
* Insert into Priority Queue
*/
void PQueue::push(void *item, int priority)
{
      node *temp;
      if(temp==NULL){
        return;
    }
    temp->data=item;
    temp->next=NULL;
 
    //for first node
    if(front==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
  if(front==NULL) {
    return NULL;
  } else {
    return front->data;
  }
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
	if(front==NULL){
    return;
  }
    if(front==rear) {
        front=rear=NULL; }
    else {
        front=front->next; }

  }


/*
 * Print Priority Queue
 */
void PQueue::display()
{

	
	
	/* Use the following out command for the data */
  node *ptr;
	std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;

}
