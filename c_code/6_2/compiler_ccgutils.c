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
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyTuple_UpiOGlu5Ux6DLM73wSrdpg tyTuple_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw tyObject_Target_9abOl5DLX8suLujOaHSvGzw;
typedef struct tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A;
typedef struct tySequence_PJMRIt5QxCm6bRaVyQ5CGA tySequence_PJMRIt5QxCm6bRaVyQ5CGA;
typedef struct tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA;
typedef struct tySequence_7lEisrXlQEzwtUKW5pzRCw tySequence_7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence_Zi9cGbCWofbtABoHJ5RbLNQ tySequence_Zi9cGbCWofbtABoHJ5RbLNQ;
typedef struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence_pK3qSsBZwdXd6qyUMkd5Jw tySequence_pK3qSsBZwdXd6qyUMkd5Jw;
typedef struct tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ;
typedef struct tyTuple_xYhUhS7X82rKTqbT9bRfCnw tyTuple_xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU16 tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw;
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
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
typedef NU8 tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg;
struct tyTuple_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
tyEnum_TEndian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef tyTuple_UpiOGlu5Ux6DLM73wSrdpg tyArray_2EeRc2Lr9cCM9aL82QsBOFXA[22];
typedef NU8 tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ;
struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw {
tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU;
tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag hostCPU;
tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ targetOS;
tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ hostOS;
NI intSize;
NI floatSize;
NI ptrSize;
NimStringDesc* tnl;
};
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU64 tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tySet_tyEnum_TErrorOutput_fBf8Teueoz9aAkO5cXaxrpA;
struct tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA {
tySequence_7lEisrXlQEzwtUKW5pzRCw* data;
NI counter;
};
struct tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A {
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q trackPos;
NIM_BOOL trackPosAttached;
tySet_tyEnum_TErrorOutput_fBf8Teueoz9aAkO5cXaxrpA errorOutputs;
tySequence_PJMRIt5QxCm6bRaVyQ5CGA* msgContext;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q lastError;
tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA filenameToIndexTbl;
tySequence_Zi9cGbCWofbtABoHJ5RbLNQ* fileInfos;
NI32 systemFileIdx;
};
typedef NU8 tyEnum_TCommands_VH3ghgQVwLSg3krOAoXigw;
typedef NU8 tyEnum_TGCMode_tkz389aDYNd8ykeZszCuBSw;
typedef NU8 tyEnum_SymbolFilesOption_gBES9bqm1ru9ape8SeMRAFgQ;
struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU16 tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSystemCC_1eWBJUonHMOnlBwsOvpFmA;
typedef NU64 tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ* result, void* ClE_0);
void* ClE_0;
} tyProc_QYEVXrYc9beQ379crS3rzqRA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* output, void* ClE_0);
void* ClE_0;
} tyProc_Q1W5D85O9cNu3iq9cZ9alS9aWA;
typedef NU8 tyEnum_Severity_x5BWBPGAbIH9clm5pmNp5DA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* msg, tyEnum_Severity_x5BWBPGAbIH9clm5pmNp5DA severity, void* ClE_0);
void* ClE_0;
} tyProc_22mgIiTBBoqNe1T0FSw9ahQ;
struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw {
tyObject_Target_9abOl5DLX8suLujOaHSvGzw target;
NI linesCompiled;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw globalOptions;
tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A m;
NI evalTemplateCounter;
NI evalMacroCounter;
NI8 exitcode;
tyEnum_TCommands_VH3ghgQVwLSg3krOAoXigw cmd;
tyEnum_TGCMode_tkz389aDYNd8ykeZszCuBSw selectedGC;
NI verbosity;
NI numberOfProcessors;
NimStringDesc* evalExpr;
NF lastCmdTime;
tyEnum_SymbolFilesOption_gBES9bqm1ru9ape8SeMRAFgQ symbolFiles;
tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg cppDefines;
NimStringDesc* headerFile;
tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ features;
NimStringDesc* arguments;
NIM_BOOL helpWritten;
tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ ideCmd;
NIM_BOOL oldNewlines;
tyEnum_TSystemCC_1eWBJUonHMOnlBwsOvpFmA cCompiler;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg enableNotes;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg disableNotes;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg foreignPackageNotes;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg notes;
tySet_tyEnum_TMsgKind_ZQWti4neSCb9bXB2tK1JcKg mainPackageNotes;
NI mainPackageId;
NI errorCounter;
NI hintCounter;
NI warnCounter;
NI errorMax;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* configVars;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* symbols;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* packageCache;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* searchPaths;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths;
NimStringDesc* outFile;
NimStringDesc* prefixDir;
NimStringDesc* libpath;
NimStringDesc* nimcacheDir;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* dllOverrides;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* moduleOverrides;
NimStringDesc* projectName;
NimStringDesc* projectPath;
NimStringDesc* projectFull;
NIM_BOOL projectIsStdin;
NI32 projectMainIdx;
NimStringDesc* command;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* commandArgs;
NIM_BOOL keepComments;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* implicitImports;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* implicitIncludes;
NimStringDesc* docSeeSrcUrl;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cIncludes;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cLibs;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cLinkedLibs;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* externalToLink;
NimStringDesc* linkOptionsCmd;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* compileOptionsCmd;
NimStringDesc* linkOptions;
NimStringDesc* compileOptions;
NimStringDesc* ccompilerpath;
tySequence_pK3qSsBZwdXd6qyUMkd5Jw* toCompile;
tyProc_QYEVXrYc9beQ379crS3rzqRA suggestionResultHook;
NI suggestVersion;
NI suggestMaxResults;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q lastLineInfo;
tyProc_Q1W5D85O9cNu3iq9cZ9alS9aWA writelnHook;
tyProc_22mgIiTBBoqNe1T0FSw9ahQ structuredErrorHook;
NimStringDesc* cppCustomNamespace;
};
struct tyTuple_xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* quotedName;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* quotedFullName;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lines;
NimStringDesc* dirtyfile;
NimStringDesc* hash;
NIM_BOOL dirty;
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tySet_tyEnum_CfileFlag_Vl9c9ayddDuXiWtnWTsEYGsA;
struct tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg {
NimStringDesc* cname;
NimStringDesc* obj;
tySet_tyEnum_CfileFlag_Vl9c9ayddDuXiWtnWTsEYGsA flags;
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_PJMRIt5QxCm6bRaVyQ5CGA {
  TGenericSeq Sup;
  tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q data[SEQ_DECL_SIZE];
};
struct tySequence_7lEisrXlQEzwtUKW5pzRCw {
  TGenericSeq Sup;
  tyTuple_xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];
};
struct tySequence_Zi9cGbCWofbtABoHJ5RbLNQ {
  TGenericSeq Sup;
  tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw data[SEQ_DECL_SIZE];
};
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_pK3qSsBZwdXd6qyUMkd5Jw {
  TGenericSeq Sup;
  tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, toCChar_Qth15C4FopvtBAPmnM9bJ2w)(NIM_CHAR c, NimStringDesc** result);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAsigmatch)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichPragma_tadMdqrtQd2cek9aFwyE1XQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_2, "X", 1);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_3, "dollar", 6);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_4, "percent", 7);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_5, "amp", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_6, "roof", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_7, "emark", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_8, "qmark", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_9, "star", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_10, "plus", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_11, "minus", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_12, "slash", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_13, "backslash", 9);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_14, "eq", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_15, "lt", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_16, "gt", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_17, "tilde", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_18, "colon", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_19, "dot", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_20, "at", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_21, "bar", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_22, "_", 1);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_23, "\"", 1);
