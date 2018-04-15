template <typename T> 
void Vector<T>::heapSort( Rank lo, Rank hi )
{
	PQ_ComplHeap<T> H ( _elem + lo, hi - lo ); //�����������佨��һ����ȫ����ѣ�O(n)
	while( ! H.empty() ) //������ժ�����Ԫ������������ĺ�׺��ֱ���ѿ�
	{
		_elem[--hi] = H.delMax(); //��Ч�ڶѶ���ĩԪ�ضԻ�������
	}
}
