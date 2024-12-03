#pragma once
class CCore
{
SINGLETON(CCore)

private:
	HWND m_hWnd;
	POINT m_resolution;
	HDC m_hdc;
public:
	HWND GetHwnd() { return m_hWnd; }
	HDC GetHdc() { return m_hdc; }
	POINT GetResolution() { return m_resolution; }

public:
	// 메인 창과 해상도를 설정한다
	int init(HWND _hWnd, POINT _resolution);
	void update();
	void render(HDC _hdc);
};