extern NIM_CONST tyArray_2EeRc2Lr9cCM9aL82QsBOFXA CPU_uYXopJX8pM87pQDCtmgWfQ;

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

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, mangle_0ctHksTXSPyaxjBOgK4TiA)(NimStringDesc* name) {
	NimStringDesc* result;
	NI start;
	NIM_BOOL requiresUnderscore;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((name ? name->Sup.len : 0))));
	start = ((NI) 0);
	{
		NimStringDesc* T5_;
		if (!(((NU8)(name->data[((NI) 0)])) >= ((NU8)(48)) && ((NU8)(name->data[((NI) 0)])) <= ((NU8)(57)))) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = rawNewString(2);
appendString(T5_, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_2));
appendChar(T5_, name->data[((NI) 0)]);
		result = resizeString(result, (T5_ ? T5_->Sup.len : 0) + 0);
appendString(result, T5_);
		start = ((NI) 1);
	}
	LA3_: ;
	requiresUnderscore = NIM_FALSE;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res = start;
		{
			while (1) {
				NIM_CHAR c;
				if (!(res <= colontmp_)) goto LA8;
				i = res;
				c = name->data[i];
				switch (((NU8)(c))) {
				case 97 ... 122:
				case 48 ... 57:
				case 65 ... 90:
				{
					result = addChar(result, c);
				}
				break;
				case 95:
				{
					{
						NIM_BOOL T13_;
						NIM_BOOL T14_;
						T13_ = (NIM_BOOL)0;
						T14_ = (NIM_BOOL)0;
						T14_ = (((NI) 0) < i);
						if (!(T14_)) goto LA15_;
						T14_ = (i < (NI)((name ? name->Sup.len : 0) - ((NI) 1)));
						LA15_: ;
						T13_ = T14_;
						if (!(T13_)) goto LA16_;
						T13_ = (((NU8)(name->data[(NI)(i + ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(name->data[(NI)(i + ((NI) 1))])) <= ((NU8)(57)));
						LA16_: ;
						if (!T13_) goto LA17_;
					}
					goto LA11_;
					LA17_: ;
					{
						result = addChar(result, c);
					}
					LA11_: ;
				}
				break;
				case 36:
				{
					result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_3));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 37:
				{
					result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_4));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 38:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_5));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 94:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_6));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 33:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_7));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 63:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_8));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 42:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_9));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 43:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_10));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 45:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_11));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 47:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_12));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 92:
				{
					result = resizeString(result, 9);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_13));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 61:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_14));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 60:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_15));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 62:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_16));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 126:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_17));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 58:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_18));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 46:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_19));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 64:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_20));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 124:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_21));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				default:
				{
					NimStringDesc* T40_;
					NimStringDesc* T41_;
					T40_ = (NimStringDesc*)0;
					T41_ = (NimStringDesc*)0;
					T41_ = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					T40_ = rawNewString((T41_ ? T41_->Sup.len : 0) + 1);
appendString(T40_, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_2));
appendString(T40_, T41_);
					result = resizeString(result, (T40_ ? T40_->Sup.len : 0) + 0);
