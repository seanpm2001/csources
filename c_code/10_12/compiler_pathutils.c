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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg;
typedef struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg tyTuple_7q7q3E6Oj24ZNVJb9aonhAg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg {
NI i;
NI prev;
NIM_BOOL notFirst;
};
struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqImpl_2AQo8w49acXuwEaoXICroSA)(NimStringDesc* x, NimStringDesc* y);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, canon_UcZChFcGYBq6gg8dN0I3Hw)(NimStringDesc* x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, canon_F8hpv9bZxwaqrJK2hjZCnRg)(NimStringDesc* x, NimStringDesc** result, NI* state);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext_VQgvE5j4YW9bohdYjwhVShw)(tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg it, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ, next_1oYQCMEoqqYiYLTV7RQGrw)(tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg* it, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash_lZIIoXNfke9cC0E3D9bZTIGA)(NimStringDesc* x, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot_lZIIoXNfke9cC0E3D9bZTIGA_2)(NimStringDesc* x, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot_lZIIoXNfke9cC0E3D9bZTIGA_3)(NimStringDesc* x, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ bounds);
static N_INLINE(NIM_CHAR, X5BX5D__OfW9cXEAVaB9aahBBWfdc49cgpathutils)(NimStringDesc* s, NI i);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_TWXUwbnq0SWWvDLfr8LXYw)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple_7q7q3E6Oj24ZNVJb9aonhAg* Result);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, relativeTo_yu35VCQebWkPkayN5ttguQ)(NimStringDesc* full, NimStringDesc* base, NIM_CHAR sep);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringDesc* source, NimStringDesc* dest);
NIM_CONST tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ TM_r4WvUOkTx4ylahJtpRE9aTQ_2 = {((NI) 0),
((NI) -1)}
;
STRING_LITERAL(TM_r4WvUOkTx4ylahJtpRE9aTQ_3, "..", 2);

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext_VQgvE5j4YW9bohdYjwhVShw)(tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg it, NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (it.i < (x ? x->Sup.len : 0));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ, next_1oYQCMEoqqYiYLTV7RQGrw)(tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg* it, NimStringDesc* x) {
	tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ result;
	nimZeroMem((void*)(&result), sizeof(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ));
	(*it).prev = (*it).i;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((*it).notFirst);
		if (!(T3_)) goto LA4_;
		T3_ = (((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		(*it).i += ((NI) 1);
	}
	goto LA1_;
	LA5_: ;
	{
		{
			while (1) {
				NIM_BOOL T10_;
				T10_ = (NIM_BOOL)0;
				T10_ = ((*it).i < (x ? x->Sup.len : 0));
				if (!(T10_)) goto LA11_;
				T10_ = !((((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47))));
				LA11_: ;
				if (!T10_) goto LA9;
				(*it).i += ((NI) 1);
			} LA9: ;
		}
	}
	LA1_: ;
	{
		if (!((*it).prev < (*it).i)) goto LA14_;
		result.Field0 = (*it).prev;
		result.Field1 = (NI)((*it).i - ((NI) 1));
	}
	goto LA12_;
	LA14_: ;
	{
		NIM_BOOL T17_;
		T17_ = (NIM_BOOL)0;
		T17_ = hasNext_VQgvE5j4YW9bohdYjwhVShw((*it), x);
		if (!T17_) goto LA18_;
		result = next_1oYQCMEoqqYiYLTV7RQGrw(it, x);
	}
	goto LA12_;
	LA18_: ;
	LA12_: ;
	{
		while (1) {
			NIM_BOOL T22_;
			T22_ = (NIM_BOOL)0;
			T22_ = ((*it).i < (x ? x->Sup.len : 0));
			if (!(T22_)) goto LA23_;
			T22_ = (((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
			LA23_: ;
			if (!T22_) goto LA21;
			(*it).i += ((NI) 1);
		} LA21: ;
	}
	(*it).notFirst = NIM_TRUE;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash_lZIIoXNfke9cC0E3D9bZTIGA)(NimStringDesc* x, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	T1_ = (((NU8)(x->data[bounds.Field0])) == ((NU8)(47)) || ((NU8)(x->data[bounds.Field0])) == ((NU8)(47)));
	LA2_: ;
	result = T1_;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot_lZIIoXNfke9cC0E3D9bZTIGA_2)(NimStringDesc* x, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (bounds.Field1 == (NI)(bounds.Field0 + ((NI) 1)));
	if (!(T2_)) goto LA3_;
	T2_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	T1_ = ((NU8)(x->data[(NI)(bounds.Field0 + ((NI) 1))]) == (NU8)(46));
	LA4_: ;
	result = T1_;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot_lZIIoXNfke9cC0E3D9bZTIGA_3)(NimStringDesc* x, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	T1_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA2_: ;
	result = T1_;
	return result;
}

static N_INLINE(NIM_CHAR, X5BX5D__OfW9cXEAVaB9aahBBWfdc49cgpathutils)(NimStringDesc* s, NI i) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	result = s->data[(NI)((s ? s->Sup.len : 0) - i)];
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, canon_F8hpv9bZxwaqrJK2hjZCnRg)(NimStringDesc* x, NimStringDesc** result, NI* state) {
	{
		tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ b;
		tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg it;
		nimZeroMem((void*)(&b), sizeof(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ));
		nimZeroMem((void*)(&it), sizeof(tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg));
		{
			while (1) {
				NIM_BOOL T4_;
				T4_ = (NIM_BOOL)0;
				T4_ = hasNext_VQgvE5j4YW9bohdYjwhVShw(it, x);
				if (!T4_) goto LA3;
				b = next_1oYQCMEoqqYiYLTV7RQGrw((&it), x);
				{
					NIM_BOOL T7_;
					T7_ = (NIM_BOOL)0;
					T7_ = ((NI)((NU64)((*state)) >> (NU64)(((NI) 1))) == ((NI) 0));
					if (!(T7_)) goto LA8_;
					T7_ = isSlash_lZIIoXNfke9cC0E3D9bZTIGA(x, b);
					LA8_: ;
					if (!T7_) goto LA9_;
					unsureAsgnRef((void**) (&(*result)), addChar((*result), 47));
					(*state) = (NI)((*state) | ((NI) 1));
				}
				goto LA5_;
				LA9_: ;
				{
					NIM_BOOL T12_;
					NI d;
					T12_ = (NIM_BOOL)0;
					T12_ = ((NI)((*state) & ((NI) 1)) < ((*result) ? (*result)->Sup.len : 0));
					if (!(T12_)) goto LA13_;
					T12_ = isDotDot_lZIIoXNfke9cC0E3D9bZTIGA_2(x, b);
					LA13_: ;
					if (!T12_) goto LA14_;
					d = ((*result) ? (*result)->Sup.len : 0);
					{
						while (1) {
							NIM_BOOL T18_;
							T18_ = (NIM_BOOL)0;
							T18_ = ((NI)((*state) & ((NI) 1)) < d);
							if (!(T18_)) goto LA19_;
							T18_ = !(((NU8)((*result)->data[(NI)(d - ((NI) 1))]) == (NU8)(47)));
							LA19_: ;
							if (!T18_) goto LA17;
							d -= ((NI) 1);
						} LA17: ;
					}
					{
						if (!(((NI) 0) < d)) goto LA22_;
						unsureAsgnRef((void**) (&(*result)), setLengthStr((*result), ((NI) ((NI)(d - ((NI) 1))))));
					}
					LA22_: ;
				}
				goto LA5_;
				LA14_: ;
				{
					NIM_BOOL T25_;
					T25_ = (NIM_BOOL)0;
					T25_ = isDot_lZIIoXNfke9cC0E3D9bZTIGA_3(x, b);
					if (!T25_) goto LA26_;
				}
				goto LA5_;
				LA26_: ;
				{
					NimStringDesc* T38_;
					if (!(b.Field0 <= b.Field1)) goto LA29_;
					{
						NIM_BOOL T33_;
						NIM_CHAR T35_;
						T33_ = (NIM_BOOL)0;
						T33_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
						if (!(T33_)) goto LA34_;
						T35_ = (NIM_CHAR)0;
						T35_ = X5BX5D__OfW9cXEAVaB9aahBBWfdc49cgpathutils((*result), ((NI) 1));
						T33_ = !(((NU8)(T35_) == (NU8)(47)));
						LA34_: ;
						if (!T33_) goto LA36_;
						unsureAsgnRef((void**) (&(*result)), addChar((*result), 47));
					}
					LA36_: ;
					T38_ = (NimStringDesc*)0;
					T38_ = substr_TWXUwbnq0SWWvDLfr8LXYw(x, b.Field0, b.Field1);
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T38_ ? T38_->Sup.len : 0) + 0));
appendString((*result), T38_);
				}
				goto LA5_;
				LA29_: ;
				LA5_: ;
				(*state) += ((NI) 2);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, canon_UcZChFcGYBq6gg8dN0I3Hw)(NimStringDesc* x) {
	NimStringDesc* result;
	NI state;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((x ? x->Sup.len : 0))));
	state = ((NI) 0);
	canon_F8hpv9bZxwaqrJK2hjZCnRg(x, (&result), (&state));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqImpl_2AQo8w49acXuwEaoXICroSA)(NimStringDesc* x, NimStringDesc* y) {
	NIM_BOOL result;
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	NI T3_;
	result = (NIM_BOOL)0;
	T1_ = (NimStringDesc*)0;
	T1_ = canon_UcZChFcGYBq6gg8dN0I3Hw(x);
	T2_ = (NimStringDesc*)0;
	T2_ = canon_UcZChFcGYBq6gg8dN0I3Hw(y);
	T3_ = (NI)0;
	T3_ = nsuCmpIgnoreCase(T1_, T2_);
	result = (T3_ == ((NI) 0));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__yWApArM5bcJbpI9ag7ro39cA)(NimStringDesc* x, NimStringDesc* y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = eqImpl_2AQo8w49acXuwEaoXICroSA(x, y);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash__9aG7UGAgAhDRFZDUF9amNSfw)(NimStringDesc* base, NimStringDesc* f) {
	NimStringDesc* result;
	NI state;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((NI)((base ? base->Sup.len : 0) + (f ? f->Sup.len : 0)))));
	state = ((NI) 0);
	canon_F8hpv9bZxwaqrJK2hjZCnRg(base, (&result), (&state));
	canon_F8hpv9bZxwaqrJK2hjZCnRg(f, (&result), (&state));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash__UDWibycgMYHYlBHON5bClg)(NimStringDesc* base, NimStringDesc* f) {
	NimStringDesc* result;
	NI state;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((NI)((base ? base->Sup.len : 0) + (f ? f->Sup.len : 0)))));
	state = ((NI) 0);
	canon_F8hpv9bZxwaqrJK2hjZCnRg(base, (&result), (&state));
	canon_F8hpv9bZxwaqrJK2hjZCnRg(f, (&result), (&state));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, splitFile_R3dPKp0IXOiTZhAeiTEnrA)(NimStringDesc* x, tyTuple_7q7q3E6Oj24ZNVJb9aonhAg* Result) {
	tyTuple_7q7q3E6Oj24ZNVJb9aonhAg T1_;
	NimStringDesc* a;
	NimStringDesc* b;
	NimStringDesc* c;
	nimZeroMem((void*)(&T1_), sizeof(tyTuple_7q7q3E6Oj24ZNVJb9aonhAg));
	nossplitFile(x, (&T1_));
	a = (NimStringDesc*)0;
	a = T1_.Field0;
	b = (NimStringDesc*)0;
	b = T1_.Field1;
	c = (NimStringDesc*)0;
	c = T1_.Field2;
	unsureAsgnRef((void**) (&(*Result).Field0), copyString(a));
	unsureAsgnRef((void**) (&(*Result).Field1), copyString(b));
	unsureAsgnRef((void**) (&(*Result).Field2), copyString(c));
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, relativeTo_yu35VCQebWkPkayN5ttguQ)(NimStringDesc* full, NimStringDesc* base, NIM_CHAR sep) {
	NimStringDesc* result;
	tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg f;
	tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg b;
	tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ ff;
	tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ bb;
{	result = (NimStringDesc*)0;
	{
		if (!((full ? full->Sup.len : 0) == ((NI) 0))) goto LA3_;
		result = ((NimStringDesc*) NIM_NIL);
		goto BeforeRet_;
	}
	LA3_: ;
	nimZeroMem((void*)(&f), sizeof(tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg));
	nimZeroMem((void*)(&b), sizeof(tyObject_PathIter_Wgg01gIW13LJwKz0JmSKrg));
	ff = TM_r4WvUOkTx4ylahJtpRE9aTQ_2;
	bb = TM_r4WvUOkTx4ylahJtpRE9aTQ_2;
	result = rawNewString(((NI) ((full ? full->Sup.len : 0))));
	{
		while (1) {
			NIM_BOOL T7_;
			NI diff;
			NIM_BOOL same;
			T7_ = (NIM_BOOL)0;
			T7_ = hasNext_VQgvE5j4YW9bohdYjwhVShw(f, full);
			if (!(T7_)) goto LA8_;
			T7_ = hasNext_VQgvE5j4YW9bohdYjwhVShw(b, base);
			LA8_: ;
			if (!T7_) goto LA6;
			ff = next_1oYQCMEoqqYiYLTV7RQGrw((&f), full);
			bb = next_1oYQCMEoqqYiYLTV7RQGrw((&b), base);
			diff = (NI)(ff.Field1 - ff.Field0);
			{
				if (!!((diff == (NI)(bb.Field1 - bb.Field0)))) goto LA11_;
				goto LA5;
			}
			LA11_: ;
			same = NIM_TRUE;
			{
				NI i;
				NI res;
				i = (NI)0;
				res = ((NI) 0);
				{
					while (1) {
						if (!(res <= diff)) goto LA15;
						i = res;
						{
							NIM_CHAR T18_;
							NIM_CHAR T19_;
							T18_ = (NIM_CHAR)0;
							T18_ = nsuToLowerAsciiChar(full->data[(NI)(i + ff.Field0)]);
							T19_ = (NIM_CHAR)0;
							T19_ = nsuToLowerAsciiChar(base->data[(NI)(i + bb.Field0)]);
							if (!!(((NU8)(T18_) == (NU8)(T19_)))) goto LA20_;
							same = NIM_FALSE;
							goto LA13;
						}
						LA20_: ;
						res += ((NI) 1);
					} LA15: ;
				}
			} LA13: ;
			{
				if (!!(same)) goto LA24_;
				goto LA5;
			}
			LA24_: ;
			ff = TM_r4WvUOkTx4ylahJtpRE9aTQ_2;
			bb = TM_r4WvUOkTx4ylahJtpRE9aTQ_2;
		} LA6: ;
	} LA5: ;
	{
		while (1) {
			{
				if (!(bb.Field0 <= bb.Field1)) goto LA30_;
				{
					NIM_BOOL T34_;
					NIM_CHAR T36_;
					T34_ = (NIM_BOOL)0;
					T34_ = (((NI) 0) < (result ? result->Sup.len : 0));
					if (!(T34_)) goto LA35_;
					T36_ = (NIM_CHAR)0;
					T36_ = X5BX5D__OfW9cXEAVaB9aahBBWfdc49cgpathutils(result, ((NI) 1));
					T34_ = !(((NU8)(T36_) == (NU8)(sep)));
					LA35_: ;
					if (!T34_) goto LA37_;
					result = addChar(result, sep);
				}
				LA37_: ;
				result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_r4WvUOkTx4ylahJtpRE9aTQ_3));
			}
			LA30_: ;
			{
				NIM_BOOL T41_;
				T41_ = (NIM_BOOL)0;
				T41_ = hasNext_VQgvE5j4YW9bohdYjwhVShw(b, base);
				if (!!(T41_)) goto LA42_;
				goto LA26;
			}
			LA42_: ;
			bb = next_1oYQCMEoqqYiYLTV7RQGrw((&b), base);
		}
	} LA26: ;
	{
		while (1) {
			{
				if (!(ff.Field0 <= ff.Field1)) goto LA48_;
				{
					NIM_BOOL T52_;
					NIM_CHAR T54_;
					T52_ = (NIM_BOOL)0;
					T52_ = (((NI) 0) < (result ? result->Sup.len : 0));
					if (!(T52_)) goto LA53_;
					T54_ = (NIM_CHAR)0;
					T54_ = X5BX5D__OfW9cXEAVaB9aahBBWfdc49cgpathutils(result, ((NI) 1));
					T52_ = !(((NU8)(T54_) == (NU8)(sep)));
					LA53_: ;
					if (!T52_) goto LA55_;
					result = addChar(result, sep);
				}
				LA55_: ;
				{
					NI i_2;
					NI colontmp_;
					NI res_2;
					i_2 = (NI)0;
					colontmp_ = (NI)0;
					colontmp_ = (NI)(ff.Field1 - ff.Field0);
					res_2 = ((NI) 0);
					{
						while (1) {
							if (!(res_2 <= colontmp_)) goto LA59;
							i_2 = res_2;
							result = addChar(result, full->data[(NI)(i_2 + ff.Field0)]);
							res_2 += ((NI) 1);
						} LA59: ;
					}
				}
			}
			LA48_: ;
			{
				NIM_BOOL T62_;
				T62_ = (NIM_BOOL)0;
				T62_ = hasNext_VQgvE5j4YW9bohdYjwhVShw(f, full);
				if (!!(T62_)) goto LA63_;
				goto LA44;
			}
			LA63_: ;
			ff = next_1oYQCMEoqqYiYLTV7RQGrw((&f), full);
		}
	} LA44: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, relativeTo_urvtVE5whL4PrK7JXfAt9aw)(NimStringDesc* fullPath, NimStringDesc* baseFilename, NIM_CHAR sep) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = relativeTo_yu35VCQebWkPkayN5ttguQ(fullPath, baseFilename, sep);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, copyFile_uyojvRJsClLFjZL5zY9aCUA)(NimStringDesc* source, NimStringDesc* dest) {
	noscopyFile(source, dest);
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__YuXKkwiYWblhQcuytKZBKQ)(NimStringDesc* x, NimStringDesc* y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = eqImpl_2AQo8w49acXuwEaoXICroSA(x, y);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_pathutilsInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_pathutilsDatInit000)(void) {
}

