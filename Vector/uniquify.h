template <typename T>
int Vector<T>::uniquify() //���������ظ�Ԫ���޳��㷨
{
	Rank i = 0; //���Ի��조���ڡ�Ԫ�ص���
	Rank j = 0;
	while( ++j < _size ) //ע��ɨ�裬ֱ��ĩԪ��
	{
		if( _elem[i] != _elem[j] ) //������ͬ��
		{
			_elem[++i] = _elem[j]; //���ֲ�ͬԪ��ʱ����ǰ����������ǰ���Ҳ�
			_size = ++i; //ֱ�ӽس�β������Ԫ��
		}
	}
	shrink();
	return j - i; //������ģ�仯��������ɾ��Ԫ������
}