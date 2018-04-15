template <typename T> //有序向量的归并
void Vector<T>::merge( Rank lo, Rank mi, Rank hi ) //各自有序的子向量[lo, mi)和[mi, hi)
{
	T* A = _elem + lo; //合并后的向量A[0, hi - lo) = _elem[lo, hi)
	int lb = mi - lo; //前子向量B[0, lb) = _elem[lo, mi)
	T* B = new T[lb];
	for( Rank i = 0; i < lb; i++ ) //复制前子向量
	{
		B[i] = A[i];
	}
	int lc = hi - mi; //后子向量C[0, lc) = _elem[mi, hi)
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
	delete [] B; //释放临时空间B
} //归并后得到完整的有序向量[lo, hi)
