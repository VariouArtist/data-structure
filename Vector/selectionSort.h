template <typename T> //����ѡ������
void Vector<T>::selectionSort( Rank lo, Rank hi )
{
	while( lo < --hi )
	{
		swap( _elem[max( lo, hi )], _elem[hi] ); //��[hi]��[lo, hi]�е�����߽���
	}
}
