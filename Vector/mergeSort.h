template <typename T> //�����鲢����
void Vector<T>::mergeSort( Rank lo, Rank hi )
{
	if( hi - lo < 2 ) //��Ԫ��������Ȼ����
	{
		return;
	}
	int mi = ( lo + hi ) / 2; //���е�Ϊ��
	mergeSort( lo, mi );
	mergeSort( mi, hi );
	merge( lo, mi, hi ); //�鲢
}
