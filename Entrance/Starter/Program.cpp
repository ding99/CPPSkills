#include <iostream>

#include "windows.h"

int main() {
	std::cout << "Holle C++!" << std::endl;

	HINSTANCE hDllInst;
	hDllInst = LoadLibrary(L"Problems01_10");
	typedef int(*PLUSFUNC)(int a, int b);
	PLUSFUNC plus_str = (PLUSFUNC)GetProcAddress(hDllInst, "add");

	std::cout << plus_str(2, 3) << std::endl;

	return 0;
}