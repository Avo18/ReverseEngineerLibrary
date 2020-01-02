#pragma once
#ifndef INFO_H
#define INFO_H

#include "Info.h"


/*
deze methode kan gebruikt worden voor VFTables en Statics
*/
template <typename T> __declspec(naked) T __stdcall CallStaticMethod(unsigned int method) {
	_asm {
		POP EAX
		POP ECX
		PUSH EAX
		JMP ECX
	}
}

template <typename T, typename ARG1> __declspec(naked) T __stdcall CallStaticMethod(unsigned int method, ARG1 arg1) {
	_asm {
		POP EAX
		POP ECX
		PUSH EAX
		JMP ECX
	} 
}

template <typename T, typename ARG1, typename ARG2, typename ARG3> __declspec(naked) T __stdcall CallStaticMethod(unsigned int method, ARG1 arg1, ARG2 arg2, ARG2 arg3) {
	_asm {
		POP EAX
		POP ECX
		PUSH EAX
		JMP ECX
	}
}

#endif