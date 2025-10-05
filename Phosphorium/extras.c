#include "phosphorium.h"

VOID
GetRandPath(
	_In_ LPWSTR szRand,
	_In_ CONST INT nLength
)
{
	for (INT i = 0; i < nLength; i++)
	{
		szRand[i] = (WCHAR)(Xorshift32() % (0x9FFF - 0x4E00 + 1) + 0x4E00);
	}
}
