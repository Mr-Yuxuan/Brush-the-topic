//�ִ�д����ͨ��ֵ���ݵ��ÿ������캯������һ����ʱ����ʵ�ָ�ֵ
CMyString* operator=(CMystring s)
{
	swap(m_pData, s.m_pData);
	return *this;
}
//��д���������쳣���ռ���ܿ���ʧ�ܣ�
CMyString* operator=(const CMystring& s)
{
	if (this != &s)                       //�ж��Ը�ֵ
	{
		CMyString* tmp = new char[strlen(s.m_pData) + 1];   //�����µĿռ�
		strcpy(tmp, s.m_pData);
		delete[] m_pData;                  //�ͷ�ԭ���ռ�
		m_pData = tmp;
	}
	return *this;
}

