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
	//Pre condition : not empty
	//Post condition : remove and return the value_type contained in the head Node

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
	//Pre condition : none
	//Post condition : return the number of element in the queue

	value_type front()const;
	//Pre condition : the queue is not empty
	//Post condition : return the value_type contained in the head (without removing it)


	//Maths methods
	double average()const;
	//Pre condition : value_type has to be a numeric type (must be able to be cast in double !)
	//Post condition : return the average of all the value_type in the queue

	value_type minimum()const;
	//Pre condition : value_type must implement operator>
	//Post condition : return the lowest element of the queue (according to the implementation of operator> for this class)

	value_type maximum()const;
	//Pre condition : value_type must implement operator<
	//Post condition : return the highest element of the queue (according to the implementation of operator> for this class)

	double stdeviation()const;
	//Pre condition : value_type has to be a numeric type (must be able to be cast in double !)
	//Post condition : return the standard deviation of the class

	std::ostream& display(std::ostream& out)const;
	//Pre condition : none
	//Post condition : display all elements of the queue
};

template <typename value_type>
std::ostream& operator<<(std::ostream& out, const Queue<value_type>& queue);
//Pre condition : none
//Post condition : display the queue 

//Template implementation of the methods
#include "Queue.hpp"

#endif