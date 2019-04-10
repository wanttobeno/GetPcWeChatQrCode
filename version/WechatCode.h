#ifndef __DEF_WECHATCORE_MON__
#define __DEF_WECHATCORE_MON__

#include "windows.h"

#include <vector> 
using namespace std;
#include <atlstr.h>

class WechatCore
{
public:	
	VOID Start();
   

public:
	static WechatCore* Instance()
	{
		static WechatCore s_Instance;
		return &s_Instance;
	}
	
private:
	WechatCore::WechatCore() :
		// 原始模块句柄
		m_hModule(NULL),
		m_Init(0)
	{
		;
	}

	VOID _StartImpl();
	VOID StartHook();
    
public:
	HMODULE m_hModule;        // 注入的模块的地址

private:
	BOOL  m_Init;              // HOOK环境初始化Ok
};






#endif