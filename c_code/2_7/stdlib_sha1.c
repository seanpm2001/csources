/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

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
typedef NU8 tyArray_YtcvxHNKV4YiecPE9ap1mcA[20];
typedef NU32 tyArray_xsE8WL1yT5DKfrMdYB89bYA[5];
typedef NU32 tyArray_BhDmUZcWSpYFIy5J8Xi8mQ[80];
N_LIB_PRIVATE N_NIMCALL(void, sha1_zQ4N39c1nMPczOjatHARrvA)(NimStringDesc* src, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result);
N_LIB_PRIVATE N_NIMCALL(void, sha1_ZDs9bk63oMeHHUe9bj3X2adQ)(NCSTRING src, NI len, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, init_aVmlTnoGwgXvNmZx0GU9cjQ)(NU32* result);
N_LIB_PRIVATE N_NIMCALL(void, innerHash_SF3Li8UR88VHBia9bGvhLow)(NU32* state, NU32* w);
static N_INLINE(void, zeroMem_7EL8Zq3xF2ujDWgp3bAEogsystem)(void* p, NI size);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, secureHash_EXfqX32pW1lnNt34KrEaBg)(NimStringDesc* str, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readFile_T9cm5LIRX2tKEH9aREBZ8A0w)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__Ql5vZ51gew5fqwplIYujaw)(tyArray_YtcvxHNKV4YiecPE9ap1mcA x, tyArray_YtcvxHNKV4YiecPE9ap1mcA y);

static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem(p, ((int) 0), size);
}

N_LIB_PRIVATE N_NIMCALL(void, init_aVmlTnoGwgXvNmZx0GU9cjQ)(NU32* result) {
	result[(((NI) 0))- 0] = ((NU32) 1732584193);
	result[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result[(((NI) 3))- 0] = ((NU32) 271733878);
	result[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}

N_LIB_PRIVATE N_NIMCALL(void, innerHash_SF3Li8UR88VHBia9bGvhLow)(NU32* state, NU32* w) {
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	NU32 e;
	NI round_1;
	NU32 v;
	NU32 v_2;
	NU32 v_3;
	NU32 v_4;
	NU32 v_5;
	a = state[(((NI) 0))- 0];
	b = state[(((NI) 1))- 0];
	c = state[(((NI) 2))- 0];
	d = state[(((NI) 3))- 0];
	e = state[(((NI) 4))- 0];
	round_1 = ((NI) 0);
	{
		while (1) {
			NU32 t;
			if (!(round_1 < ((NI) 16))) goto LA2;
			t = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NU32) 27))))) + (NU32)((NU32)((NU32)(b & c) | (NU32)((NU32)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NU32) 2))));
			b = a;
			a = t;
			round_1 += ((NI) 1);
		} LA2: ;
	}
	{
		while (1) {
			NU32 t_2;
			if (!(round_1 < ((NI) 20))) goto LA4;
			w[(round_1)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) >> (NU32)(((NU32) 31))));
			t_2 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NU32) 27))))) + (NU32)((NU32)((NU32)(b & c) | (NU32)((NU32)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NU32) 2))));
			b = a;
			a = t_2;
			round_1 += ((NI) 1);
		} LA4: ;
	}
	{
		while (1) {
			NU32 t_3;
			if (!(round_1 < ((NI) 40))) goto LA6;
			w[(round_1)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) >> (NU32)(((NU32) 31))));
			t_3 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NU32) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) 1859775393)))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NU32) 2))));
			b = a;
			a = t_3;
			round_1 += ((NI) 1);
		} LA6: ;
	}
	{
		while (1) {
			NU32 t_4;
			if (!(round_1 < ((NI) 60))) goto LA8;
			w[(round_1)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) >> (NU32)(((NU32) 31))));
			t_4 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NU32) 27))))) + (NU32)((NU32)((NU32)((NU32)(b & c) | (NU32)(b & d)) | (NU32)(c & d))))) + (NU32)(e))) + (NU32)(((NU32) IL64(2400959708))))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NU32) 2))));
			b = a;
			a = t_4;
			round_1 += ((NI) 1);
		} LA8: ;
	}
	{
		while (1) {
			NU32 t_5;
			if (!(round_1 < ((NI) 80))) goto LA10;
			w[(round_1)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) >> (NU32)(((NU32) 31))));
			t_5 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NU32) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) IL64(3395469782))))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NU32) 2))));
			b = a;
			a = t_5;
			round_1 += ((NI) 1);
		} LA10: ;
	}
	v = (NU32)((NU32)(state[(((NI) 0))- 0]) + (NU32)(a));
	state[(((NI) 0))- 0] = v;
	v_2 = (NU32)((NU32)(state[(((NI) 1))- 0]) + (NU32)(b));
	state[(((NI) 1))- 0] = v_2;
	v_3 = (NU32)((NU32)(state[(((NI) 2))- 0]) + (NU32)(c));
	state[(((NI) 2))- 0] = v_3;
	v_4 = (NU32)((NU32)(state[(((NI) 3))- 0]) + (NU32)(d));
	state[(((NI) 3))- 0] = v_4;
	v_5 = (NU32)((NU32)(state[(((NI) 4))- 0]) + (NU32)(e));
	state[(((NI) 4))- 0] = v_5;
}

