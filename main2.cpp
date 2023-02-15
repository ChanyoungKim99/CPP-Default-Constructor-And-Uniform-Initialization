#include <iostream>

class MyClass
{
private:
	int mValue1{ 1 };
	float mValue2{ 2.0f };

public:
	MyClass(int value1, float value2)
	{
		mValue1 = value1;
		mValue2 = value2;
	}

	void Print()
	{
		std::cout << mValue1 << " : " << mValue2 << std::endl;
	}
};

int main()
{
	MyClass c1{ 0, 0.0f };		// ������?

	c1.Print();

	/* ����
	1. MyClass Ŭ������ �ҷ���
	2. c1�� �ν��Ͻ�ȭ ��, �����ڿ� ���� (1, 2.0f)
	3. { 0, 0.0f } �� ���� ���� ��ȭ

	���������� 0 : 0 ���
	*/
}