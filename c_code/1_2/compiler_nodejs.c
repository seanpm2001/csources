/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray_24KAM9afIUgUaqBaEBB6r9bg[3];
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, findExe_XcLgn9booQ6akyBsF074Lfw)(NimStringDesc* exe, NIM_BOOL followSymlinks, NimStringDesc** extensions, NI extensionsLen_0);
STRING_LITERAL(TM_vpySxxvhbUge4gGGqPvLSQ_2, "nodejs", 6);
STRING_LITERAL(TM_vpySxxvhbUge4gGGqPvLSQ_4, "exe", 3);
STRING_LITERAL(TM_vpySxxvhbUge4gGGqPvLSQ_5, "cmd", 3);
STRING_LITERAL(TM_vpySxxvhbUge4gGGqPvLSQ_6, "bat", 3);
NIM_CONST tyArray_24KAM9afIUgUaqBaEBB6r9bg TM_vpySxxvhbUge4gGGqPvLSQ_3 = {((NimStringDesc*) &TM_vpySxxvhbUge4gGGqPvLSQ_4),
((NimStringDesc*) &TM_vpySxxvhbUge4gGGqPvLSQ_5),
((NimStringDesc*) &TM_vpySxxvhbUge4gGGqPvLSQ_6)}
;
STRING_LITERAL(TM_vpySxxvhbUge4gGGqPvLSQ_7, "node", 4);
STRING_LITERAL(TM_vpySxxvhbUge4gGGqPvLSQ_8, "iojs", 4);

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, findNodeJs_z61UrGeYjp2dp3H9c8bG88g)(void) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = findExe_XcLgn9booQ6akyBsF074Lfw(((NimStringDesc*) &TM_vpySxxvhbUge4gGGqPvLSQ_2), NIM_TRUE, TM_vpySxxvhbUge4gGGqPvLSQ_3, 3);
	{
		if (!((result ? result->Sup.len : 0) == 0)) goto LA3_;
		result = findExe_XcLgn9booQ6akyBsF074Lfw(((NimStringDesc*) &TM_vpySxxvhbUge4gGGqPvLSQ_7), NIM_TRUE, TM_vpySxxvhbUge4gGGqPvLSQ_3, 3);
	}
	LA3_: ;
	{
		if (!((result ? result->Sup.len : 0) == 0)) goto LA7_;
		result = findExe_XcLgn9booQ6akyBsF074Lfw(((NimStringDesc*) &TM_vpySxxvhbUge4gGGqPvLSQ_8), NIM_TRUE, TM_vpySxxvhbUge4gGGqPvLSQ_3, 3);
	}
	LA7_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_nodejsInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_nodejsDatInit000)(void) {
}

