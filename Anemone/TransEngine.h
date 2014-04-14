﻿#pragma once
#include <string>
class CTransEngine
{
public:
	CTransEngine();
	bool Init(std::wstring &szTransPath);
	~CTransEngine();

	void  J2K_FreeMem(void *addr);
	void  J2K_GetPriorDict(void);
	void  J2K_GetProperty(void);
	void  J2K_Initialize(void);
	bool  J2K_InitializeEx(char *data0, char *key);
	void  J2K_ReloadUserDict();
	void  J2K_SetDelJPN();
	void  J2K_SetField();
	void  J2K_SetHnj2han();
	void  J2K_SetJWin();
	void  J2K_SetPriorDict();
	void  J2K_SetProperty();
	void  J2K_StopTranslation();
	void  J2K_Terminate();
	void  J2K_TranslateChat();
	void  J2K_TranslateFM();
	void  J2K_TranslateMM();
	void  J2K_TranslateMMEx();;
	int  J2K_TranslateMMNT(int data0, char *krStr);
private:
	static int ezt_addr[20];
};
