template <typename T> 
T& Vector<T>::operator[] ( Rank r ) //�����±������
{
	return _elem[r];
}

const template <typename T> 
T& Vector<T>::operator[] ( Rank r ) const //����������ֵ
{
	return _elem[r];
}