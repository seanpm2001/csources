/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_WwUFq9cJ2xKRlsAWVEHyPRg tySequence_WwUFq9cJ2xKRlsAWVEHyPRg;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* tyArray_USLYl0Lpkimm4FABiJ3ldA[4096];
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
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA {
  RootObj Sup;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* left;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* right;
NI L;
NimStringDesc* data;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
typedef NIM_CHAR tyArray_9bKy7UA2LOi2vzOViufaW1Q[1024];
struct tySequence_WwUFq9cJ2xKRlsAWVEHyPRg {
  TGenericSeq Sup;
  tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_4hi0XQqK9aLiPuWT9acsXm9aQ)(void* p, NI op);
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_3)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, len_9bnJ6v2DTn9bxH3beTpErsUg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* a);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, pop_Ux3gtntcVjVnGxXx3h8vbwropes)(tySequence_WwUFq9cJ2xKRlsAWVEHyPRg** s);
N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, insertInCache_yShmEg9cffWxI7s5XzEKBow_2)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, newRope_xb1movfq9bakz6FEoSRKmVA)(NimStringDesc* data);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, amp__Z7W1o5nPSc3ExfO5f7j1Gg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, amp__mFDAEkd1kysB0V9aBd20A9aA)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* a, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* b);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, rope_yShmEg9cffWxI7s5XzEKBow)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, add_yG4AKzsBRS1W4MANDlXQeg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(void, add_iMTw0CDaruwETLGb9bhpBLg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** a, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* b);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_TWXUwbnq0SWWvDLfr8LXYw)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, percent__9bvKdnhoYI2ta9agQNm3orMA)(NimStringDesc* frmt, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ_2)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f, NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalsFile_An6lon5glmTeuYTtUgKLnw)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r, FILE* f);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer_nZ0pNe9cd9cXtoayexCiaDtA_2)(FILE* f, void* buffer, NI len);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, writeRope_2BNJtLOglihYBtaE4G9cdcw)(FILE* f, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalsFile_EnPyko9cdia3BJbBC9ao9a60A)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r, NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, writeRope_xVzCd39bh3ndCAWl6XETYRg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* head, NimStringDesc* filename);
tyArray_USLYl0Lpkimm4FABiJ3ldA cache_WGMp5Wo1NlgbAMOysPIfmQ;
extern TNimType NTI_ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI_OFzf0kSiPTcNreUIeJgWVA_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_;
TNimType NTI_USLYl0Lpkimm4FABiJ3ldA_;
NI gCacheTries_5GfZTThHPBfB9bjRZdFluBw;
NI gCacheMisses_fLRm9am8S0daYBVNK6JKyBg;
NI gCacheIntTries_opyfsNv023Md1P05mqsDew;
extern TNimType NTI_WwUFq9cJ2xKRlsAWVEHyPRg_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_Vw9cfUOQOae9b9bzZBlucMZQg_4, "$", 1);
STRING_LITERAL(TM_Vw9cfUOQOae9b9bzZBlucMZQg_5, "/Users/andreasrumpf-mac/projects/nim/compiler/ropes.nim(234, 20"
") `false` invalid format string: ", 96);
STRING_LITERAL(TM_Vw9cfUOQOae9b9bzZBlucMZQg_6, "/Users/andreasrumpf-mac/projects/nim/compiler/ropes.nim(246, 20"
") `false` invalid format string: ", 96);
STRING_LITERAL(TM_Vw9cfUOQOae9b9bzZBlucMZQg_7, "/Users/andreasrumpf-mac/projects/nim/compiler/ropes.nim(249, 20"
") `false` invalid format string: ", 96);
STRING_LITERAL(TM_Vw9cfUOQOae9b9bzZBlucMZQg_8, "\012", 1);
STRING_LITERAL(TM_Vw9cfUOQOae9b9bzZBlucMZQg_9, "/Users/andreasrumpf-mac/projects/nim/compiler/ropes.nim(259, 18"
") `false` invalid format string: ", 96);
static N_NIMCALL(void, Marker_tyRef_4hi0XQqK9aLiPuWT9acsXm9aQ)(void* p, NI op) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* a;
	a = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)p;
	nimGCvisit((void*)(*a).left, op);
	nimGCvisit((void*)(*a).right, op);
	nimGCvisit((void*)(*a).data, op);
}
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_3)(void) {
	NI T1_;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 4096; T1_++) {
	nimGCvisit((void*)cache_WGMp5Wo1NlgbAMOysPIfmQ[T1_], 0);
	}
}

