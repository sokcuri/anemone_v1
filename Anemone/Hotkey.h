#pragma once
class CHotkey
{
public:
	CHotkey();
	~CHotkey();

	bool InstallHook();
	bool RemoveHook();

	bool LoadKeyMap();
	bool SaveKeyMap();

private:
	static CHotkey *m_pThis;
	HHOOK m_hHook;

	// Trampoline
	static LRESULT CALLBACK _KeyboardProc(int code, WPARAM wParam, LPARAM lParam)
	{
		return m_pThis->KeyboardProc(code, wParam, lParam);
	}

	inline void RegKey(int func, int code, bool bCtrl, bool bAlt, bool bShift);

	LRESULT KeyboardProc(int code, WPARAM wParam, LPARAM lParam);
};
