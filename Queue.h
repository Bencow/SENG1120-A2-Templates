//Author: Benoit Coville
//email : covillebenoit@gmail.com
//Student number : c3316165
//Course: SENG1120
//Assignement 2 : templates

#ifndef QUEUE_H
#define QUEUE_H value

#include "LinkedList.h"

template <typename value_type>
class Queue
{
private:
	LinkedList<value_type> m_data;



public:
	Queue();
	~Queue();

	//Add obj to the rear of the queue
	void enqueue(const value_type& entry);
	//remove and return the object at the head if not empty
	value_type dequeue();
	
	void sort();

	bool is_empty()const;
	int size()const;
	//return a ref to the front object (NULL if empty)
	value_type& front()const;

	//Maths methods
	float average()const;
	value_type minimum()const;
	value_type maximum()const;
	float stdeviation()const;



};

//Template implementation of the methods
#include "Queue.hpp"

#endif