N_LIB_PRIVATE N_NIMCALL(NI, len_9bnJ6v2DTn9bxH3beTpErsUg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* a) {
	NI result;
	result = (NI)0;
	{
		if (!(a == NIM_NIL)) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((*a).L > 0? ((*a).L) : -((*a).L));
	}
	LA1_: ;
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU32)((*c_2).refcount) < (NU32)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, pop_Ux3gtntcVjVnGxXx3h8vbwropes)(tySequence_WwUFq9cJ2xKRlsAWVEHyPRg** s) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	NI L;
	NI T1_;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	L = (NI)(T1_ - ((NI) 1));
	result = (*s)->data[L];
	unsureAsgnRef((void**) (&(*s)), (tySequence_WwUFq9cJ2xKRlsAWVEHyPRg*) setLengthSeqV2(&((*s))->Sup, (&NTI_WwUFq9cJ2xKRlsAWVEHyPRg_), ((NI) (L))));
	return result;
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

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__4KNdcWAONkpTKQgUR8XiZQ)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r) {
	NimStringDesc* result;
	NI T1_;
	result = (NimStringDesc*)0;
	T1_ = (NI)0;
	T1_ = len_9bnJ6v2DTn9bxH3beTpErsUg(r);
	result = mnewString(((NI) (T1_)));
	result = setLengthStr(result, ((NI) 0));
	{
		NimStringDesc* s;
		s = (NimStringDesc*)0;
		{
			tySequence_WwUFq9cJ2xKRlsAWVEHyPRg* stack;
			if (!!((r == NIM_NIL))) goto LA5_;
			stack = (tySequence_WwUFq9cJ2xKRlsAWVEHyPRg*) newSeq((&NTI_WwUFq9cJ2xKRlsAWVEHyPRg_), 1);
			asgnRefNoCycle((void**) (&stack->data[0]), r);
			{
				while (1) {
					NI T9_;
					tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* it;
					T9_ = (stack ? stack->Sup.len : 0);
					if (!(((NI) 0) < T9_)) goto LA8;
					it = pop_Ux3gtntcVjVnGxXx3h8vbwropes((&stack));
					{
						while (1) {
							NI T12_;
							if (!!(((*it).left == NIM_NIL))) goto LA11;
							stack = (tySequence_WwUFq9cJ2xKRlsAWVEHyPRg*) incrSeqV3(&(stack)->Sup, (&NTI_WwUFq9cJ2xKRlsAWVEHyPRg_));
							T12_ = stack->Sup.len++;
							asgnRefNoCycle((void**) (&stack->data[T12_]), (*it).right);
							it = (*it).left;
						} LA11: ;
					}
					s = (*it).data;
					result = resizeString(result, (s ? s->Sup.len : 0) + 0);
appendString(result, s);
				} LA8: ;
			}
		}
		LA5_: ;
	}
	return result;
}

