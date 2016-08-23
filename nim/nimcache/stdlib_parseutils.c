/* Generated by Nim Compiler v0.14.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/gseethar/Documents/Code/NIM/nim-0.14.2/lib -o /Users/gseethar/Documents/Code/GitHub/Learning/nim/nimcache/stdlib_parseutils.o /Users/gseethar/Documents/Code/GitHub/Learning/nim/nimcache/stdlib_parseutils.c */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Overflowerror3440 Overflowerror3440;
typedef struct Arithmeticerror3436 Arithmeticerror3436;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell48505 Cell48505;
typedef struct Cellseq48521 Cellseq48521;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Memregion30686 Memregion30686;
typedef struct Smallchunk30640 Smallchunk30640;
typedef struct Llchunk30680 Llchunk30680;
typedef struct Bigchunk30642 Bigchunk30642;
typedef struct Intset30614 Intset30614;
typedef struct Trunk30610 Trunk30610;
typedef struct Avlnode30684 Avlnode30684;
typedef struct Gcstat51014 Gcstat51014;
typedef struct Cellset48517 Cellset48517;
typedef struct Pagedesc48513 Pagedesc48513;
typedef struct Basechunk30638 Basechunk30638;
typedef struct Freecell30630 Freecell30630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Arithmeticerror3436  {
  Exception Sup;
};
struct  Overflowerror3440  {
  Arithmeticerror3436 Sup;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell48505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48521  {
NI len;
NI cap;
Cell48505** d;
};
typedef Smallchunk30640* TY30701[512];
typedef Trunk30610* Trunkbuckets30612[256];
struct  Intset30614  {
Trunkbuckets30612 data;
};
struct  Memregion30686  {
NI minlargeobj;
NI maxlargeobj;
TY30701 freesmallchunks;
Llchunk30680* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30642* freechunkslist;
Intset30614 chunkstarts;
Avlnode30684* root;
Avlnode30684* deleted;
Avlnode30684* last;
Avlnode30684* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat51014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset48517  {
NI counter;
NI max;
Pagedesc48513* head;
Pagedesc48513** data;
};
struct  Gcheap51018  {
Gcstack51016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48521 zct;
Cellseq48521 decstack;
Cellseq48521 tempstack;
NI recgclock;
Memregion30686 region;
Gcstat51014 stat;
Cellset48517 marked;
Cellseq48521 additionalroots;
};
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30640  {
  Basechunk30638 Sup;
Smallchunk30640* next;
Smallchunk30640* prev;
Freecell30630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30680  {
NI size;
NI acc;
Llchunk30680* next;
};
struct  Bigchunk30642  {
  Basechunk30638 Sup;
Bigchunk30642* next;
Bigchunk30642* prev;
NI align;
NF data;
};
typedef NI TY30619[8];
struct  Trunk30610  {
Trunk30610* next;
NI key;
TY30619 bits;
};
typedef Avlnode30684* TY30691[2];
struct  Avlnode30684  {
TY30691 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc48513  {
Pagedesc48513* next;
NI key;
TY30619 bits;
};
struct  Freecell30630  {
Freecell30630* next;
NI zerofield;
};
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s0, NI64* number0, NI start0);
N_NIMCALL(NI, rawparseint_96757_1912046442)(NimStringDesc* s0, NI64* b0, NI start0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a0, NI64 b0);
static N_INLINE(NI, subInt)(NI a0, NI b0);
static N_INLINE(NI64, subInt64)(NI64 a0, NI64 b0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_22601_1689653243)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell48505*, usrtocell_52640_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53801_1689653243)(Cell48505* c0);
N_NOINLINE(void, addzct_52617_1689653243)(Cellseq48521* s0, Cell48505* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
STRING_LITERAL(TMP177, "overflow", 8);
extern TFrame* frameptr_19836_1689653243;
extern TNimType NTI24671; /* ref OverflowError */
extern TNimType NTI3440; /* OverflowError */
extern Gcheap51018 gch_51058_1689653243;

static N_INLINE(NI, addInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU64)(a0) + (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ b0));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI, subInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU64)(a0) - (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ (NI)((NU64) ~(b0))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NI64, subInt64)(NI64 a0, NI64 b0) {
	NI64 result0;
{	result0 = (NI64)0;
	result0 = (NI64)((NU64)(a0) - (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ (NI64)((NU64) ~(b0))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, nimFrame)(TFrame* s0) {
	NI LOC1;
	LOC1 = (NI)0;
	{
		if (!(frameptr_19836_1689653243 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_19836_1689653243).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s0).calldepth = ((NI16) (LOC1));
	(*s0).prev = frameptr_19836_1689653243;
	frameptr_19836_1689653243 = s0;
	{
		if (!((*s0).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_22601_1689653243();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_19836_1689653243 = (*frameptr_19836_1689653243).prev;
}

N_NIMCALL(NI, rawparseint_96757_1912046442)(NimStringDesc* s0, NI64* b0, NI start0) {
	NI result0;
	NI64 sign0;
	NI i0;
	nimfr("rawParseInt", "parseutils.nim")
	result0 = (NI)0;
	nimln(213, "parseutils.nim");
	sign0 = IL64(-1);
	nimln(214, "parseutils.nim");
	i0 = start0;
	nimln(215, "parseutils.nim");
	{
		NI TMP168;
		if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
		if (!((NU8)(s0->data[i0]) == (NU8)(43))) goto LA3;
		TMP168 = addInt(i0, ((NI) 1));
		i0 = (NI)(TMP168);
	}
	goto LA1;
	LA3: ;
	{
		NI TMP169;
		nimln(216, "parseutils.nim");
		if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
		if (!((NU8)(s0->data[i0]) == (NU8)(45))) goto LA6;
		nimln(217, "parseutils.nim");
		TMP169 = addInt(i0, ((NI) 1));
		i0 = (NI)(TMP169);
		nimln(218, "parseutils.nim");
		sign0 = IL64(1);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	nimln(219, "parseutils.nim");
	{
		NI64 TMP175;
		NI TMP176;
		nimln(1095, "system.nim");
		if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
		if (!(((NU8)(s0->data[i0])) >= ((NU8)(48)) && ((NU8)(s0->data[i0])) <= ((NU8)(57)))) goto LA10;
		nimln(220, "parseutils.nim");
		(*b0) = IL64(0);
		{
			nimln(221, "parseutils.nim");
			while (1) {
				NI64 TMP170;
				NI TMP171;
				NI64 TMP172;
				NI TMP173;
				nimln(1095, "system.nim");
				if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
				if (!(((NU8)(s0->data[i0])) >= ((NU8)(48)) && ((NU8)(s0->data[i0])) <= ((NU8)(57)))) goto LA13;
				nimln(222, "parseutils.nim");
				TMP170 = mulInt64((*b0), IL64(10));
				if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
				TMP171 = subInt(((NI) (((NU8)(s0->data[i0])))), ((NI) 48));
				TMP172 = subInt64((NI64)(TMP170), ((NI64) ((NI)(TMP171))));
				(*b0) = (NI64)(TMP172);
				nimln(223, "parseutils.nim");
				TMP173 = addInt(i0, ((NI) 1));
				i0 = (NI)(TMP173);
				{
					nimln(224, "parseutils.nim");
					while (1) {
						NI TMP174;
						if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
						if (!((NU8)(s0->data[i0]) == (NU8)(95))) goto LA15;
						TMP174 = addInt(i0, ((NI) 1));
						i0 = (NI)(TMP174);
					} LA15: ;
				}
			} LA13: ;
		}
		nimln(225, "parseutils.nim");
		TMP175 = mulInt64((*b0), sign0);
		(*b0) = (NI64)(TMP175);
		nimln(226, "parseutils.nim");
		TMP176 = subInt(i0, start0);
		result0 = (NI)(TMP176);
	}
	LA10: ;
	popFrame();
	return result0;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s0, NI64* number0, NI start0) {
	NI result0;
	NI64 res0;
	nimfr("parseBiggestInt", "parseutils.nim")
	result0 = (NI)0;
	res0 = (NI64)0;
	nimln(237, "parseutils.nim");
	result0 = rawparseint_96757_1912046442(s0, (&res0), start0);
	nimln(238, "parseutils.nim");
	(*number0) = res0;
	popFrame();
	return result0;
}

static N_INLINE(Cell48505*, usrtocell_52640_1689653243)(void* usr0) {
	Cell48505* result0;
	nimfr("usrToCell", "gc.nim")
	result0 = (Cell48505*)0;
	nimln(131, "gc.nim");
	result0 = ((Cell48505*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell48505))))));
	popFrame();
	return result0;
}

static N_INLINE(void, rtladdzct_53801_1689653243)(Cell48505* c0) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(211, "gc.nim");
	addzct_52617_1689653243((&gch_51058_1689653243.zct), c0);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell48505* c0;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(253, "gc.nim");
	c0 = usrtocell_52640_1689653243(p0);
	nimln(255, "gc.nim");
	{
		nimln(177, "gc.nim");
		(*c0).refcount -= ((NI) 8);
		nimln(178, "gc.nim");
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(256, "gc.nim");
		rtladdzct_53801_1689653243(c0);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0) {
	NI result0;
	NI64 res0;
	nimfr("parseInt", "parseutils.nim")
	result0 = (NI)0;
	res0 = (NI64)0;
	nimln(246, "parseutils.nim");
	result0 = npuParseBiggestInt(s0, (&res0), start0);
	nimln(247, "parseutils.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC5;
		Overflowerror3440* e_96871_1912046442;
		NimStringDesc* LOC9;
		LOC3 = (NIM_BOOL)0;
		LOC3 = NIM_FALSE;
		if (!(LOC3)) goto LA4;
		nimln(248, "parseutils.nim");
		LOC5 = (NIM_BOOL)0;
		LOC5 = (res0 < (IL64(-9223372036854775807) - IL64(1)));
		if (LOC5) goto LA6;
		nimln(351, "system.nim");
		LOC5 = (IL64(9223372036854775807) < res0);
		LA6: ;
		LOC3 = LOC5;
		LA4: ;
		if (!LOC3) goto LA7;
		e_96871_1912046442 = (Overflowerror3440*)0;
		nimln(2514, "system.nim");
		e_96871_1912046442 = (Overflowerror3440*) newObj((&NTI24671), sizeof(Overflowerror3440));
		(*e_96871_1912046442).Sup.Sup.Sup.m_type = (&NTI3440);
		nimln(2515, "system.nim");
		LOC9 = (NimStringDesc*)0;
		LOC9 = (*e_96871_1912046442).Sup.Sup.message; (*e_96871_1912046442).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP177));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(249, "parseutils.nim");
		raiseException((Exception*)e_96871_1912046442, "OverflowError");
	}
	goto LA1;
	LA7: ;
	{
		nimln(343, "system.nim");
		if (!!((result0 == ((NI) 0)))) goto LA11;
		nimln(251, "parseutils.nim");
		(*number0) = ((NI) (res0));
	}
	goto LA1;
	LA11: ;
	LA1: ;
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void) {
	nimfr("parseutils", "parseutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void) {
}

