#include <OGL3D/Window/OWindow.h>
#include <Windows.h>
#include <assert.h>

OWindow::OWindow()
{
	WNDCLASSEX wc = {};
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.lpszClassName = L"OGL3DWindow";
	wc.lpfnWndProc = DefWindowProc;

	assert(RegisterClassEx(&wc));

	RECT rc = { 0,0,1024,768 };
	AdjustWindowRect(&rc, WS_SYSMENU, false);

	m_handle = CreateWindowEx(NULL, L"OGL3DWindow", L"St0rmster | OpenGL 3D Game", WS_SYSMENU, CW_USEDEFAULT, CW_USEDEFAULT,
	rc.right, rc.bottom, NULL, NULL, NULL, NULL);

	assert(m_handle);

}

OWindow::~OWindow()
{
}
