template <typename T> 
int Vector<T>::disordered() const //������������������Ԫ�ضԵ�����
{
	int n = 0; //������
	for( int i = 1; i < _size; i++ ) //��һ���_size - 1������Ԫ��
	{
		if( _elem[i - 1] > _elem[i] ) //���������
			n++;
	}
	return n; //���������ҽ���n = 0
}
