template <typename T> //向量的起泡排序
void Vector<T>::bubbleSort( Rank lo, Rank hi )
{
	while( lo < ( hi = bubble( lo, hi ) ) ); //逐趟做扫描交换，直至全序
}
