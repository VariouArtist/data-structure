template <typename T> //����������������[lo, hi)�ڣ�ȷ��������e�����һ���ڵ����
Rank Vector<T>::search( T const& e, Rank lo, Rank hi ) const
{
	return ( rand() % 2 ) ? binSearch( _elem, e, lo, hi ) : fibSearch( _elem, e, lo, hi ); //����50%�ĸ������ʹ�ö��ֲ��һ�Fibonacci����
}