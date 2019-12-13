#pragma once

#define INFO_API __declspec(dllexport)

INFO_API bool TI_DXInfo(void);

INFO_API struct AdapterInformation* TI_GatherAdptInfo(void);

INFO_API char const* TI_GatherSysInfo(void);

INFO_API struct AdapterInformation* TI_GetAdptInfo(void);

INFO_API char const* TI_GetSysInfo(void);

INFO_API struct AdapterInformation* TI_ReadAdptInfoFile(void);

INFO_API char const* TI_ReadSysInfoFile(void);

INFO_API void TI_ReleaseAdptInfo(void);

INFO_API bool TI_SendHttpPostData(char const*, char const*, char const*);

INFO_API bool TI_SendHttpQueryData(char const*);