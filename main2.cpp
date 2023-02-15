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
	MyClass c1{ 0, 0.0f };		// 순서는?

	c1.Print();

	/* 순서
	1. MyClass 클래스를 불러옴
	2. c1이 인스턴스화 됨, 생성자에 의해 (1, 2.0f)
	3. { 0, 0.0f } 에 의해 값이 변화

	최종적으로 0 : 0 출력
	*/
}