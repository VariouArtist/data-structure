template <typename T> //Ԫ������
void Vector<T>::copyFrom( T const* A, Rank lo, Rank hi ) //����������A[lo, hi)Ϊ������������
{
	_elem = new T[_capacity = 2 * ( hi - lo )]; //����ռ�
	_size = 0; //��ģ����
	while( lo < hi ) 
	{
		_elem[_size++] = A[lo++]; //A[lo, hi)�ڵ�Ԫ����һ������_elem[0, hi - lo)
	}
}