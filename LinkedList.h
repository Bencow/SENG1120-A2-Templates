//file : LinkedList.h
//Author: Benoit Coville
//email : covillebenoit@gmail.com
//Student number : c3316165
//Course: SENG1120
//Assignement 2 : templates

#ifndef LINKED_LIST_H
#define LINKED_LIST_H value

#include "Node.h"
#include <iostream>
#include <cmath>


template <typename value_type>
class LinkedList
{
private:
  Node<value_type>* m_head;
  Node<value_type>* m_tail;
  uint m_size; //Number of node stored in the list

public:
  LinkedList ();
  virtual ~LinkedList ();

  uint get_size()const;
  //Pre condition : none
  //Post condition : return the number of element in the list

  bool isEmpty()const;
  //Pre condition : none
  //Post condition : Return True if there is no Node in the linked list
  //                 otherwise return false

  void addToTail(const value_type& entry);
  //Pre condition : constant reference of the "data type" contained in the Node
  //Post condition : A node is created with the data oject provided and add at
  //                 the end of the the list
  //note : this is a deep copy, this function is making a local copy of the node passed as parameter

  void addToHead(const value_type& entry);
  //Pre condition : constant reference of the "data type" contained in the Node
  //Post condition : A node is created with the data oject provided and add at
  //                 the beginning of the the list
  //note : this is a deep copy, this function is making a local copy of the node passed as parameter


  void operator += (const LinkedList& l2);
  //Pre condition : A list
  //Post condition : concatenate the two lists

  void remove(std::string name);
  //Pre condition : the name of a student as a string
  //Post condition : seek all the students whose name are the input string
  //                 Then call remove_target for each node found passing a
  //                 pointeur to the node as parameter

  bool remove_target(Node<value_type>* target);
  //Pre condition : pointeur to the node to remove
  //Post condition : delete the target node moving the required pointeurs and freeing
  //                 the allocated memory

  void remove_from_head();
  //Pre condition : the list is not empty
  //Post condition : remove the first element

  double calcAverage()const;
  //Pre condition : value_type has to be a numeric type (must be able to be cast in double !)
  //Post condition : return the average of all the value_type in the list

  int count(std::string name);
  //Pre condition : Student name
  //Post condition : Return the number of student whose name is the input string

  void order();
  void swapNodes(Node<value_type>* v1, Node<value_type>* v2);
  //Pre condition : v2 must be just after v1
  //Post condition : swap the nodes 

  void display_debug();
  //Pre condition : value_type must implement operator<<
  //Post condition : display the list and NULL pointers involved (eg m_tail->get_next) 

  void display_pointer_node(Node<value_type>* pt);
  //Pre condition : value_type must implement operator<<
  //Post condition : display the value pointed by bt
  //                 if pt = NULL display (NULL)

  std::ostream& display(std::ostream& out) const;
  //Pre condition : none
  //Post condition : display all elements of the queue

  value_type* getAllData()const;
  //Pre Cond : the list is not empty
  //Post Cond : return an array containing a copy of all the data in the list
  //            if list is empty return NULL 

  value_type front()const;
  //Pre cond : the list is not enmpty
  //Post cond : return  the data of the head

  value_type minimum()const;
  //Pre condition : value_type implement operator>
  //Post condition : return the lowest element of the queue (according to the implementation of operator> for this class)

  value_type maximum()const;
  //Pre condition : value_type must implement operator<
  //Post condition : return the highest element of the queue (according to the implementation of operator> for this class)

  double stdeviation()const;
  //Pre condition : value_type has to be a numeric type (must be able to be cast in double !)
  //Post condition : return the standard deviation of the class

private:
  void insertBefore(value_type entry, Node<value_type>* position);
  //Pre cond : - the list is not empty
  //           - position is a pointer on one of the node of the list -> can only be given within a class method (eg insertOrdered)
  //Post cond : create a new node with the entry and insert it before position
public:
  void insertOrdered(value_type entry);
  //Pre cond : value_type has to implement operator<
  //Post cond : create a new node with the entry and insert it in the right position 
};

template <typename value_type>
std::ostream& operator<<(std::ostream& out, const LinkedList<value_type>& list);
//Pre condition : none
//Post condition : display the list

#include "LinkedList.hpp"

#endif