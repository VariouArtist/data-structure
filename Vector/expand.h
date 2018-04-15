template <typename T> 
void Vector<T>::expand() //�����ռ䲻��ʱ����
{
	if( _size < _capacity )
	{
		return; //��δ��Աʱ����������
	}
	if( _capacity < DEFAULT_CAPACITY ) //��������С����
	{
		_capacity = DEFAULT_CAPACITY;
		T* oldElem = _elem; 
		_elem = new T[_capacity <<= 1]; //�����ӱ�
	}
	for( int i = 0; i < _size; i++ )
	{
		_elem[i] = oldElem[i]; //����ԭ��������
		delete [] oldElem; //�ͷ�ԭ�ռ�
	}
}