template <typename T>
Rank Vector<T>::max( Rank lo, Rank hi ) //��[lo, hi]���ҳ������
{
	Rank mx = hi;
	while( lo < hi-- ) //����ɨ��
	{
		if( _elem[hi] > _elem[mx] ) //�ϸ�Ƚϣ�����max�ж��ʱ��֤�������ȣ�������֤selectionSort�ȶ�
		{
			mx = hi;
		}
	}
	return mx;
}
