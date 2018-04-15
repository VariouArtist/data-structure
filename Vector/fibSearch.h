#include"Fib.h" //����Fib������

template <typename T> 
static Rank fibSearch( T* A, T const& e, Rank lo, Rank hi )
{
	Fib fib( hi - lo );
	while( lo < hi )
	{
		while( hi - lo < fib.get() )
		{
			fib.prew();	
			Rank mi = lo + fib.get() - 1; //ȷ������Fib( k ) - 1�����
			( e < A[mi] ) ? hi = mi : lo = mi + 1; //�ȽϺ�ȷ������ǰ���[lo, mi)�����( mi, hi )
		}	
	} //�ɹ����Ҳ�����ǰ��ֹ
	return --lo; //ѭ������ʱ��loΪ����e��Ԫ�ص���С�ȣ���lo - 1��������e��Ԫ�ص������
} //�ж������Ԫ��ʱ�����ܱ�֤����������ߣ�����ʧ��ʱ���ܷ���ʧ�ܵ�λ��