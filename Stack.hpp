//file : Stack.hpp
//Author: Benoit Coville
//email : covillebenoit@gmail.com
//Student number : c3316165
//Course: SENG1120
//Assignement 2 : templates


template <typename value_type>
void Stack<value_type>::push(const value_type& entry)
{
	m_data.addToHead(entry);
}

template <typename value_type>
value_type Stack<value_type>::pop()
{

}

template <typename value_type>
uint Stack<value_type>::size()const
{
	return m_data.get_size();
}

template <typename value_type>
bool Stack<value_type>::is_empty()const
{
	return m_data.isEmpty();
}

template <typename value_type>
value_type& Stack<value_type>::top()
{

}


template <typename value_type>
std::ostream& Stack<value_type>::display(std::ostream& out)const
{
	out << m_data;
	return out;
}


//Non-member fonctions :
template <typename value_type>
std::ostream& operator<<(std::ostream& out, const Stack<value_type>& stack)
{
	return stack.display(out);
}