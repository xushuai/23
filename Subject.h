//#pragma once
#ifndef  _SUBJECT_H_
#define _SUBJECT_H_

#include <list>
#include <string>
#include "stateDef.h"
using namespace std;

class Observor; //观察者类

class Subject //主题类
{
public:
	virtual ~Subject();
	virtual void Attach(Observor* obv); // 添加一个观察者
	virtual void Detach(Observor* obv); // 删除一个观察者
	virtual void Notify();				// 对所有观察者进行更新
	virtual void SetState(const State_t& st) = 0; // 设置主题状态
	virtual State_t GetState() = 0;				// 获取主题状态

protected:
	// 主题 创建了很多观察者对象
	Subject(); 

private:
	list<Observor*>* _obvs;
};


#endif // ! _SUBJECT_H_


