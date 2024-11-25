#pragma once
class CCore
{
public:
	static CCore* GetInstance() {
		static CCore instance;
		return &instance;
	}
private:
	CCore();
	~CCore();

private:
	HWND m_hWnd;
	POINT m_resolution;
	HDC m_hdc;
public:
	HWND GetHwnd() { return m_hWnd; }
	HDC GetHdc() { return m_hdc; }
	POINT GetResolution() { return m_resolution; }

public:
	// ���� â�� �ػ󵵸� �����Ѵ�
	int init(HWND _hWnd, POINT _resolution);
	void update();
	void render(HDC _hdc);
};