static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem_DCrUjdaMvFDHaR1hs7sQGwropes(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, newRope_xb1movfq9bakz6FEoSRKmVA)(NimStringDesc* data) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	NimStringDesc* T1_;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*) newObj((&NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_), sizeof(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA));
	(*result).Sup.m_type = (&NTI_OFzf0kSiPTcNreUIeJgWVA_);
	(*result).L = ((NI32)-((data ? data->Sup.len : 0)));
	T1_ = (NimStringDesc*)0;
	T1_ = (*result).data; (*result).data = copyStringRC1(data);
	if (T1_) nimGCunrefNoCycle(T1_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, insertInCache_yShmEg9cffWxI7s5XzEKBow_2)(NimStringDesc* s) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	NI h;
	NI T1_;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	gCacheTries_5GfZTThHPBfB9bjRZdFluBw += ((NI) 1);
	T1_ = (NI)0;
	T1_ = hash_uBstFm5SYVQeOL3j9c9bc58A(s);
	h = (NI)(T1_ & ((NI) 4095));
	result = cache_WGMp5Wo1NlgbAMOysPIfmQ[(h)- 0];
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = (result == 0);
		if (T4_) goto LA5_;
		T4_ = !(eqStrings((*result).data, s));
		LA5_: ;
		if (!T4_) goto LA6_;
		gCacheMisses_fLRm9am8S0daYBVNK6JKyBg += ((NI) 1);
		result = newRope_xb1movfq9bakz6FEoSRKmVA(s);
		asgnRefNoCycle((void**) (&cache_WGMp5Wo1NlgbAMOysPIfmQ[(h)- 0]), result);
	}
	LA6_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, rope_yShmEg9cffWxI7s5XzEKBow)(NimStringDesc* s) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	{
		if (!((s ? s->Sup.len : 0) == ((NI) 0))) goto LA3_;
		result = NIM_NIL;
	}
	goto LA1_;
	LA3_: ;
	{
		result = insertInCache_yShmEg9cffWxI7s5XzEKBow_2(s);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, amp__mFDAEkd1kysB0V9aBd20A9aA)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* a, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* b) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	{
		if (!(a == NIM_NIL)) goto LA3_;
		result = b;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(b == NIM_NIL)) goto LA6_;
		result = a;
	}
	goto LA1_;
	LA6_: ;
	{
		result = newRope_xb1movfq9bakz6FEoSRKmVA(((NimStringDesc*) NIM_NIL));
		(*result).L = (NI)(((*a).L > 0? ((*a).L) : -((*a).L)) + ((*b).L > 0? ((*b).L) : -((*b).L)));
		asgnRefNoCycle((void**) (&(*result).left), a);
		asgnRefNoCycle((void**) (&(*result).right), b);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, amp__Z7W1o5nPSc3ExfO5f7j1Gg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* a, NimStringDesc* b) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* T1_;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	T1_ = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	T1_ = rope_yShmEg9cffWxI7s5XzEKBow(b);
	result = amp__mFDAEkd1kysB0V9aBd20A9aA(a, T1_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, add_yG4AKzsBRS1W4MANDlXQeg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** a, NimStringDesc* b) {
	unsureAsgnRef((void**) (&(*a)), amp__Z7W1o5nPSc3ExfO5f7j1Gg((*a), b));
}

