class Fib //Fibonacci数列类
{
private:
	int f, g; //f = fib( k - 1 ), g = fib( k )
public:
	Fib( int n ) //初始化为不小于n的最小Fibonacci项
	{
		f = 1;
		g = 0;
		while( g < n )
		{
			next();
		}
	}
	int get() //获取当前Fibonacci项
	{
		return g; 
	}
	int next() //转至下一Fibonacci项
	{
		g = g + f;
		f = g - f;
		return g;
	}
	int prev() //转至上一Fibonacci项
	{
		f = g - f;
		g = g - f;
		return g;
	}
};