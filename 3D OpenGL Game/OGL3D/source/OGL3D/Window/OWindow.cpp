#include <OGL3D/Window/OWindow.h>
#include <Windows.h>
#include <assert.h>


OWindow::OWindow()
{
	WNDCLASSEX wc = {};
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.lpszClassName = L"OGL3DWindow";
	wc.lpfnWndProc = DefWindowProc;

	RegisterClassEx(&wc));

	CreateWindowExW(NULL, L"OGL3DWindow",L"St0rmster | OpenGL 3D Game",WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU,
		CW_USEDEFAULT, CW_USEDEFAULT, 1024 ,768
}

OWindow::~OWindow()
{
}
