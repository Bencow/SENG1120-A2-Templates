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
	m_data.remove_from_head();
}

template <typename value_type>
bool Queue<value_type>::is_empty()const
{
	return m_data.isEmpty();
}

template <typename value_type>
int Queue<value_type>::size()const
{
	return m_data.get_size();
}

template <typename value_type>
value_type& Queue<value_type>::front()const
{
	return m_data.front();
}


template <typename value_type>
float Queue<value_type>::average()const
{

}

template <typename value_type>
value_type Queue<value_type>::minimum()const
{

}

template <typename value_type>
value_type Queue<value_type>::maximum()const
{

}

template <typename value_type>
float Queue<value_type>::stdeviation()const
{

}
