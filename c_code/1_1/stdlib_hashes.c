/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val);
static N_INLINE(NI, HEX21HEX24_131054)(NI h);
TNimType NTI131021; /* THash */

static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU32)(h) + (NU32)(val));
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	return result;
}

static N_INLINE(NI, HEX21HEX24_131054)(NI h) {
	NI result;
	result = 0;
	result = (NI)((NU32)(h) + (NU32)((NI)((NU32)(h) << (NU32)(3))));
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(11)));
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(15))));
	return result;
}

N_NIMCALL(NI, hash_131839)(NimStringDesc* x) {
	NI result;
	NI h;
	result = 0;
	h = 0;
	{
		NI i_131854;
		NI HEX3Atmp_131865;
		NI res_131868;
		i_131854 = 0;
		HEX3Atmp_131865 = 0;
		HEX3Atmp_131865 = (NI32)(x->Sup.len - 1);
		res_131868 = 0;
		{
			while (1) {
				if (!(res_131868 <= HEX3Atmp_131865)) goto LA3;
				i_131854 = res_131868;
				h = HEX21HEX26_131025(h, ((NI) (((NU8)(x->data[i_131854])))));
				res_131868 += 1;
			} LA3: ;
		}
	}
	result = HEX21HEX24_131054(h);
	return result;
}

N_NIMCALL(NI, hashignorestyle_131885)(NimStringDesc* x) {
	NI result;
	NI h;
	result = 0;
	h = 0;
	{
		NI i_131900;
		NI HEX3Atmp_131954;
		NI res_131957;
		i_131900 = 0;
		HEX3Atmp_131954 = 0;
		HEX3Atmp_131954 = (NI32)(x->Sup.len - 1);
		res_131957 = 0;
		{
			while (1) {
				if (!(res_131957 <= HEX3Atmp_131954)) goto LA3;
				i_131900 = res_131957;
				{
					NIM_CHAR c;
					c = x->data[i_131900];
					{
						if (!((NU8)(c) == (NU8)(95))) goto LA7;
						goto LA4;
					}
					LA7: ;
					{
						if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA11;
						c = ((NIM_CHAR) (((NI) ((NI32)(((NI) (((NU8)(c)))) + 32)))));
					}
					LA11: ;
					h = HEX21HEX26_131025(h, ((NI) (((NU8)(c)))));
				} LA4: ;
				res_131957 += 1;
			} LA3: ;
		}
	}
	result = HEX21HEX24_131054(h);
	return result;
}

N_NIMCALL(NI, hashignorecase_131977)(NimStringDesc* x) {
	NI result;
	NI h;
	result = 0;
	h = 0;
	{
		NI i_131992;
		NI HEX3Atmp_132045;
		NI res_132048;
		i_131992 = 0;
		HEX3Atmp_132045 = 0;
		HEX3Atmp_132045 = (NI32)(x->Sup.len - 1);
		res_132048 = 0;
		{
			while (1) {
				NIM_CHAR c;
				if (!(res_132048 <= HEX3Atmp_132045)) goto LA3;
				i_131992 = res_132048;
				c = x->data[i_131992];
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6;
					c = ((NIM_CHAR) (((NI) ((NI32)(((NI) (((NU8)(c)))) + 32)))));
				}
				LA6: ;
				h = HEX21HEX26_131025(h, ((NI) (((NU8)(c)))));
				res_132048 += 1;
			} LA3: ;
		}
	}
	result = HEX21HEX24_131054(h);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void) {
NTI131021.size = sizeof(NI);
NTI131021.kind = 31;
NTI131021.base = 0;
NTI131021.flags = 3;
}
