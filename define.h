#pragma once

#define SINGLETON(TYPE) public:\
static TYPE* GetInstance() {\
	static TYPE instance;\
	return &instance;\
}\
private:\
	TYPE();\
	~TYPE();