N_LIB_PRIVATE N_NIMCALL(void, add_iMTw0CDaruwETLGb9bhpBLg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** a, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* b) {
	unsureAsgnRef((void**) (&(*a)), amp__mFDAEkd1kysB0V9aBd20A9aA((*a), b));
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, amp__4cYKitaHx6RQ9azRtQsZp6w)(NimStringDesc* a, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* b) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* T1_;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	T1_ = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	T1_ = rope_yShmEg9cffWxI7s5XzEKBow(a);
	result = amp__mFDAEkd1kysB0V9aBd20A9aA(T1_, b);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, percent__9bvKdnhoYI2ta9agQNm3orMA)(NimStringDesc* frmt, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** args, NI argsLen_0) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	NI i;
	NI length;
	NI num;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	i = ((NI) 0);
	length = (frmt ? frmt->Sup.len : 0);
	result = NIM_NIL;
	num = ((NI) 0);
	{
		while (1) {
			NI start;
			if (!(i < length)) goto LA2;
			{
				if (!((NU8)(frmt->data[i]) == (NU8)(36))) goto LA5_;
				i += ((NI) 1);
				switch (((NU8)(frmt->data[i]))) {
				case 36:
				{
					add_yG4AKzsBRS1W4MANDlXQeg(&result, ((NimStringDesc*) &TM_Vw9cfUOQOae9b9bzZBlucMZQg_4));
					i += ((NI) 1);
				}
				break;
				case 35:
				{
					i += ((NI) 1);
					add_iMTw0CDaruwETLGb9bhpBLg(&result, args[num]);
					num += ((NI) 1);
				}
				break;
				case 48 ... 57:
				{
					NI j;
					j = ((NI) 0);
					{
						while (1) {
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NU8)(frmt->data[i]))) - ((NI) 48));
							i += ((NI) 1);
							{
								NIM_BOOL T14_;
								T14_ = (NIM_BOOL)0;
								T14_ = ((frmt ? frmt->Sup.len : 0) <= i);
								if (T14_) goto LA15_;
								T14_ = !((((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57))));
								LA15_: ;
								if (!T14_) goto LA16_;
								goto LA10;
							}
							LA16_: ;
						}
					} LA10: ;
					num = j;
					{
						if (!((NI)((argsLen_0-1) + ((NI) 1)) < j)) goto LA20_;
						{
							NimStringDesc* T26_;
							if (!NIM_TRUE) goto LA24_;
							T26_ = (NimStringDesc*)0;
							T26_ = rawNewString((frmt ? frmt->Sup.len : 0) + 96);
appendString(T26_, ((NimStringDesc*) &TM_Vw9cfUOQOae9b9bzZBlucMZQg_5));
appendString(T26_, frmt);
							failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(T26_);
						}
						LA24_: ;
					}
					goto LA18_;
					LA20_: ;
					{
						add_iMTw0CDaruwETLGb9bhpBLg(&result, args[(NI)(j - ((NI) 1))]);
					}
					LA18_: ;
				}
				break;
				case 123:
				{
					NI j_2;
					i += ((NI) 1);
					j_2 = ((NI) 0);
					{
						while (1) {
							if (!(((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57)))) goto LA30;
							j_2 = (NI)((NI)((NI)(j_2 * ((NI) 10)) + ((NU8)(frmt->data[i]))) - ((NI) 48));
							i += ((NI) 1);
						} LA30: ;
					}
					num = j_2;
					{
						if (!((NU8)(frmt->data[i]) == (NU8)(125))) goto LA33_;
						i += ((NI) 1);
					}
					goto LA31_;
					LA33_: ;
					{
						{
							NimStringDesc* T40_;
							if (!NIM_TRUE) goto LA38_;
							T40_ = (NimStringDesc*)0;
							T40_ = rawNewString((frmt ? frmt->Sup.len : 0) + 96);
appendString(T40_, ((NimStringDesc*) &TM_Vw9cfUOQOae9b9bzZBlucMZQg_6));
appendString(T40_, frmt);
							failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(T40_);
						}
						LA38_: ;
					}
					LA31_: ;
					{
						if (!((NI)((argsLen_0-1) + ((NI) 1)) < j_2)) goto LA43_;
						{
							NimStringDesc* T49_;
							if (!NIM_TRUE) goto LA47_;
							T49_ = (NimStringDesc*)0;
							T49_ = rawNewString((frmt ? frmt->Sup.len : 0) + 96);
appendString(T49_, ((NimStringDesc*) &TM_Vw9cfUOQOae9b9bzZBlucMZQg_7));
appendString(T49_, frmt);
							failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(T49_);
						}
						LA47_: ;
					}
					goto LA41_;
					LA43_: ;
					{
						add_iMTw0CDaruwETLGb9bhpBLg(&result, args[(NI)(j_2 - ((NI) 1))]);
					}
					LA41_: ;
				}
				break;
				case 110:
				{
					add_yG4AKzsBRS1W4MANDlXQeg(&result, ((NimStringDesc*) &TM_Vw9cfUOQOae9b9bzZBlucMZQg_8));
					i += ((NI) 1);
				}
				break;
				case 78:
				{
					add_yG4AKzsBRS1W4MANDlXQeg(&result, ((NimStringDesc*) &TM_Vw9cfUOQOae9b9bzZBlucMZQg_8));
					i += ((NI) 1);
				}
				break;
				default:
				{
					{
						NimStringDesc* T58_;
						if (!NIM_TRUE) goto LA56_;
						T58_ = (NimStringDesc*)0;
						T58_ = rawNewString((frmt ? frmt->Sup.len : 0) + 96);
appendString(T58_, ((NimStringDesc*) &TM_Vw9cfUOQOae9b9bzZBlucMZQg_9));
appendString(T58_, frmt);
						failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(T58_);
					}
					LA56_: ;
				}
				break;
				}
			}
			LA5_: ;
			start = i;
			{
				while (1) {
					if (!(i < length)) goto LA60;
					{
						if (!!(((NU8)(frmt->data[i]) == (NU8)(36)))) goto LA63_;
						i += ((NI) 1);
					}
					goto LA61_;
					LA63_: ;
					{
						goto LA59;
					}
					LA61_: ;
				} LA60: ;
			} LA59: ;
			{
				NimStringDesc* T70_;
				if (!(start <= (NI)(i - ((NI) 1)))) goto LA68_;
				T70_ = (NimStringDesc*)0;
				T70_ = substr_TWXUwbnq0SWWvDLfr8LXYw(frmt, start, (NI)(i - ((NI) 1)));
				add_yG4AKzsBRS1W4MANDlXQeg(&result, T70_);
			}
			LA68_: ;
		} LA2: ;
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*, rope_KOisMGxcPhz6CcSmxgwEQQ)(NI64 i) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* result;
	NimStringDesc* T1_;
	result = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	gCacheIntTries_opyfsNv023Md1P05mqsDew += ((NI) 1);
	T1_ = (NimStringDesc*)0;
	T1_ = nimInt64ToStr(i);
	result = rope_yShmEg9cffWxI7s5XzEKBow(T1_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, addf_ocEHZ9cujtqicXvDuJUm5pg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** c, NimStringDesc* frmt, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** args, NI argsLen_0) {
	tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* T1_;
	T1_ = (tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*)0;
	T1_ = percent__9bvKdnhoYI2ta9agQNm3orMA(frmt, args, argsLen_0);
	add_iMTw0CDaruwETLGb9bhpBLg(c, T1_);
}

