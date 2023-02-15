#include <iostream>

class Quest
{
private: 
	int mID;	// ����Ʈ�� ID
	int mExp;	// ����Ʈ ����ġ ����

public:
	// default constructor
	Quest()
	{
		mID = 1;
	}

	// constructor
	Quest(int id, int exp)
	{
		mID = id;
		mExp = exp;
	}

	// ���� ������ �����ε�(Overloading)�� �Ͼ ����

	void Print()
	{
		std::cout << "QuestID : " << mID << std::endl <<
					 "EXP : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1;				// 11������ ����, q1�� 1�� �����Ⱚ ��� 
							// <default constructor>
							// Quest q1() ó�� ����Ѵٸ�,
							// ��ġ Quest Ÿ���� ��ȯ�ϴ�
							// q1 �Լ��� ���� ó�� �Ǳ� ������ 
							// Quest q1; �� ���·� ����ؾ� �Ѵ�.
	q1.Print();


	Quest q2(2, 100);		// 17������ ����, q2�� 2�� 100�� ���
							// <(int, int) constructor>
	q2.Print();


	// uniform initialization
	Quest q3{};
	q3.Print();
	// �򰥸����� �ʰ�, �����ϴ�!!!
}

/*
	Quest()
	{
		mID = 1;
	}

	Quest(int id = 1, int exp = 1)		// �Ű������� �⺻���� ����
	{
		mID = id;
		mExp = exp;
	}

	Quest.q1; �� ���,
	������ �߻��Ѵ�.

	���� �� �����ڰ� ��� �⺻���� �����Ǿ� �����Ƿ�
	��� �����ڷ� �������� ������ ���ϱ� �����̴�
*/