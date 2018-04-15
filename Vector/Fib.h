class Fib //Fibonacci������
{
private:
	int f, g; //f = fib( k - 1 ), g = fib( k )
public:
	Fib( int n ) //��ʼ��Ϊ��С��n����СFibonacci��
	{
		f = 1;
		g = 0;
		while( g < n )
		{
			next();
		}
	}
	int get() //��ȡ��ǰFibonacci��
	{
		return g; 
	}
	int next() //ת����һFibonacci��
	{
		g = g + f;
		f = g - f;
		return g;
	}
	int prev() //ת����һFibonacci��
	{
		f = g - f;
		g = g - f;
		return g;
	}
};