N_LIB_PRIVATE N_NIMCALL(void, writeRope_2BNJtLOglihYBtaE4G9cdcw)(FILE* f, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r) {
	{
		NimStringDesc* s;
		s = (NimStringDesc*)0;
		{
			tySequence_WwUFq9cJ2xKRlsAWVEHyPRg* stack;
			if (!!((r == NIM_NIL))) goto LA4_;
			stack = (tySequence_WwUFq9cJ2xKRlsAWVEHyPRg*) newSeq((&NTI_WwUFq9cJ2xKRlsAWVEHyPRg_), 1);
			asgnRefNoCycle((void**) (&stack->data[0]), r);
			{
				while (1) {
					NI T8_;
					tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* it;
					T8_ = (stack ? stack->Sup.len : 0);
					if (!(((NI) 0) < T8_)) goto LA7;
					it = pop_Ux3gtntcVjVnGxXx3h8vbwropes((&stack));
					{
						while (1) {
							NI T11_;
							if (!!(((*it).left == NIM_NIL))) goto LA10;
							stack = (tySequence_WwUFq9cJ2xKRlsAWVEHyPRg*) incrSeqV3(&(stack)->Sup, (&NTI_WwUFq9cJ2xKRlsAWVEHyPRg_));
							T11_ = stack->Sup.len++;
							asgnRefNoCycle((void**) (&stack->data[T11_]), (*it).right);
							it = (*it).left;
						} LA10: ;
					}
					s = (*it).data;
					write_c4mGyJBvK73pdM22jiweKQ_2(f, s);
				} LA7: ;
			}
		}
		LA4_: ;
	}
}

N_LIB_PRIVATE N_NIMCALL(void, prepend_iMTw0CDaruwETLGb9bhpBLg_2)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA** a, tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* b) {
	unsureAsgnRef((void**) (&(*a)), amp__mFDAEkd1kysB0V9aBd20A9aA(b, (*a)));
}