static N_INLINE(void, zeroMem_7EL8Zq3xF2ujDWgp3bAEogsystem)(void* p, NI size) {
	nimZeroMem(p, size);
}

N_LIB_PRIVATE N_NIMCALL(void, sha1_ZDs9bk63oMeHHUe9bj3X2adQ)(NCSTRING src, NI len, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	tyArray_xsE8WL1yT5DKfrMdYB89bYA state;
	tyArray_BhDmUZcWSpYFIy5J8Xi8mQ w;
	NI byteLen;
	NI endOfFullBlocks;
	NI endCurrentBlock;
	NI currentBlock;
	NI lastBlockBytes;
	nimZeroMem((void*)Result, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
	nimZeroMem((void*)state, sizeof(tyArray_xsE8WL1yT5DKfrMdYB89bYA));
	init_aVmlTnoGwgXvNmZx0GU9cjQ(state);
	nimZeroMem((void*)w, sizeof(tyArray_BhDmUZcWSpYFIy5J8Xi8mQ));
	byteLen = len;
	endOfFullBlocks = (NI)(byteLen - ((NI) 64));
	endCurrentBlock = ((NI) 0);
	currentBlock = ((NI) 0);
	{
		while (1) {
			NI i;
			if (!(currentBlock <= endOfFullBlocks)) goto LA2;
			endCurrentBlock = (NI)(currentBlock + ((NI) 64));
			i = ((NI) 0);
			{
				while (1) {
					if (!(currentBlock < endCurrentBlock)) goto LA4;
					w[(i)- 0] = (NU32)((NU32)((NU32)(((NU32) (((NU8)(src[(NI)(currentBlock + ((NI) 3))])))) | (NU32)((NU32)(((NU32) (((NU8)(src[(NI)(currentBlock + ((NI) 2))]))))) << (NU32)(((NU32) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src[(NI)(currentBlock + ((NI) 1))]))))) << (NU32)(((NU32) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src[currentBlock]))))) << (NU32)(((NU32) 24))));
					currentBlock += ((NI) 4);
					i += ((NI) 1);
				} LA4: ;
			}
			innerHash_SF3Li8UR88VHBia9bGvhLow(state, w);
		} LA2: ;
	}
	endCurrentBlock = (NI)(byteLen - currentBlock);
	zeroMem_7EL8Zq3xF2ujDWgp3bAEogsystem(((void*) (w)), ((NI) 64));
	lastBlockBytes = ((NI) 0);
	{
		while (1) {
			NU32 value;
			if (!(lastBlockBytes < endCurrentBlock)) goto LA6;
			value = (NU32)((NU32)(((NU32) (((NU8)(src[(NI)(lastBlockBytes + currentBlock)]))))) << (NU32)((NU32)((NU32)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastBlockBytes & ((NI) 3))))))) << (NU32)(((NI) 3)))));
			w[((NI)((NU32)(lastBlockBytes) >> (NU32)(((NI) 2))))- 0] = (NU32)(w[((NI)((NU32)(lastBlockBytes) >> (NU32)(((NI) 2))))- 0] | value);
			lastBlockBytes += ((NI) 1);
		} LA6: ;
	}
	w[((NI)((NU32)(lastBlockBytes) >> (NU32)(((NI) 2))))- 0] = (NU32)(w[((NI)((NU32)(lastBlockBytes) >> (NU32)(((NI) 2))))- 0] | (NU32)((NU32)(((NU32) 128)) << (NU32)((NU32)((NU32)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastBlockBytes & ((NI) 3))))))) << (NU32)(((NI) 3))))));
	{
		if (!(((NI) 56) <= endCurrentBlock)) goto LA9_;
		innerHash_SF3Li8UR88VHBia9bGvhLow(state, w);
		zeroMem_7EL8Zq3xF2ujDWgp3bAEogsystem(((void*) (w)), ((NI) 64));
	}
	LA9_: ;
	w[(((NI) 15))- 0] = (NU32)((NU32)(((NU32) (byteLen))) << (NU32)(((NI) 3)));
	innerHash_SF3Li8UR88VHBia9bGvhLow(state, w);
	{
		NI i_2;
		NI res;
		i_2 = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 19))) goto LA13;
				i_2 = res;
				Result[(i_2)- 0] = ((NU8) ((NI)((NI)((NU32)(((NI) (state[((NI)((NU32)(i_2) >> (NU32)(((NI) 2))))- 0]))) >> (NU32)((NI)((NI)(((NI) 3) - (NI)(i_2 & ((NI) 3))) * ((NI) 8)))) & ((NI) 255))));
				res += ((NI) 1);
			} LA13: ;
		}
	}
}

