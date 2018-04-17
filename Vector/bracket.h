template <typename T> 
T& Vector<T>::operator[]( Rank r ) //重载下标操作符
{
	return _elem[r];
}

const template <typename T> 
T& Vector<T>::operator[]( Rank r ) const //仅限于做右值
{
	return _elem[r];
}
