template <typename T> //��e��Ϊ��ΪrԪ�ز���
Rank Vector<T>::insert( Rank r, T cosnt& e )
{
	expand(); //���б�Ҫ������
	for( int i = _size; i > r; i-- )
	{
		_elem[i] = _elem[i - 1]; //�Ժ���ǰ�����Ԫ��˳�κ���һ����Ԫ
	}
	_elem[r] = e; //������Ԫ��
	_size++; //��������
	return r; //������
}
