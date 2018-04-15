template <typename T> //向量归并排序
void Vector<T>::mergeSort( Rank lo, Rank hi )
{
	if( hi - lo < 2 ) //单元素区间自然有序
	{
		return;
	}
	int mi = ( lo + hi ) / 2; //以中点为界
	mergeSort( lo, mi );
	mergeSort( mi, hi );
	merge( lo, mi, hi ); //归并
}
