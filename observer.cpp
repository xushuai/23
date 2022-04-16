// observer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Subject.h" 
#include "ConcreateSubject.h"

#include "Observor.h"
#include "ConcreteObservorA.h"
#include "ConcreteObservorB.h"

#include <iostream>
using namespace std;

// �Ӿ�ʶ����Ϣ���⣬���۲���1 ���棬2���� ʹ�ø���
int main(int argc, char* argv[])
{
	Subject* sub = new ConcreteSubject();
	Observor* o1 = new ConcreteObservorA(sub);
	Observor* o2 = new ConcreteObservorB(sub);
	State_t  curState;
	curState.index = 1;
	curState.state = "old";
	sub->SetState(curState); 
	sub->Notify(); // ������������й۲��� //Ҳ������ Observer ����
	curState.index = 2;
	curState.state = "new";
	sub->SetState(curState);
	sub->Notify(); // ������������й۲��� //Ҳ������ Observer ����

	curState.index = 3;
	curState.state = "third";
	sub->SetState(curState); 
	o1->Update(sub); // ֻ���´˹۲��� //Ҳ������ Subject ����  

    return 0;
}

