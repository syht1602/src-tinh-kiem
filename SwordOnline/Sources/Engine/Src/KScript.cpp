//---------------------------------------------------------------------------
// Sword3 Engine (c) 1999-2000 by Kingsoft
// 
// File:	KScript.cpp
// Date:	2001-9-11 10:33:35
// Code:	Romandou
// Desc:	�ű�����ӿ�
//---------------------------------------------------------------------------
#include "KWin32.h"
#include "KDebug.h"
#include "KScript.h"
//---------------------------------------------------------------------------
// ����:	KScript::KScript
// ����:	
// ����:	
//---------------------------------------------------------------------------
KScript::KScript()
{
}
//---------------------------------------------------------------------------
// ����:	KScript::~KScript
// ����:	
// ����:	
//---------------------------------------------------------------------------
KScript::~KScript()
{
}
//---------------------------------------------------------------------------
// ����:	KScript::Init
// ����:	
// ����:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::Init()
{
	return TRUE;
}
//---------------------------------------------------------------------------
// ����:	KScript::Exit
// ����:	
// ����:	void
//---------------------------------------------------------------------------
void KScript::Exit()
{
}
//---------------------------------------------------------------------------
// ����:	KScript::Load
// ����:	
// ����:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::Load(char* FileName)
{
	return TRUE;
}
//---------------------------------------------------------------------------
// ����:	KScript::Compile
// ����:	
// ����:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::Compile(char* FileName)
{
	return TRUE;
}
//---------------------------------------------------------------------------
// ����:	KScript::Execute
// ����:	
// ����:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::Execute()
{
	return TRUE;
}
//---------------------------------------------------------------------------
// ����:	KScript::CallFunction
// ����:	
// ����:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::CallFunction(LPSTR cFuncName, int nResults, LPSTR cFormat,...)
{
	return TRUE;
}
//---------------------------------------------------------------------------
// ����:	KScript::RegisterFunction
// ����:	
// ����:	
// ����:	BOOL
//---------------------------------------------------------------------------
BOOL KScript::RegisterFunction(LPSTR FuncName, void* Func)
{
	return TRUE;
}
//---------------------------------------------------------------------------