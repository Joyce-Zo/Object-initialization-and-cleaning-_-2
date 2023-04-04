#include<iostream>
#include<string>
using namespace std;

// 构造函数与析构函数 - 初始化和销毁
//class person
//{
//public:
//	person()
//	{
//		cout << "person_构造函数的调用" << endl;
//	}
//
//	~person()
//	{
//		cout << "person_析构函数的调用" << endl;
//	}
//};
//
//void test1()
//{
//	person p; // 栈上的数据，test1执行完毕后，释放这个对象
//}
//int main()
//{
//	//test1();
//
//	person p;
//	return 0;
//}

// 分类与调用
//class person
//{
//public:
//	// 有无参构造
//	person()
//	{
//		cout << "person_无参构造函数的调用" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "person_有参构造函数的调用" << endl;
//	}
//	
//	// 拷贝构造
//	person(const person& p) // 不可修改原构造函数，所以加const
//	{
//		age = p.age;
//		cout << "person_拷贝构造函数的调用" << endl;
//	}
//
//	~person()
//	{
//		cout << "person_析构函数的调用" << endl;
//	}
//
//	int age = 21;
//};
//
//// 调用
//void test1()	
//{
	 //括号法
	//person p1;	 // 无参构造函数 的调用 名称后不加括号
	//person p2(5);  // 有参构造函数 的调用
	//person p3(p2); // 拷贝构造函数 的调用

	//cout << p2.age << endl;
	//cout << p3.age << endl; // p2的age也传给p3，所以结果相同

	// 注意：
	//person p1();
	//
	//void func();

	// 显式法
	//person p1; // 无参
	//person p2 = person(5); // 有参
	//person p3 = person(p2);// 拷贝

	//person(5); // 匿名对象，当前行执行完，其立即倍被系统销毁
	//cout << "444" << endl;

	//person(p3);


	// 隐式转换法
//	person p4 = 10;  // 等价于person p4 = person(10); 有参构造
//	person p5 = p4;  // 拷贝构造
//}
//int main()
//{
//	test1();
//	return 0;
//}

// 拷贝构造函数的调用时机
//class person
//{
//public:
//	person()
//	{
//		cout << "person默认构造函数调用" << endl;
//	}
//	person(int age)
//	{
//		m_age = age;
//		cout << "person有参构造函数调用" << endl;
//	}
//	person(const person& p)
//	{
//		m_age = p.m_age;
//		cout << "person拷贝构造函数调用" << endl;
//	}
//
//	~person()
//	{
//		cout << "person析构函数调用" << endl;
//	}
//
//	int m_age;
//};

// 1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	person p1(50);
//	person p2(p1);
//	
//	cout << "p2的年龄为:" << p2.m_age << endl;
//}
//
//// 2.值传递方式给函数参数传参
//void func(person p)
//{
//	;
//}
//void test02()
//{
//	person p; // 默认构造函数
//	func(p); // 拷贝构造函数
//}
//
//// 3.值的方式返回局部对象
//person func2()
//{
//	person p1; // 默认构造函数
//	cout << &p1 << endl;
//	return p1; // 返回 值
//}
//void test03()
//{
//	person p2 = func2();// 接收后，成为拷贝构造函数
//	cout << &p2 << endl;
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	return 0;
//}

// 构造函数调用规则
//class person
//{
//public:
//	/*person()
//	{
//		cout << "person默认构造函数调用" << endl;
//	}*/
//	/*person(int age)
//	{
//		m_age = age;
//		cout << "person有参构造函数调用" << endl;
//	}*/
//	person(const person& p)
//	{
//		m_age = p.m_age;
//		cout << "person拷贝构造函数调用" << endl;
//	}
//
//	~person()
//	{
//		cout << "person析构函数调用" << endl;
//	}
//
//	int m_age;
//};

