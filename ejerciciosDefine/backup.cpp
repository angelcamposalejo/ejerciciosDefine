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
	tbxArea.DoubleValue = area;
	tbxPerimetro.DoubleValue = perimetro;
}

