template <typename T> 
void Vector<T>::shrink()//装填因子过小时压缩向量所占空间
{
	if( _capacity < DEFAULT_CAPACITY << 1 ) //不致收缩到DEFAULT_CAPACITY以下
	{
		return;
	}
	if( _size << 2 > _capacity ) //以25%为界
	{
		return;
	}
	T* oldElem = _elem; //容量减半
	_elem = new T[_capacity >>= 1];
	for( int i = 0; i < _size; i++ ) //复制原向量内容
	{
		_elem[i] = oldElem[i];
	}
	delete [] oldElem;
}
