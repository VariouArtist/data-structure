template <typename T> //借助函数指针机制
void Vector<T>::traverse( void( *visit ) ( T& ) )
{
	for( int i = 0; i < _size; i++ )
	{
		visit( _elem[i] );
	}
}

template <typename T> template <typename VST> 
void Vector<T>::traverse( VST& visit ) //借助函数对象机制
{
	for( int i = 0; i < _size; i++ )
	{
		visit( _elem[i] );
	}
}