//Author: Benoit Coville
//email : covillebenoit@gmail.com
//Student number : c3316165
//Course: SENG1120
//Assignement 2 : templates

#ifndef LINKED_LIST_H
#define LINKED_LIST_H value

#include "Node.h"
#include <iostream>


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

  int get_size()const;


  bool isEmpty()const;
  //Pre condition : none
  //Post condition : Return True if there is no Node in the linked list
  //                 otherwise return false

  void addToTail(const value_type& entry);
  //Pre condition : constant reference of the "data type" contained in the Node
  //Post condition : A node is created with the data oject provided and add at
  //                 the end of the the list
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

  double calcAverage();
  //Pre condition : The list has to be not empty
  //Post condition : return the average of the marksof all students in the list

  int count(std::string name);
  //Pre condition : Student name
  //Post condition : Return the number of student whose name is the input string

  void order();
  void swapNodes(Node<value_type>* v1, Node<value_type>* v2);
  //Pre condition : v2 must be just after v1
  //Post condition :
  void display_debug();
  void display_pointer_node(Node<value_type>* pt);

  std::ostream& display(std::ostream& out) const;

  value_type* getAllData()const;
  //Pre Cond : the list is not empty
  //Post Cond : return an array containing a copy of all the data in the list
  //            if list is empty return NULL 

  value_type& front()const;
  //Pre cond : the list is not enmpty
  //Post cond : return a reference of the data of the head



};
template <typename value_type>
std::ostream& operator<<(std::ostream& out, const LinkedList<value_type>& list);

#include "LinkedList.hpp"

#endif