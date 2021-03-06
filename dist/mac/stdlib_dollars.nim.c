/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

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

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple__flePlH29a9c9cGo1Wdll1KDOQ tyTuple__flePlH29a9c9cGo1Wdll1KDOQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA tySequence__AjV3cEUgs0Y9c7dCt9aItdIA;
typedef struct tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tySequence__0DApsYsPPiY7TcBPX9c9amcA tySequence__0DApsYsPPiY7TcBPX9c9amcA;
typedef struct tyTuple__MMt402RZ9acCWFFUj0apVGg tyTuple__MMt402RZ9acCWFFUj0apVGg;
typedef struct tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ;
typedef struct tyTuple__t8irMLNaA9cmVgdlJVz23wA tyTuple__t8irMLNaA9cmVgdlJVz23wA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__flePlH29a9c9cGo1Wdll1KDOQ {
NimStringDesc* Field0;
NimStringDesc* Field1;
NCSTRING Field2;
};
typedef NU8 tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg;
struct tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ {
tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg k;
union{
struct {NimStringDesc* fText;
} _k_1;
struct {NimStringDesc* fTag;
tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* s;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* fAttr;
} _k_2;
};
NI fClientData;
};
typedef NimStringDesc* tyArray__Re75IspeoxXy2oCZHwcRrA[2];
struct tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ {
NimStringDesc* scheme;
NimStringDesc* username;
NimStringDesc* password;
NimStringDesc* hostname;
NimStringDesc* port;
NimStringDesc* path;
NimStringDesc* query;
NimStringDesc* anchor;
NIM_BOOL opaque;
};
struct tyTuple__MMt402RZ9acCWFFUj0apVGg {
NU8 Field0;
NIM_BOOL Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ Field7;
NU8 Field8;
NU8 Field9;
NU8 Field10;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* Field11;
};
struct tyTuple__t8irMLNaA9cmVgdlJVz23wA {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NimStringDesc* Field12;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* Field13;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA {
  TGenericSeq Sup;
  tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* data[SEQ_DECL_SIZE];
};
struct tySequence__0DApsYsPPiY7TcBPX9c9amcA {
  TGenericSeq Sup;
  tyArray__Re75IspeoxXy2oCZHwcRrA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__45fPtFhY4FavRaYwDhRfuA)(NimStringDesc** s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__ARWLtdz6aJCA2LIYS9cFiGQ)(NimStringDesc** s, NCSTRING x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__wlAov2mnCG3enTfRJv6GXA)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__YHOgcRSdUuxfn1ho43k9a5g)(NimStringDesc** s, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__o3VgqXRKszx6jsOesK9cCvQ)(tySequence__0DApsYsPPiY7TcBPX9c9amcA* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__Jf0PU9bYlU1zEILwVG6T87g)(NimStringDesc** s, tyArray__Re75IspeoxXy2oCZHwcRrA x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__Z9amwyByrzLzV6BanbxW9biw)(tyArray__Re75IspeoxXy2oCZHwcRrA x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__lV2Q9bu0pKS0oR9bt9cAeZLXg)(NimStringDesc** s, NU8 x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__NiBfa3xe7gIMgy24Y9cm3iQ)(NimStringDesc** s, NIM_BOOL x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__UFs8H6oS39cIcMRK68PyLjw)(NimStringDesc** s, tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__P5u9ba17SgzBbsfFlNRoXpg)(NimStringDesc** s, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_2, "(", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_3, ", ", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_4, "nil", 3);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_5, ",", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_6, ")", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_7, "@[", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_8, "]", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_9, "[", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_10, "line", 4);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_11, ": ", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_12, "editable", 8);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_13, "specifier", 9);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_14, "vcs", 3);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_15, "protocol", 8);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_16, "version", 7);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_17, "name", 4);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_18, "url", 3);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_19, "blanks", 6);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_20, "nested", 6);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_21, "private", 7);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_22, "extras", 6);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_23, "username", 8);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_24, "password", 8);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_25, "author", 6);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_26, "license", 7);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_27, "summary", 7);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_28, "homepage", 8);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_29, "description", 11);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_30, "downloadurl", 11);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_31, "maintainer", 10);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_32, "authoremail", 11);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_33, "maintaineremail", 15);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_34, "keywords", 8);

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___uRqZ9b9aRtL1gygwVfSa9bmlQ)(tyTuple__flePlH29a9c9cGo1Wdll1KDOQ x) {
	NimStringDesc* result;
	NI count;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_2));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA3_: ;
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), x.Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA7_: ;
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), x.Field1);
	{
		if (!(((NI) 0) < count)) goto LA11_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA11_: ;
	count += ((NI) 1);
	{
		if (!(x.Field2 == 0)) goto LA15_;
		result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_4));
	}
	goto LA13_;
	LA15_: ;
	{
		addQuoted__ARWLtdz6aJCA2LIYS9cFiGQ((&result), x.Field2);
	}
	LA13_: ;
	{
		if (!(count == ((NI) 1))) goto LA20_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5));
	}
	LA20_: ;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		NimStringDesc** value;
		NI i;
		NI L;
		NI T2_;
		value = (NimStringDesc**)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = (&x->data[i]);
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*value));
				i += ((NI) 1);
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___xqL1qTIQGkhdyM4F59c1P9aw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_7), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_8));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__wlAov2mnCG3enTfRJv6GXA)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** value;
		NI i;
		NI L;
		NI T2_;
		value = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ**)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = &x->data[i];
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				{
					if (!((*value) == 0)) goto LA12_;
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_4));
				}
				goto LA10_;
				LA12_: ;
				{
					addQuoted__YHOgcRSdUuxfn1ho43k9a5g((&result), (*value));
				}
				LA10_: ;
				i += ((NI) 1);
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___lU9cz5J9cwgrgGYu9creQ7d4A)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__wlAov2mnCG3enTfRJv6GXA(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_7), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_8));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__Z9amwyByrzLzV6BanbxW9biw)(tyArray__Re75IspeoxXy2oCZHwcRrA x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		NimStringDesc* value;
		NI i;
		value = (NimStringDesc*)0;
		i = ((NI) 0);
		{
			if (!(((NI) (i)) <= ((NI) 1))) goto LA4_;
			{
				while (1) {
					value = x[(i)- 0];
					{
						if (!firstElement) goto LA10_;
						firstElement = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
					}
					LA8_: ;
					addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), value);
					{
						if (!(((NI) 1) <= ((NI) (i)))) goto LA15_;
						goto LA6;
					}
					LA15_: ;
					i += ((NI) 1);
				}
			} LA6: ;
		}
		LA4_: ;
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___XD9bsfFmVUrsjYbFkSl9bHSw)(tyArray__Re75IspeoxXy2oCZHwcRrA x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__Z9amwyByrzLzV6BanbxW9biw(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_9), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_8));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__o3VgqXRKszx6jsOesK9cCvQ)(tySequence__0DApsYsPPiY7TcBPX9c9amcA* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		NimStringDesc** value;
		NI i;
		NI L;
		NI T2_;
		value = (NimStringDesc**)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = x->data[i];
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				addQuoted__Jf0PU9bYlU1zEILwVG6T87g((&result), value);
				i += ((NI) 1);
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___9cYHmBzw9c9cSgv7m2VTXUnag)(tySequence__0DApsYsPPiY7TcBPX9c9amcA* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__o3VgqXRKszx6jsOesK9cCvQ(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_7), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_8));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___Pj72t8Esw6AXcCcVrcED1g)(tyTuple__MMt402RZ9acCWFFUj0apVGg* x) {
	NimStringDesc* result;
	NI count;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_2));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA3_: ;
	result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_10));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__lV2Q9bu0pKS0oR9bt9cAeZLXg((&result), (*x).Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA7_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_12));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__NiBfa3xe7gIMgy24Y9cm3iQ((&result), (*x).Field1);
	{
		if (!(((NI) 0) < count)) goto LA11_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA11_: ;
	result = resizeString(result, 9);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_13));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field2);
	{
		if (!(((NI) 0) < count)) goto LA15_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA15_: ;
	result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_14));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field3);
	{
		if (!(((NI) 0) < count)) goto LA19_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA19_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_15));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field4);
	{
		if (!(((NI) 0) < count)) goto LA23_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA23_: ;
	result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_16));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field5);
	{
		if (!(((NI) 0) < count)) goto LA27_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA27_: ;
	result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_17));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field6);
	{
		if (!(((NI) 0) < count)) goto LA31_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA31_: ;
	result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_18));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__UFs8H6oS39cIcMRK68PyLjw((&result), (&(*x).Field7));
	{
		if (!(((NI) 0) < count)) goto LA35_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA35_: ;
	result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_19));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__lV2Q9bu0pKS0oR9bt9cAeZLXg((&result), (*x).Field8);
	{
		if (!(((NI) 0) < count)) goto LA39_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA39_: ;
	result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_20));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__lV2Q9bu0pKS0oR9bt9cAeZLXg((&result), (*x).Field9);
	{
		if (!(((NI) 0) < count)) goto LA43_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA43_: ;
	result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_21));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__lV2Q9bu0pKS0oR9bt9cAeZLXg((&result), (*x).Field10);
	{
		if (!(((NI) 0) < count)) goto LA47_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA47_: ;
	result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_22));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__P5u9ba17SgzBbsfFlNRoXpg((&result), (*x).Field11);
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___4BSs84HOKJh0wYEmdy9a9bOQ)(tyTuple__t8irMLNaA9cmVgdlJVz23wA* x) {
	NimStringDesc* result;
	NI count;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_2));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA3_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_23));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA7_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_24));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field1);
	{
		if (!(((NI) 0) < count)) goto LA11_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA11_: ;
	result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_17));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field2);
	{
		if (!(((NI) 0) < count)) goto LA15_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA15_: ;
	result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_25));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field3);
	{
		if (!(((NI) 0) < count)) goto LA19_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA19_: ;
	result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_16));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field4);
	{
		if (!(((NI) 0) < count)) goto LA23_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA23_: ;
	result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_26));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field5);
	{
		if (!(((NI) 0) < count)) goto LA27_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA27_: ;
	result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_27));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field6);
	{
		if (!(((NI) 0) < count)) goto LA31_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA31_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_28));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field7);
	{
		if (!(((NI) 0) < count)) goto LA35_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA35_: ;
	result = resizeString(result, 11);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_29));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field8);
	{
		if (!(((NI) 0) < count)) goto LA39_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA39_: ;
	result = resizeString(result, 11);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_30));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field9);
	{
		if (!(((NI) 0) < count)) goto LA43_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA43_: ;
	result = resizeString(result, 10);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_31));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field10);
	{
		if (!(((NI) 0) < count)) goto LA47_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA47_: ;
	result = resizeString(result, 11);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_32));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field11);
	{
		if (!(((NI) 0) < count)) goto LA51_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA51_: ;
	result = resizeString(result, 15);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_33));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*x).Field12);
	{
		if (!(((NI) 0) < count)) goto LA55_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA55_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_34));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_11));
	count += ((NI) 1);
	addQuoted__P5u9ba17SgzBbsfFlNRoXpg((&result), (*x).Field13);
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6));
	return result;
}
