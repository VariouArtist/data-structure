template <typename T> 
int Vector<T>::remove( Rank lo, Rank hi ) //ɾ������[lo, hi)
{
	if( lo == hi ) //����Ч�ʿ��ǣ����������˻����
		return 0;
	while( hi < _size )
	{ 
	_elem[lo++] = _elem[hi++];
	}
	_size = lo; //���¹�ģ��ֱ�Ӷ���β��[lo, _size = hi)����
	shrink(); //���б�Ҫ��������
	return hi - lo; //���ر�ɾ��Ԫ�ص���Ŀ
}