static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, sha1_zQ4N39c1nMPczOjatHARrvA)(NimStringDesc* src, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	sha1_ZDs9bk63oMeHHUe9bj3X2adQ(nimToCStringConv(src), (src ? src->Sup.len : 0), Result);
}

N_LIB_PRIVATE N_NIMCALL(void, secureHash_EXfqX32pW1lnNt34KrEaBg)(NimStringDesc* str, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	sha1_zQ4N39c1nMPczOjatHARrvA(str, Result);
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__9cgKBrLNcxzFztdSZGMv5ZA)(tyArray_YtcvxHNKV4YiecPE9ap1mcA self) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NU8 v;
		tyArray_YtcvxHNKV4YiecPE9ap1mcA colontmp_;
		NI i;
		v = (NU8)0;
		nimZeroMem((void*)colontmp_, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
		nimCopyMem((void*)colontmp_, (NIM_CONST void*)self, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
		i = ((NI) 0);
		{
			if (!(((NI) (i)) <= ((NI) 19))) goto LA4_;
			{
				while (1) {
					NimStringDesc* T8_;
					v = colontmp_[(i)- 0];
					T8_ = (NimStringDesc*)0;
					T8_ = nsuToHex(((NI64) (((NI) (v)))), ((NI) 2));
					result = resizeString(result, (T8_ ? T8_->Sup.len : 0) + 0);
appendString(result, T8_);
					{
						if (!(((NI) 19) <= ((NI) (i)))) goto LA11_;
						goto LA6;
					}
					LA11_: ;
					i += ((NI) 1);
				}
			} LA6: ;
		}
		LA4_: ;
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, secureHashFile_4VtK7krOYr71KzoMiYOEjA)(NimStringDesc* filename, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = readFile_T9cm5LIRX2tKEH9aREBZ8A0w(filename);
	secureHash_EXfqX32pW1lnNt34KrEaBg(T1_, Result);
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(void, parseSecureHash_IRCyReeh9aLBu7uN9ck3kgww)(NimStringDesc* hash, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result) {
	nimZeroMem((void*)Result, sizeof(tyArray_YtcvxHNKV4YiecPE9ap1mcA));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				NI T5_;
				if (!(i_2 < ((NI) 20))) goto LA3;
				i = i_2;
				T4_ = (NimStringDesc*)0;
				T4_ = rawNewString(2);
appendChar(T4_, hash->data[(NI)(i * ((NI) 2))]);
appendChar(T4_, hash->data[(NI)((NI)(i * ((NI) 2)) + ((NI) 1))]);
				T5_ = (NI)0;
				T5_ = nsuParseHexInt(T4_);
				Result[(i)- 0] = ((NU8) (T5_));
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__DLLhcHrMJn0E9b4ztnZ56Zw)(tyArray_YtcvxHNKV4YiecPE9ap1mcA a, tyArray_YtcvxHNKV4YiecPE9ap1mcA b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = eqeq__Ql5vZ51gew5fqwplIYujaw(a, b);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_sha1Init000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_sha1DatInit000)(void) {
}

