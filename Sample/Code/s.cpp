#include <Windows.h>

void __declspec(dllexport) FeedInstance( void *pinstance ) {

}
void __declspec(dllexport) Behavior( DWORD &behavior ) {

}
void __declspec(dllexport) Evt_Btn0() {

}
void __declspec(dllexport) Evt_Btn1() {

}
void __declspec(dllexport) Evt_Btn2() {

}
void __declspec(dllexport) Evt_Btn3() {

}
void __declspec(dllexport) Evt_Btn4() {

}
void __declspec(dllexport) Evt_Btn5() {

}
void __declspec(dllexport) Evt_Btn6() {

}
void __declspec(dllexport) Evt_Btn7() {

}

void __declspec(dllexport) Evt_Pov0() {

}
void __declspec(dllexport) Evt_Pov1() {

}
void __declspec(dllexport) Evt_Pov2() {

}
void __declspec(dllexport) Evt_Pov3() {

}

void __declspec(dllexport) Evt_WindowFound( HANDLE handle ) {

}
void __declspec(dllexport) Evt_WindowLost( HANDLE handle ) {

}
void __declspec(dllexport) Evt_StickLeft( DWORD x, DWORD y, DWORD z ) {

}
void __declspec(dllexport) Evt_StickRight( DWORD x, DWORD y, DWORD z ) {

}

void __declspec(dllexport) Classname( wchar_t **ppstrw ) {
	*ppstrw = L"WHITE ALBUM2CN";
}

void __declspec(dllexport) Titlename( wchar_t **ppstrw ) {
	*ppstrw = L"WHITE ALBUM2";
}