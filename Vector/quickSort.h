template <typename T> //������������
void Vector<T>::quickSort( Rank lo, Rank hi )
{
	if( hi - lo < 2 ) //��Ԫ��������Ȼ����
		return;
	Rank mi = partition( lo, hi ); //��[lo, hi)�ڹ������
	quickSort( lo, mi ); //��ǰ׺�ݹ�����
	quickSort( mi + 1; hi ); //�Ժ�׺�ݹ�����
}
