//file : Queue.hpp
//Author: Benoit Coville
//email : covillebenoit@gmail.com
//Student number : c3316165
//Course: SENG1120
//Assignement 2 : templates

template <typename value_type>
Queue<value_type>::Queue()
{}

template <typename value_type>
Queue<value_type>::~Queue()
{}

template <typename value_type>
void Queue<value_type>::enqueue(const value_type& entry)
{
	m_data.addToTail(entry);
}

template <typename value_type>
value_type Queue<value_type>::dequeue()
{
	value_type val = m_data.front();
	m_data.remove_from_head();
	return val;
}

template <typename value_type>
bool Queue<value_type>::is_empty()const
{
	return m_data.isEmpty();
}

template <typename value_type>
uint Queue<value_type>::size()const
{
	return m_data.get_size();
}

template <typename value_type>
value_type Queue<value_type>::front()const
{
	return m_data.front();
}


template <typename value_type>
double Queue<value_type>::average()const
{
	return m_data.calcAverage();
}

template <typename value_type>
value_type Queue<value_type>::minimum()const
{
	return m_data.minimum();
}

template <typename value_type>
value_type Queue<value_type>::maximum()const
{
		return m_data.maximum();
}

template <typename value_type>
double Queue<value_type>::stdeviation()const
{
	return m_data.stdeviation();
}

template <typename value_type>
void Queue<value_type>::sort()
{
	LinkedList<value_type> sort_list;
	value_type entry;
	uint save_size = size();

	//For all the elements in the queue 
	for(uint i = 0 ; i < save_size ; ++i)
	{
		entry = dequeue();

		//the list is empty, add this node at the beginning
		if(sort_list.isEmpty())
		{
			sort_list.addToTail(entry);
		}
		else//if the sorting list is not empty
		{
			//add the element ordered
			sort_list.insertOrdered(entry);
		}
	}
	//then put all the elements back in the queue
	for(uint i = 0 ; i < save_size ; ++i )
	{
		enqueue(sort_list.front());
		sort_list.remove_from_head();
	}
}

template <typename value_type>
std::ostream& Queue<value_type>::display(std::ostream& out)const
{
	out << m_data;
	return out;
}

//Non-member fonctions :
template <typename value_type>
std::ostream& operator<<(std::ostream& out, const Queue<value_type>& queue)
{
	return queue.display(out);
}