#include "Info.h"
#include "pch.h"
#include "ASMMethodCalls.h"


/* Base address: 010009ADF*/
unsigned int base_address = 0x010009ADF;
/**
7E80 offset
 */
INFO_API bool TI_DXInfo() 
{
	return CallStaticMethod<bool>((unsigned int)base_address + 0x7E80);
}

/**
7DB0 offset
 */
INFO_API struct AdapterInformation* TI_GatherAdptInfo(void)
{
	return CallStaticMethod<AdapterInformation*>((unsigned int)base_address + 0x7DB0);
}

/*
7F50 offset
*/
INFO_API char const* TI_GatherSysInfo(void)
{
	return CallStaticMethod<char const*>((unsigned int)base_address + 0x7F50);
}

/*
7E60 offset
*/
INFO_API struct AdapterInformation* TI_GetAdptInfo(void)
{
	return CallStaticMethod<AdapterInformation*>((unsigned int)base_address + 0x7E60);
}

/*
7F30
*/
INFO_API char const* TI_GetSysInfo(void)
{
	return CallStaticMethod<char const*>((unsigned int)base_address + 0x7F30);
}

INFO_API struct AdapterInformation* TI_ReadAdptInfoFile(void) {
	return CallStaticMethod<AdapterInformation*>((unsigned int)base_address + 0x7E50);
}

INFO_API char const* TI_ReadSysInfoFile(void) {
	return CallStaticMethod<char const*>((unsigned int)base_address + 0x8070);
}

INFO_API void TI_ReleaseAdptInfo(void) {
	return CallStaticMethod<void>((unsigned int)base_address + 0x7F00);
}

INFO_API bool TI_SendHttpPostData(char const* arg1, char const* arg2, char const* arg3) {
	return CallStaticMethod<bool, char const*, char const*, char const*>((unsigned int)base_address + 0x7EE0, arg1, arg2, arg3);
}

INFO_API bool TI_SendHttpQueryData(char const* query) {
	return CallStaticMethod<bool, char const*>((unsigned int)base_address + 0x7EF0, query);
}