class Singleton
{
	static Singleton* instance;        // ͨ����̬������ֻ֤��һ��ʵ��
private:
	Singleton()                                    //�����캯����Ϊ˽�з�ֹ������
	{}
	//����������͸�ֵ����Ҳ���˽�� ����ȫ
	Singleton(const Singleton& s)
	{}
	Singleton& operator=(const Singleton& s)
	{}
public:
	static Singleton* Get()                      //ͨ����̬��Ա����ʹ�ⲿ�õ�ʵ��
	{
		if (instance == NULL)
		{
			instance = new Singleton(); //��һ�ε���ʱ�Զ�����ʵ��
		}
		return instance;                          //�ǵ�һ��ʱֱ�ӷ���ʵ��
	}
	~Singleton()                       //��������
	{
		if (instance != NULL)
		{
			delete instance;
		}
	}
};
Singleton* Singleton::instance=NULL: