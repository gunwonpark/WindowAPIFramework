#include "pch.h"
#include "CCore.h"

CCore::CCore() :
	m_hWnd(0),
	m_resolution({0, 0}),
	m_hdc(0)
{

}

CCore::~CCore()
{

}

int CCore::init(HWND _hWnd, POINT _resolution)
{
	m_hWnd = _hWnd;
	RECT rect = { 0, 0, _resolution.x, _resolution.y };
	// 윈도우 버전과 메뉴에 맞게 크기를 조정한다SetWindowPos(_hWnd, nullptr, 100, 100, rect.right - rect.left, rect.bottom - rect.top, SWP_NOMOVE);
	AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, true);
	SetWindowPos(_hWnd, nullptr, 100, 100, rect.right - rect.left, rect.bottom - rect.top, 0);

	return 0;
}

void CCore::update()
{
}

void CCore::render(HDC _hdc)
{
}
