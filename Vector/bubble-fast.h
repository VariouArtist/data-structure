template <typename T> 
Rank Vector<T>::bubble( Rank lo, Rank hi ) //һ��ɨ�轻��
{
	Rank last = lo; //���Ҳ������Գ�ʼ��Ϊ[lo - 1, lo]
	while( ++lo < hi ) //�������ң���һ����������Ԫ��
	{
		if( _elem[lo - 1] > _elem[lo] ) //������
		{
			last = lo; //�������Ҳ������λ�ü�¼
			swap( _elem[lo - 1], _elem[lo] ); //ͨ������ʹ�ֲ�����
		}
	}
	return last; //�������Ҳ�������λ��
}
