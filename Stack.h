//file : Stack.h
//Author: Benoit Coville
//email : covillebenoit@gmail.com
//Student number : c3316165
//Course: SENG1120
//Assignement 2 : templates

#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

template <typename value_type>
class Stack
{
private:
	LinkedList<value_type> m_data;

public:
	void push(const value_type& entry);
	//Pre condition : none
	//Post condition : insert an object at the top of the stack
	value_type pop();
	//Pre condition : stack is not empty
	//Post : remove an return the top obect
	uint size()const;
	//Pre condition : none
	//Post condition : return the number of object in the stack
	bool is_empty()const;
	//Pre condition : none
	//Post condition : return true if empty
	value_type& top();
	//Pre condition :
	//Post condition :
	std::ostream& display(std::ostream& out)const;
	//Pre condition : none (called by operator<<)
	//Post condition : display the queue 

};

template <typename value_type>
std::ostream& operator<<(std::ostream& out, const LinkedList<value_type>& list);
//Pre condition : none
//Post condition : display the stack

#include "Stack.hpp"

#endif