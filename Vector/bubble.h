template <typename T> 
bool Vector<T>::bubble( Rank lo, Rank hi ) //һ��ɨ�轻��
{
	bool sorted = true; //���������־
	while( ++lo < hi ) //�������ң���һ����������Ԫ��
	{
		if( _elem[lo - 1] > _elem[lo] ) //����������δ����������Ҫͨ������ʹ�ֲ�����
		{
			sorted = false;
			swap( _elem[lo - 1], _elem[lo] );
		}
	}
	return sorted; //���������־
}