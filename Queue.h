//file : Queue.h
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
	//Pre condition : the queue is not empty
	//Post condition : remove and return the obect at the end

	void sort();
	//Pre condition : the queue is not empty, value_type has operator>
	//Post condition : none

	bool is_empty()const;
	//Pre condition : none
	//Post condition : return true if the queue is empty

	uint size()const;
	//Pre condition :
	//Post condition :

	//return a ref to the front object (NULL if empty)
	value_type front()const;
	//Pre condition : the queue is not empty
	//Post condition :


	//Maths methods
	double average()const;
	//Pre condition :
	//Post condition :

	value_type minimum()const;
	//Pre condition :
	//Post condition :

	value_type maximum()const;
	//Pre condition :
	//Post condition :

	double stdeviation()const;
	//Pre condition :
	//Post condition :

	std::ostream& display(std::ostream& out)const;


};

template <typename value_type>
std::ostream& operator<<(std::ostream& out, const Queue<value_type>& queue);

//Template implementation of the methods
#include "Queue.hpp"

#endif