appendString(result, T40_);
					requiresUnderscore = NIM_TRUE;
				}
				break;
				}
				res += ((NI) 1);
			} LA8: ;
		}
	}
	{
		if (!requiresUnderscore) goto LA44_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_22));
	}
	LA44_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, makeSingleLineCString_59a1Z83zpqnyWoTdIAQEfHQ)(NimStringDesc* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_23));
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s->data[i];
				toCChar_Qth15C4FopvtBAPmnM9bJ2w(c, (&result));
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
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

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
{	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len_CdME9baJhvveuPEDZE9bXoxAsigmatch(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA4;
					i = i_2;
					result = getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw((*n)._Ukind.S6.sons->data[i], w);
					{
						if (!!((result == NIM_NIL))) goto LA7_;
						goto LA2;
					}
					LA7_: ;
					i_2 += ((NI) 1);
				} LA4: ;
			}
		} LA2: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 90):
	{
		{
			NI i_3;
			NI colontmp__2;
			NI i_4;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = len_CdME9baJhvveuPEDZE9bXoxAsigmatch(n);
			i_4 = ((NI) 0);
			{
				while (1) {
					if (!(i_4 < colontmp__2)) goto LA12;
					i_3 = i_4;
					{
						tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw T15_;
						T15_ = (tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw)0;
						T15_ = whichPragma_tadMdqrtQd2cek9aFwyE1XQ((*n)._Ukind.S6.sons->data[i_3]);
						if (!(T15_ == w)) goto LA16_;
						result = (*n)._Ukind.S6.sons->data[i_3];
						goto BeforeRet_;
					}
					LA16_: ;
					i_4 += ((NI) 1);
				} LA12: ;
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

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, stmtsContainPragma_9aY8Dd0aB4xmQTh5kptvVOg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w) {
	NIM_BOOL result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T1_;
	result = (NIM_BOOL)0;
	T1_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw(n, w);
	result = !((T1_ == NIM_NIL));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, hashString_bnoSfGDS48HKk44sKjGWyQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* s) {
	NI64 result;
	result = (NI64)0;
	{
		NI64 b;
		if (!(CPU_uYXopJX8pM87pQDCtmgWfQ[((*conf).target.targetCPU)- 1].Field4 == ((NI) 64))) goto LA3_;
		b = IL64(0);
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA7;
					i = res;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(((NI) 6))));
					res += ((NI) 1);
				} LA7: ;
			}
		}
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 3)))));
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(((NI) 11))));
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 15)))));
		result = b;
	}
	goto LA1_;
	LA3_: ;
	{
		NI32 a;
		a = ((NI32) 0);
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_2 = ((NI) 0);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA11;
					i_2 = res_2;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_2]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_2 += ((NI) 1);
				} LA11: ;
			}
		}
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		result = ((NI64) (a));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_ccgutilsInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_ccgutilsDatInit000)(void) {
}

