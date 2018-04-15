#include"Fib.h" //引入Fib数列类

template <typename T> 
static Rank fibSearch( T* A, T const& e, Rank lo, Rank hi )
{
	Fib fib( hi - lo );
	while( lo < hi )
	{
		while( hi - lo < fib.get() )
		{
			fib.prew();	
			Rank mi = lo + fib.get() - 1; //确定形如Fib( k ) - 1的轴点
			( e < A[mi] ) ? hi = mi : lo = mi + 1; //比较后确定深入前半段[lo, mi)或后半段( mi, hi )
		}	
	} //成功查找不能提前终止
	return --lo; //循环结束时，lo为大于e的元素的最小秩，故lo - 1即不大于e的元素的最大秩
} //有多个命中元素时，总能保证返回秩最大者；查找失败时，能返回失败的位置