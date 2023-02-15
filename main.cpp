#include <iostream>

class Quest
{
private: 
	int mID;	// 퀘스트의 ID
	int mExp;	// 퀘스트 경험치 보상량

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

	// 위는 생성자 오버로딩(Overloading)이 일어난 상태

	void Print()
	{
		std::cout << "QuestID : " << mID << std::endl <<
					 "EXP : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1;				// 11번으로 점프, q1는 1과 쓰레기값 출력 
							// <default constructor>
							// Quest q1() 처럼 사용한다면,
							// 마치 Quest 타입을 반환하는
							// q1 함수의 선언 처럼 되기 때문에 
							// Quest q1; 의 형태로 사용해야 한다.
	q1.Print();


	Quest q2(2, 100);		// 17번으로 점프, q2는 2와 100을 출력
							// <(int, int) constructor>
	q2.Print();


	// uniform initialization
	Quest q3{};
	q3.Print();
	// 헷갈리지도 않고, 간편하다!!!
}

/*
	Quest()
	{
		mID = 1;
	}

	Quest(int id = 1, int exp = 1)		// 매개변수에 기본값을 설정
	{
		mID = id;
		mExp = exp;
	}

	Quest.q1; 일 경우,
	오류가 발생한다.

	위의 두 생성자가 모두 기본값이 설정되어 있으므로
	어느 생성자로 가야할지 결정을 못하기 때문이다
*/