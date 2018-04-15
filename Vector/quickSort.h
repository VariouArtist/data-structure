template <typename T> //向量快速排序
void Vector<T>::quickSort( Rank lo, Rank hi )
{
	if( hi - lo < 2 ) //单元素区间自然有序
		return;
	Rank mi = partition( lo, hi ); //在[lo, hi)内构造轴点
	quickSort( lo, mi ); //对前缀递归排序
	quickSort( mi + 1; hi ); //对后缀递归排序
}
