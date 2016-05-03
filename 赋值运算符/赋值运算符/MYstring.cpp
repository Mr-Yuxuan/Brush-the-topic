//现代写法：通过值传递调用拷贝构造函数创建一个临时变量实现赋值
CMyString* operator=(CMystring s)
{
	swap(m_pData, s.m_pData);
	return *this;
}
//旧写法：存在异常（空间可能开辟失败）
CMyString* operator=(const CMystring& s)
{
	if (this != &s)                       //判断自赋值
	{
		CMyString* tmp = new char[strlen(s.m_pData) + 1];   //开辟新的空间
		strcpy(tmp, s.m_pData);
		delete[] m_pData;                  //释放原来空间
		m_pData = tmp;
	}
	return *this;
}

