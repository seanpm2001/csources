/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

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
typedef struct tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_61YBnzSZ9bYHqA2OqxFo2Eg_2)(void);
N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* gcookies_ZEiWDv9cexkEMVa9a4srCISA;
extern TNimType NTI_n9cmoMXcDs47wYDFGEXuCfw_;
static N_NIMCALL(void, TM_61YBnzSZ9bYHqA2OqxFo2Eg_2)(void) {
	nimGCvisit((void*)gcookies_ZEiWDv9cexkEMVa9a4srCISA, 0);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_cgiInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
nimRegisterThreadLocalMarker(TM_61YBnzSZ9bYHqA2OqxFo2Eg_2);
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_cgiDatInit000)(void) {
}

