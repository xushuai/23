// observer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Subject.h" 
#include "ConcreateSubject.h"

#include "Observor.h"
#include "ConcreteObservorA.h"
#include "ConcreteObservorB.h"

#include <iostream>
using namespace std;

// 视觉识别信息主题，给观察者1 界面，2车体 使用更新
int main(int argc, char* argv[])
{
	Subject* sub = new ConcreteSubject();
	Observor* o1 = new ConcreteObservorA(sub);
	Observor* o2 = new ConcreteObservorB(sub);
	State_t  curState;
	curState.index = 1;
	curState.state = "old";
	sub->SetState(curState); 
	sub->Notify(); // 此主题更新所有观察者 //也可以由 Observer 调用
	curState.index = 2;
	curState.state = "new";
	sub->SetState(curState);
	sub->Notify(); // 此主题更新所有观察者 //也可以由 Observer 调用

	curState.index = 3;
	curState.state = "third";
	sub->SetState(curState); 
	o1->Update(sub); // 只更新此观察者 //也可以由 Subject 调用  

    return 0;
}

