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
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_Ef05srmQTDulnBdXR4Ja6Q tySequence_Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ tySequence_DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence_9brg1xNurxcus33lU4IE1Dw tySequence_9brg1xNurxcus33lU4IE1Dw;
typedef struct tySequence_MvZmat48bhe9b6x9aUD58D5Q tySequence_MvZmat48bhe9b6x9aUD58D5Q;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple_zwpS6d6iewrdlBSTNFoyVA tyTuple_zwpS6d6iewrdlBSTNFoyVA;
typedef NU8 tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w;
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
} S4;
struct {tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* ident;
} S5;
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} _Ukind;
NimStringDesc* comment;
};
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* dup;
};
struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
} S1;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
} S2;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
} S4;
} _Ukind;
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* name;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
typedef NI tyArray_emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
tySequence_9brg1xNurxcus33lU4IE1Dw* data;
tyArray_emiAJ8okywrJw7ZHLzlXbQ a;
};
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence_Ef05srmQTDulnBdXR4Ja6Q* sons;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* destructor;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* deepCopy;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* assignment;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sink;
tySequence_MvZmat48bhe9b6x9aUD58D5Q* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typeInst;
};
typedef NU8 tyEnum_TDistinctCompare_9bNKHGs63atuMFXnAleTveg;
typedef NU8 tySet_tyEnum_TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw;
typedef NU64 tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
struct tyTuple_zwpS6d6iewrdlBSTNFoyVA {
NI Field0;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* Field1;
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
struct tySequence_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct tySequence_MvZmat48bhe9b6x9aUD58D5Q {
  TGenericSeq Sup;
  tyTuple_zwpS6d6iewrdlBSTNFoyVA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_TemHLbwRN019anIx4JpcPTQ)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, initIntSet_a9a80eJplB17xrdZJ41Baww)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* Result);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_PKSUIrEE34gltgjvuUpCwQ)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsOrIncl_B0EhVMrh5BBBZOOtYjAvVg)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, compareTypes_oyXq5u7iL4RjsT9bovvTE9cg)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* x, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* y, tyEnum_TDistinctCompare_9bNKHGs63atuMFXnAleTveg cmp, tySet_tyEnum_TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw flags);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, skipTypes_7vZ9a9bub9bucX5E73hsr9cjvg)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t, tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_XvshesUrxewVhlfKjjnMGw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker);
N_LIB_PRIVATE N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, lastSon_esDJA7239bJDiq4UrX9aHCjg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, lastSon_ab52xel9cFebv9am0xV04xXA)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* n);
N_LIB_PRIVATE N_NIMCALL(NI, sonsLen_SWFNCiWYB89bTUPh5KptkvA)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* n);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_1otDDZAmvFsmbqPyFytXFg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAsigmatch)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameValue_1Qdwg1ZguEjbL3mmgPJD3w)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_XvshesUrxewVhlfKjjnMGw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker) {
	tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
{	result = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 138):
	{
		{
			NI i;
			NI colontmp_;
			NI T3_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T3_ = (NI)0;
			T3_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp_ = (NI)(T3_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA5;
					i = res;
					result = isPartOfAux_XvshesUrxewVhlfKjjnMGw((*n)._Ukind.S6.sons->data[i], b, marker);
					{
						if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA8_;
						goto BeforeRet_;
					}
					LA8_: ;
					res += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 139):
	{
		result = isPartOfAux_XvshesUrxewVhlfKjjnMGw((*n)._Ukind.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA13_;
			goto BeforeRet_;
		}
		LA13_: ;
		{
			NI i_2;
			NI colontmp__2;
			NI T16_;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			T16_ = (NI)0;
			T16_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp__2 = (NI)(T16_ - ((NI) 1));
			res_2 = ((NI) 1);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA18;
					i_2 = res_2;
					switch ((*(*n)._Ukind.S6.sons->data[i_2]).kind) {
					case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 85):
					case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 88):
					{
						tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T20_;
						T20_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
						T20_ = lastSon_esDJA7239bJDiq4UrX9aHCjg((*n)._Ukind.S6.sons->data[i_2]);
						result = isPartOfAux_XvshesUrxewVhlfKjjnMGw(T20_, b, marker);
						{
							if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA23_;
							goto BeforeRet_;
						}
						LA23_: ;
					}
					break;
					default:
					{
					}
					break;
					}
					res_2 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = isPartOfAux_PKSUIrEE34gltgjvuUpCwQ((*(*n)._Ukind.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux_PKSUIrEE34gltgjvuUpCwQ)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* marker) {
	tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
{	result = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = (b == NIM_NIL);
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = containsOrIncl_B0EhVMrh5BBBZOOtYjAvVg(marker, (*a).Sup.id);
		if (!T9_) goto LA10_;
		goto BeforeRet_;
	}
	LA10_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = compareTypes_oyXq5u7iL4RjsT9bovvTE9cg(a, b, ((tyEnum_TDistinctCompare_9bNKHGs63atuMFXnAleTveg) 1), 0);
		if (!T14_) goto LA15_;
		result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
		goto BeforeRet_;
	}
	LA15_: ;
	switch ((*a).kind) {
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 17):
	{
		{
			tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* T22_;
			if (!!(((*a).sons->data[((NI) 0)] == NIM_NIL))) goto LA20_;
			T22_ = (tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
			T22_ = skipTypes_7vZ9a9bub9bucX5E73hsr9cjvg((*a).sons->data[((NI) 0)], IL64(36239903266179344));
			result = isPartOfAux_PKSUIrEE34gltgjvuUpCwQ(T22_, b, marker);
		}
		LA20_: ;
		{
			if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA25_;
			result = isPartOfAux_XvshesUrxewVhlfKjjnMGw((*a).n, b, marker);
		}
		LA25_: ;
	}
	break;
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 11):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 13):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 4):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 46):
	{
		tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* T28_;
		T28_ = (tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
		T28_ = lastSon_ab52xel9cFebv9am0xV04xXA(a);
		result = isPartOfAux_PKSUIrEE34gltgjvuUpCwQ(T28_, b, marker);
	}
	break;
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 16):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 19):
	case ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 18):
	{
		{
			NI i;
			NI colontmp_;
			NI T31_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T31_ = (NI)0;
			T31_ = sonsLen_SWFNCiWYB89bTUPh5KptkvA(a);
			colontmp_ = (NI)(T31_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA33;
					i = res;
					result = isPartOfAux_PKSUIrEE34gltgjvuUpCwQ((*a).sons->data[i], b, marker);
					{
						if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA36_;
						goto BeforeRet_;
					}
					LA36_: ;
					res += ((NI) 1);
				} LA33: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_TemHLbwRN019anIx4JpcPTQ)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b) {
	tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
	tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg marker;
	result = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	nimZeroMem((void*)(&marker), sizeof(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg));
	initIntSet_a9a80eJplB17xrdZJ41Baww((&marker));
	result = isPartOfAux_PKSUIrEE34gltgjvuUpCwQ(b, a, (&marker));
	return result;
}

