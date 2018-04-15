template <typename T> //���������Ĺ鲢
void Vector<T>::merge( Rank lo, Rank mi, Rank hi ) //���������������[lo, mi)��[mi, hi)
{
	T* A = _elem + lo; //�ϲ��������A[0, hi - lo) = _elem[lo, hi)
	int lb = mi - lo; //ǰ������B[0, lb) = _elem[lo, mi)
	T* B = new T[lb];
	for( Rank i = 0; i < lb; i++ ) //����ǰ������
	{
		B[i] = A[i];
	}
	int lc = hi - mi; //��������C[0, lc) = _elem[mi, hi)
	T* C = _elem + mi;
	for( Rank i = 0, j = 0, k = 0; j < lb; )
	{
		if( ( k < lc ) && ( C[k] < B[j] ) )
		{
			A[i++] = C[k++];
		}
		if( ( lc <= k ) || ( B[j] <= C[k] ) )
		{
			A[i++] = B[j++];
		}
	}
	delete [] B; //�ͷ���ʱ�ռ�B
} //�鲢��õ���������������[lo, hi)
