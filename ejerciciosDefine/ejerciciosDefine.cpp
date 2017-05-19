#include "stdafx.h"  //________________________________________ ejerciciosDefine.cpp
#include "ejerciciosDefine.h"
#define M_PI 3.14159265358979323846

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ejerciciosDefine app;
	return app.BeginDialog(IDI_ejerciciosDefine, hInstance);
}

void ejerciciosDefine::Window_Open(Win::Event& e)
{
}

void ejerciciosDefine::btCalcular_Click(Win::Event& e)
{
	const double entrada = tbxEntrada.DoubleValue;
	const double area = (entrada*entrada)*M_PI;
	const double perimetro = (2 * entrada)*M_PI;
	wstring salida;
	int respuesta = this->MessageBox(L"Desea usar pulgadas?", L"Circulo", MB_YESNO | MB_ICONINFORMATION);
	if (respuesta == IDYES)
	{
		tbxArea.DoubleValue = area* 0.39370;
		tbxPerimetro.DoubleValue = perimetro* 0.39370;
		salida = L"sq-in";
		lb4.Text = salida;
		salida = L"in";
		lb5.Text = salida;
	}
	else
	{
		tbxArea.DoubleValue = area;
		tbxPerimetro.DoubleValue = perimetro;
		salida = L"sq-com";
		lb4.Text = salida;
		salida = L"cm";
		lb5.Text = salida;
	}
}