static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAsigmatch)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n)._Ukind.S6.sons ? (*n)._Ukind.S6.sons->Sup.len : 0);
	result = T1_;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf_1otDDZAmvFsmbqPyFytXFg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w result;
	result = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3_;
		switch ((*a).kind) {
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			{
				if (!((*(*a)._Ukind.S4.sym).Sup.id == (*(*b)._Ukind.S4.sym).Sup.id)) goto LA8_;
				result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
			}
			goto LA6_;
			LA8_: ;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = ((12576 &(1U<<((NU)((*(*a)._Ukind.S4.sym).kind)&31U)))!=0);
				if (T11_) goto LA12_;
				T11_ = ((12576 &(1U<<((NU)((*(*b)._Ukind.S4.sym).kind)&31U)))!=0);
				LA12_: ;
				if (!T11_) goto LA13_;
				result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
			}
			goto LA6_;
			LA13_: ;
			{
				{
					tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T18_;
					T18_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T18_ = isPartOf_TemHLbwRN019anIx4JpcPTQ((*(*a)._Ukind.S4.sym).typ, (*(*b)._Ukind.S4.sym).typ);
					if (!!((T18_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA19_;
					result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA19_: ;
			}
			LA6_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a)._Ukind.S6.sons->data[((NI) 0)], (*b)._Ukind.S6.sons->data[((NI) 0)]);
			{
				NIM_BOOL T24_;
				NI T25_;
				NI T27_;
				T24_ = (NIM_BOOL)0;
				T25_ = (NI)0;
				T25_ = len_CdME9baJhvveuPEDZE9bXoxAsigmatch(a);
				T24_ = (((NI) 2) <= T25_);
				if (!(T24_)) goto LA26_;
				T27_ = (NI)0;
				T27_ = len_CdME9baJhvveuPEDZE9bXoxAsigmatch(b);
				T24_ = (((NI) 2) <= T27_);
				LA26_: ;
				if (!T24_) goto LA28_;
				{
					NIM_BOOL T32_;
					NIM_BOOL T33_;
					tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* x;
					tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* y;
					T32_ = (NIM_BOOL)0;
					T33_ = (NIM_BOOL)0;
					T33_ = (result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2));
					if (!(T33_)) goto LA34_;
					T33_ = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*a)._Ukind.S6.sons->data[((NI) 1)]);
					LA34_: ;
					T32_ = T33_;
					if (!(T32_)) goto LA35_;
					T32_ = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*b)._Ukind.S6.sons->data[((NI) 1)]);
					LA35_: ;
					if (!T32_) goto LA36_;
					{
						if (!((*(*a)._Ukind.S6.sons->data[((NI) 1)]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58))) goto LA40_;
						x = (*(*a)._Ukind.S6.sons->data[((NI) 1)])._Ukind.S6.sons->data[((NI) 1)];
					}
					goto LA38_;
					LA40_: ;
					{
						x = (*a)._Ukind.S6.sons->data[((NI) 1)];
					}
					LA38_: ;
					{
						if (!((*(*b)._Ukind.S6.sons->data[((NI) 1)]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58))) goto LA45_;
						y = (*(*b)._Ukind.S6.sons->data[((NI) 1)])._Ukind.S6.sons->data[((NI) 1)];
					}
					goto LA43_;
					LA45_: ;
					{
						y = (*b)._Ukind.S6.sons->data[((NI) 1)];
					}
					LA43_: ;
					{
						NIM_BOOL T50_;
						T50_ = (NIM_BOOL)0;
						T50_ = sameValue_1Qdwg1ZguEjbL3mmgPJD3w(x, y);
						if (!T50_) goto LA51_;
						result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
					}
					goto LA48_;
					LA51_: ;
					{
						result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
					}
					LA48_: ;
				}
				LA36_: ;
			}
			goto LA22_;
			LA28_: ;
			{
				{
					if (!!((result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2)))) goto LA57_;
					{
						tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T61_;
						T61_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
						T61_ = isPartOf_TemHLbwRN019anIx4JpcPTQ((*a).typ, (*b).typ);
						if (!!((T61_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA62_;
						result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
					}
					LA62_: ;
				}
				LA57_: ;
			}
			LA22_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a)._Ukind.S6.sons->data[((NI) 0)], (*b)._Ukind.S6.sons->data[((NI) 0)]);
			{
				if (!!((result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA67_;
				{
					if (!!(((*(*(*a)._Ukind.S6.sons->data[((NI) 1)])._Ukind.S4.sym).Sup.id == (*(*(*b)._Ukind.S6.sons->data[((NI) 1)])._Ukind.S4.sym).Sup.id))) goto LA71_;
					result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
				}
				LA71_: ;
			}
			LA67_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a)._Ukind.S6.sons->data[((NI) 0)], (*b)._Ukind.S6.sons->data[((NI) 0)]);
			{
				if (!!((result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2)))) goto LA76_;
				{
					tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T80_;
					T80_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T80_ = isPartOf_TemHLbwRN019anIx4JpcPTQ((*a).typ, (*b).typ);
					if (!!((T80_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA81_;
					result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA81_: ;
			}
			LA76_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a)._Ukind.S6.sons->data[((NI) 1)], (*b)._Ukind.S6.sons->data[((NI) 1)]);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a)._Ukind.S6.sons->data[((NI) 0)], (*b)._Ukind.S6.sons->data[((NI) 0)]);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1_;
	LA3_: ;
	{
		switch ((*b).kind) {
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 64):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b)._Ukind.S6.sons->data[((NI) 0)]);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
		{
			{
				tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T91_;
				T91_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
				T91_ = isPartOf_TemHLbwRN019anIx4JpcPTQ((*a).typ, (*b).typ);
				if (!!((T91_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA92_;
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b)._Ukind.S6.sons->data[((NI) 0)]);
				{
					if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA96_;
					result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA96_: ;
			}
			LA92_: ;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*b)._Ukind.S6.sons->data[((NI) 1)]);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			switch ((*a).kind) {
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 42):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 46):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 64):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 66) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 67):
			{
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a)._Ukind.S6.sons->data[((NI) 0)], b);
			}
			break;
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 60):
			{
				result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a)._Ukind.S6.sons->data[((NI) 1)], b);
			}
			break;
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 47):
			case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65):
			{
				{
					tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w T105_;
					T105_ = (tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T105_ = isPartOf_TemHLbwRN019anIx4JpcPTQ((*a).typ, (*b).typ);
					if (!!((T105_ == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA106_;
					result = isPartOf_1otDDZAmvFsmbqPyFytXFg((*a)._Ukind.S6.sons->data[((NI) 0)], b);
					{
						if (!(result == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA110_;
						result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
					}
					LA110_: ;
				}
				LA106_: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 38):
		{
			result = ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = len_CdME9baJhvveuPEDZE9bXoxAsigmatch(b);
				i_2 = ((NI) 1);
				{
					while (1) {
						tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w res;
						if (!(i_2 < colontmp_)) goto LA116;
						i = i_2;
						res = isPartOf_1otDDZAmvFsmbqPyFytXFg(a, (*(*b)._Ukind.S6.sons->data[i])._Ukind.S6.sons->data[((NI) 1)]);
						{
							if (!!((res == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA119_;
							result = res;
							{
								if (!(res == ((tyEnum_TAnalysisResult_p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA123_;
								goto LA114;
							}
							LA123_: ;
						}
						LA119_: ;
						i_2 += ((NI) 1);
					} LA116: ;
				}
			} LA114: ;
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_aliasesInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_aliasesDatInit000)(void) {
}