////void test01()
////{
////	person p1;
////	p1.m_age = 10;
////
////	person p2(p1);
////	cout << p2.m_age << endl;	
////}
//void test02()
//{
//	person p1(22);
//	person p2(p1);
//	cout << p2.m_age << endl;
//}
//void test03()
//{
//	person p1; // 默认构造函数
//	person p2(10); // 有参构造函数
//}

//int main()
//{
//	test01();
//	test03();
//	return 0;
//}

// 深拷贝与浅拷贝问题
//class person
//{
//public:
//	person()
//	{
//		cout << "person默认构造函数调用" << endl;
//	}
//	person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "person有参构造函数调用" << endl;
//	}
//	person(const person& p)
//	{
//		m_age = p.m_age;
//		//m_height = p.m_height; //编译器默认实现，即浅拷贝
//		m_height = new int(*p.m_height);
//		cout << "person拷贝构造函数调用" << endl;
//	}
//
//	~person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "person析构函数调用" << endl;
//	}
//
//	int m_age;
//	int* m_height;
//};
//
//void test01()
//{
//	person p1(22,179);
//	cout << "年龄为" << p1.m_age << "身高为" << *p1.m_height << endl;
//
//	person p2(p1);
//	cout << "年龄为" << p2.m_age << "身高为" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}
//
//  初始化列表
// 
//构造函数() : 属性1(值1),属性2(值2),属性3(值3)...
//{
//	;
//}

//class person
//{
//public:
//	// past
//	//person(int a, int b, int c)
//	//{
//	//	m_a = a;
//	//	m_b = b;
//	//	m_c = c;
//	//}
//	// now
//	//person() :m_a(30), m_b(20), m_c(10)
//	person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
//	{
//		;
//	}
//	int m_a;
//	int m_b;
//	int m_c;
//};
//void test01()
//{
//	//person p(10, 20, 30);
//	//person p;
//	person p (11, 22, 33);
//	cout << p.m_a << endl;
//	cout << p.m_b << endl;
//	cout << p.m_c << endl;
//}
//int main()
//{
//	test01();
//
//	return 0;
//}

// 类对象作为类成员

//class car
//{
//public:
//	car(string car)
//	{
//		c_car = car;
//		cout << "car的执行" << endl;
//	}
//	~car()
//	{
//		cout << "car析构的执行" << endl;
//	}
//	string c_car;
//};
//class person
//{
//public:
//	person(string name, string c_car) :m_name(name), m_car(c_car)
//	{
//		cout << "person的执行" << endl;
//	}
//	~person()
//	{
//		cout << "person析构的执行" << endl;
//	}
//	string m_name;
//	car m_car;
//};
//void test01()
//{
//	person p("Joyce", "BMW");
//	cout << p.m_name << "开着" << p.m_car.c_car << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

// 静态成员
//class person
//{
//public:
//	static int m_age;
//private:
//	static int m_a;
//};
//int person::m_age = 52;
//int person::m_a = 22;
//
//void test01()
//{
//	person p;
//	cout << p.m_age << endl;
//	//cout << p.m_a << endl;
//}
//
//void test02()
//{
//	//	①通过对象进行访问
//	person p;
//	cout << p.m_age << endl;
//	person p2;
//	p2.m_age = 66;
//	cout << p.m_age << endl;
//	//	②通过类名进行访问
//	//cout << person::m_age << endl;
//}
//int main()
//{
//	test02();
//	return 0;
//}

class person
{
public:
	static	void func() // 静态成员函数
	{
		m_a = 55;
		//m_b = 10;
		cout << "func的调用" << endl;
	}
	static int m_a; // 静态成员变量
	//int m_b;	// 普通成员变量

private:
	static	void func2() // 静态成员函数
	{
		cout << "func2的调用" << endl;
	}
};
int person::m_a = 50;
void test01()
{
	// 通过对象访问
	person p;
	p.func();

	// 通过类名访问
	person::func();
	//person::func2();
}
int main()
{
	test01();

	return 0;
}