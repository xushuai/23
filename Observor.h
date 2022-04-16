#ifndef _OBSERVER_H_ 
#define _OBSERVER_H_ 
#include "stdafx.h"
#include "Subject.h" 
#include "stateDef.h"
#include <string> 

using namespace std;
//typedef string State;

class Observor //�۲���
{
public:
	virtual void Update(Subject* sub) = 0;	//������� �󶨴˹۲���
	virtual void PrintInfo() = 0;			// ��ӡ �������״̬

protected:
	State_t _st;
private:
};


#endif //~_OBSERVER_H_