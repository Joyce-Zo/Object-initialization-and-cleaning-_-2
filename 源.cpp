#include<iostream>
#include<string>
using namespace std;

// ���캯������������ - ��ʼ��������
//class person
//{
//public:
//	person()
//	{
//		cout << "person_���캯���ĵ���" << endl;
//	}
//
//	~person()
//	{
//		cout << "person_���������ĵ���" << endl;
//	}
//};
//
//void test1()
//{
//	person p; // ջ�ϵ����ݣ�test1ִ����Ϻ��ͷ��������
//}
//int main()
//{
//	//test1();
//
//	person p;
//	return 0;
//}

// ���������
//class person
//{
//public:
//	// ���޲ι���
//	person()
//	{
//		cout << "person_�޲ι��캯���ĵ���" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "person_�вι��캯���ĵ���" << endl;
//	}
//	
//	// ��������
//	person(const person& p) // �����޸�ԭ���캯�������Լ�const
//	{
//		age = p.age;
//		cout << "person_�������캯���ĵ���" << endl;
//	}
//
//	~person()
//	{
//		cout << "person_���������ĵ���" << endl;
//	}
//
//	int age = 21;
//};
//
//// ����
//void test1()	
//{
	 //���ŷ�
	//person p1;	 // �޲ι��캯�� �ĵ��� ���ƺ󲻼�����
	//person p2(5);  // �вι��캯�� �ĵ���
	//person p3(p2); // �������캯�� �ĵ���

	//cout << p2.age << endl;
	//cout << p3.age << endl; // p2��ageҲ����p3�����Խ����ͬ

	// ע�⣺
	//person p1();
	//
	//void func();

	// ��ʽ��
	//person p1; // �޲�
	//person p2 = person(5); // �в�
	//person p3 = person(p2);// ����

	//person(5); // �������󣬵�ǰ��ִ���꣬����������ϵͳ����
	//cout << "444" << endl;

	//person(p3);


	// ��ʽת����
//	person p4 = 10;  // �ȼ���person p4 = person(10); �вι���
//	person p5 = p4;  // ��������
//}
//int main()
//{
//	test1();
//	return 0;
//}

// �������캯���ĵ���ʱ��
//class person
//{
//public:
//	person()
//	{
//		cout << "personĬ�Ϲ��캯������" << endl;
//	}
//	person(int age)
//	{
//		m_age = age;
//		cout << "person�вι��캯������" << endl;
//	}
//	person(const person& p)
//	{
//		m_age = p.m_age;
//		cout << "person�������캯������" << endl;
//	}
//
//	~person()
//	{
//		cout << "person������������" << endl;
//	}
//
//	int m_age;
//};

// 1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	person p1(50);
//	person p2(p1);
//	
//	cout << "p2������Ϊ:" << p2.m_age << endl;
//}
//
//// 2.ֵ���ݷ�ʽ��������������
//void func(person p)
//{
//	;
//}
//void test02()
//{
//	person p; // Ĭ�Ϲ��캯��
//	func(p); // �������캯��
//}
//
//// 3.ֵ�ķ�ʽ���ؾֲ�����
//person func2()
//{
//	person p1; // Ĭ�Ϲ��캯��
//	cout << &p1 << endl;
//	return p1; // ���� ֵ
//}
//void test03()
//{
//	person p2 = func2();// ���պ󣬳�Ϊ�������캯��
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

// ���캯�����ù���
//class person
//{
//public:
//	/*person()
//	{
//		cout << "personĬ�Ϲ��캯������" << endl;
//	}*/
//	/*person(int age)
//	{
//		m_age = age;
//		cout << "person�вι��캯������" << endl;
//	}*/
//	person(const person& p)
//	{
//		m_age = p.m_age;
//		cout << "person�������캯������" << endl;
//	}
//
//	~person()
//	{
//		cout << "person������������" << endl;
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
//	person p1; // Ĭ�Ϲ��캯��
//	person p2(10); // �вι��캯��
//}

//int main()
//{
//	test01();
//	test03();
//	return 0;
//}

// �����ǳ��������
//class person
//{
//public:
//	person()
//	{
//		cout << "personĬ�Ϲ��캯������" << endl;
//	}
//	person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "person�вι��캯������" << endl;
//	}
//	person(const person& p)
//	{
//		m_age = p.m_age;
//		//m_height = p.m_height; //������Ĭ��ʵ�֣���ǳ����
//		m_height = new int(*p.m_height);
//		cout << "person�������캯������" << endl;
//	}
//
//	~person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "person������������" << endl;
//	}
//
//	int m_age;
//	int* m_height;
//};
//
//void test01()
//{
//	person p1(22,179);
//	cout << "����Ϊ" << p1.m_age << "���Ϊ" << *p1.m_height << endl;
//
//	person p2(p1);
//	cout << "����Ϊ" << p2.m_age << "���Ϊ" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}
//
//  ��ʼ���б�
// 
//���캯��() : ����1(ֵ1),����2(ֵ2),����3(ֵ3)...
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

// �������Ϊ���Ա

//class car
//{
//public:
//	car(string car)
//	{
//		c_car = car;
//		cout << "car��ִ��" << endl;
//	}
//	~car()
//	{
//		cout << "car������ִ��" << endl;
//	}
//	string c_car;
//};
//class person
//{
//public:
//	person(string name, string c_car) :m_name(name), m_car(c_car)
//	{
//		cout << "person��ִ��" << endl;
//	}
//	~person()
//	{
//		cout << "person������ִ��" << endl;
//	}
//	string m_name;
//	car m_car;
//};
//void test01()
//{
//	person p("Joyce", "BMW");
//	cout << p.m_name << "����" << p.m_car.c_car << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

// ��̬��Ա
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
//	//	��ͨ��������з���
//	person p;
//	cout << p.m_age << endl;
//	person p2;
//	p2.m_age = 66;
//	cout << p.m_age << endl;
//	//	��ͨ���������з���
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
	static	void func() // ��̬��Ա����
	{
		m_a = 55;
		//m_b = 10;
		cout << "func�ĵ���" << endl;
	}
	static int m_a; // ��̬��Ա����
	//int m_b;	// ��ͨ��Ա����

private:
	static	void func2() // ��̬��Ա����
	{
		cout << "func2�ĵ���" << endl;
	}
};
int person::m_a = 50;
void test01()
{
	// ͨ���������
	person p;
	p.func();

	// ͨ����������
	person::func();
	//person::func2();
}
int main()
{
	test01();

	return 0;
}