static N_INLINE(void, nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_2Mfumf6CnyNlShDWdIgobwsystem(p, ((int) 0), size);
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

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalsFile_An6lon5glmTeuYTtUgKLnw)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r, FILE* f) {
	NIM_BOOL result;
	tyArray_9bKy7UA2LOi2vzOViufaW1Q buf;
	NI bpos;
	NI blen;
	NI btotal;
	NI rtotal;
	NIM_BOOL T27_;
	NI T28_;
{	result = (NIM_BOOL)0;
	nimZeroMem((void*)buf, sizeof(tyArray_9bKy7UA2LOi2vzOViufaW1Q));
	bpos = ((NI) 1024);
	blen = ((NI) 1024);
	btotal = ((NI) 0);
	rtotal = ((NI) 0);
	{
		NimStringDesc* s;
		s = (NimStringDesc*)0;
		{
			tySequence_WwUFq9cJ2xKRlsAWVEHyPRg* stack;
			if (!!((r == NIM_NIL))) goto LA4_;
			stack = (tySequence_WwUFq9cJ2xKRlsAWVEHyPRg*) newSeq((&NTI_WwUFq9cJ2xKRlsAWVEHyPRg_), 1);
			asgnRefNoCycle((void**) (&stack->data[0]), r);
			{
				while (1) {
					NI T8_;
					tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* it;
					NI spos;
					NI slen;
					T8_ = (stack ? stack->Sup.len : 0);
					if (!(((NI) 0) < T8_)) goto LA7;
					it = pop_Ux3gtntcVjVnGxXx3h8vbwropes((&stack));
					{
						while (1) {
							NI T11_;
							if (!!(((*it).left == NIM_NIL))) goto LA10;
							stack = (tySequence_WwUFq9cJ2xKRlsAWVEHyPRg*) incrSeqV3(&(stack)->Sup, (&NTI_WwUFq9cJ2xKRlsAWVEHyPRg_));
							T11_ = stack->Sup.len++;
							asgnRefNoCycle((void**) (&stack->data[T11_]), (*it).right);
							it = (*it).left;
						} LA10: ;
					}
					s = (*it).data;
					spos = ((NI) 0);
					slen = (s ? s->Sup.len : 0);
					rtotal += slen;
					{
						while (1) {
							NI n;
							if (!(spos < slen)) goto LA13;
							{
								if (!(bpos == blen)) goto LA16_;
								bpos = ((NI) 0);
								blen = readBuffer_nZ0pNe9cd9cXtoayexCiaDtA_2(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1024));
								btotal += blen;
								{
									if (!(blen == ((NI) 0))) goto LA20_;
									result = NIM_FALSE;
									goto BeforeRet_;
								}
								LA20_: ;
							}
							LA16_: ;
							n = (((NI)(blen - bpos) <= (NI)(slen - spos)) ? (NI)(blen - bpos) : (NI)(slen - spos));
							{
								NIM_BOOL T24_;
								T24_ = (NIM_BOOL)0;
								T24_ = equalMem_DCrUjdaMvFDHaR1hs7sQGwropes(((void*) ((&buf[(bpos)- 0]))), ((void*) ((NI)(((NI) (nimToCStringConv(s))) + spos))), ((NI) (n)));
								if (!!(T24_)) goto LA25_;
								result = NIM_FALSE;
								goto BeforeRet_;
							}
							LA25_: ;
							spos += n;
							bpos += n;
						} LA13: ;
					}
				} LA7: ;
			}
		}
		LA4_: ;
	}
	T27_ = (NIM_BOOL)0;
	T28_ = (NI)0;
	T28_ = readBuffer_nZ0pNe9cd9cXtoayexCiaDtA_2(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1));
	T27_ = (T28_ == ((NI) 0));
	if (!(T27_)) goto LA29_;
	T27_ = (btotal == rtotal);
	LA29_: ;
	result = T27_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalsFile_EnPyko9cdia3BJbBC9ao9a60A)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r, NimStringDesc* filename) {
	NIM_BOOL result;
	FILE* f;
	result = (NIM_BOOL)0;
	f = (FILE*)0;
	result = open_sEp0GH2306oGo9bqBpj5oTQ(&f, filename, ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) -1));
	{
		if (!result) goto LA3_;
		result = equalsFile_An6lon5glmTeuYTtUgKLnw(r, f);
		close_BWnr8V7RERYno9bIdPmw8Hw_3(f);
	}
	LA3_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, writeRope_xVzCd39bh3ndCAWl6XETYRg)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* head, NimStringDesc* filename) {
	NIM_BOOL result;
	FILE* f;
	result = (NIM_BOOL)0;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open_sEp0GH2306oGo9bqBpj5oTQ(&f, filename, ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 1), ((NI) -1));
		if (!T3_) goto LA4_;
		{
			if (!!((head == NIM_NIL))) goto LA8_;
			writeRope_2BNJtLOglihYBtaE4G9cdcw(f, head);
		}
		LA8_: ;
		close_BWnr8V7RERYno9bIdPmw8Hw_3(f);
		result = NIM_TRUE;
	}
	goto LA1_;
	LA4_: ;
	{
		result = NIM_FALSE;
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, writeRopeIfNotEqual_EnPyko9cdia3BJbBC9ao9a60A_2)(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r, NimStringDesc* filename) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = equalsFile_EnPyko9cdia3BJbBC9ao9a60A(r, filename);
		if (!!(T3_)) goto LA4_;
		result = writeRope_xVzCd39bh3ndCAWl6XETYRg(r, filename);
	}
	goto LA1_;
	LA4_: ;
	{
		result = NIM_FALSE;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_ropesInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
nimRegisterGlobalMarker(TM_Vw9cfUOQOae9b9bzZBlucMZQg_3);
	gCacheTries_5GfZTThHPBfB9bjRZdFluBw = ((NI) 0);
	gCacheMisses_fLRm9am8S0daYBVNK6JKyBg = ((NI) 0);
	gCacheIntTries_opyfsNv023Md1P05mqsDew = ((NI) 0);
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_ropesDatInit000)(void) {
static TNimNode* TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[4];
static TNimNode TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[5];
NTI_OFzf0kSiPTcNreUIeJgWVA_.size = sizeof(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA);
NTI_OFzf0kSiPTcNreUIeJgWVA_.kind = 17;
NTI_OFzf0kSiPTcNreUIeJgWVA_.base = (&NTI_ytyiCJqK439aF9cIibuRVpAg_);
NTI_OFzf0kSiPTcNreUIeJgWVA_.flags = 2;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[0] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1];
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1].offset = offsetof(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA, left);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1].typ = (&NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1].name = "left";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[1] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2];
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2].offset = offsetof(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA, right);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2].typ = (&NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2].name = "right";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[2] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[3];
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[3].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[3].offset = offsetof(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA, L);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[3].name = "L";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[3] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4];
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4].offset = offsetof(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA, data);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4].name = "data";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[0].len = 4; TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[0].kind = 2; TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[0].sons = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[0];
NTI_OFzf0kSiPTcNreUIeJgWVA_.node = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[0];
NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_.size = sizeof(tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA*);
NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_.kind = 22;
NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_.base = (&NTI_OFzf0kSiPTcNreUIeJgWVA_);
NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_.flags = 2;
NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_.marker = Marker_tyRef_4hi0XQqK9aLiPuWT9acsXm9aQ;
NTI_USLYl0Lpkimm4FABiJ3ldA_.size = sizeof(tyArray_USLYl0Lpkimm4FABiJ3ldA);
NTI_USLYl0Lpkimm4FABiJ3ldA_.kind = 16;
NTI_USLYl0Lpkimm4FABiJ3ldA_.base = (&NTI_4hi0XQqK9aLiPuWT9acsXm9aQ_);
NTI_USLYl0Lpkimm4FABiJ3ldA_.flags = 2;
}

