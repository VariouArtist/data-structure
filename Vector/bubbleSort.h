template <typename T> //��������������
void Vector<T>::bubbleSort( Rank lo, Rank hi )
{
	while( !bubble( lo, hi-- ) ); //����ɨ�轻����ֱ��ȫ��
}
