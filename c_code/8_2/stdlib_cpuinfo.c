/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
typedef int tyArray_VR9bNthWayFgb5M9avIR8bkA[4];
#include <sys/sysctl.h>
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	tyArray_VR9bNthWayFgb5M9avIR8bkA mib;
	NI numCPU;
	size_t len;
	int T1_;
	result = (NI)0;
	nimZeroMem((void*)mib, sizeof(tyArray_VR9bNthWayFgb5M9avIR8bkA));
	numCPU = (NI)0;
	len = (size_t)0;
	mib[(((NI) 0))- 0] = ((int) 6);
	mib[(((NI) 1))- 0] = ((int) 25);
	len = ((NI) 8);
	T1_ = (int)0;
	T1_ = sysctl(mib, ((int) 2), ((void*) ((&numCPU))), (&len), NIM_NIL, ((NI) 0));
	T1_;
	{
		int T6_;
		if (!(numCPU < ((NI) 1))) goto LA4_;
		mib[(((NI) 1))- 0] = ((int) 3);
		T6_ = (int)0;
		T6_ = sysctl(mib, ((int) 2), ((void*) ((&numCPU))), (&len), NIM_NIL, ((NI) 0));
		T6_;
	}
	LA4_: ;
	result = numCPU;
	{
		if (!(result <= ((NI) 0))) goto LA9_;
		result = ((NI) 0);
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_cpuinfoInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_cpuinfoDatInit000)(void) {
}

