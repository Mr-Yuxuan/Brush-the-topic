class Singleton
{
	static Singleton* instance;        // 通过静态变量保证只有一个实例
private:
	Singleton()                                    //将构造函数设为私有防止被访问
	{}
	//将拷贝构造和赋值重载也设成私有 更安全
	Singleton(const Singleton& s)
	{}
	Singleton& operator=(const Singleton& s)
	{}
public:
	static Singleton* Get()                      //通过静态成员函数使外部得到实例
	{
		if (instance == NULL)
		{
			instance = new Singleton(); //第一次调用时自动创建实例
		}
		return instance;                          //非第一次时直接返回实例
	}
	~Singleton()                       //析构函数
	{
		if (instance != NULL)
		{
			delete instance;
		}
	}
};
Singleton* Singleton::instance=NULL: