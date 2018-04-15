template <typename T> 
int Vector<T>::remove( Rank lo, Rank hi ) //删除区间[lo, hi)
{
	if( lo == hi ) //出于效率考虑，单独处理退化情况
		return 0;
	while( hi < _size )
	{ 
	_elem[lo++] = _elem[hi++];
	}
	_size = lo; //更新规模，直接丢弃尾部[lo, _size = hi)区间
	shrink(); //若有必要，则缩容
	return hi - lo; //返回被删除元素的数目
}
