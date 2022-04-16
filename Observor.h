#ifndef _OBSERVER_H_ 
#define _OBSERVER_H_ 
#include "stdafx.h"
#include "Subject.h" 
#include "stateDef.h"
#include <string> 

using namespace std;
//typedef string State;

class Observor //观察者
{
public:
	virtual void Update(Subject* sub) = 0;	//这个主题 绑定此观察者
	virtual void PrintInfo() = 0;			// 打印 这个主题状态

protected:
	State_t _st;
private:
};


#endif //~_OBSERVER_H_