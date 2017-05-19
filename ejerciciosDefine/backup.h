#pragma once  //______________________________________ ejerciciosDefine.h  
#include "Resource.h"
class ejerciciosDefine : public Win::Dialog
{
public:
	ejerciciosDefine()
	{
	}
	~ejerciciosDefine()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btCalcular;
	Win::Label lb2;
	Win::Textbox tbxArea;
	Win::Label lb3;
	Win::Textbox tbxPerimetro;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(448);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(79);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ejerciciosDefine";
		lb1.Create(NULL, L"Radio", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 17, 11, 66, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 83, 13, 75, 25, hWnd, 1001);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 169, 15, 77, 28, hWnd, 1002);
		lb2.Create(NULL, L"Area", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 275, 5, 60, 25, hWnd, 1003);
		tbxArea.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 336, 5, 105, 25, hWnd, 1004);
		lb3.Create(NULL, L"Perimetro", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 275, 44, 63, 25, hWnd, 1005);
		tbxPerimetro.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 338, 47, 63, 25, hWnd, 1006);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxArea.Font = fontArial014A;
		lb3.Font = fontArial014A;
		tbxPerimetro.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
