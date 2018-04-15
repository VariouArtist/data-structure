template <typename T> 
bool Vector<T>::bubble( Rank lo, Rank hi ) //一趟扫描交换
{
	bool sorted = true; //整体有序标志
	while( ++lo < hi ) //自左向右，逐一检查各对相邻元素
	{
		if( _elem[lo - 1] > _elem[lo] ) //若逆序，则尚未整体有序，需要通过交换使局部有序
		{
			sorted = false;
			swap( _elem[lo - 1], _elem[lo] );
		}
	}
	return sorted; //返回有序标志
}