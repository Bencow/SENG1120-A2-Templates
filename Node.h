//file : Node.h
//Author: Benoit Coville
//email : covillebenoit@gmail.com
//Student number : c3316165
//Course: SENG1120
//Assignement 2 : templates

#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename value_type>
class Node
{
public:
  //Constructors and destructor
  Node (const value_type& entry, Node<value_type>* nxt, Node<value_type>* prev);
  Node (const value_type& entry);
  ~Node ();

  //Accessors
  Node* get_next()const;
  //Pre condition : none
  //Post condition : return m_next

  void set_next(Node<value_type>* entry);
  //Pre condition :
  //Post condition :
  Node* get_previous()const;
  //Pre condition : none
  //Post condition : return m_previous

  void set_previous(Node<value_type>* entry);
  //Pre condition : valid pointer to a Node
  //Post condition : none

  value_type get_data()const;
  //Pre condition : none
  //Post condition : return the value_type contained in the node


private:
  Node<value_type>* m_next;
  Node<value_type>* m_previous;
  value_type m_data;
};

#include "Node.hpp"
#endif
