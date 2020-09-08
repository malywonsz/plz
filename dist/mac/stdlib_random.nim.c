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
typedef struct tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A;
typedef struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;

/* section: NIM_merge_TYPES */
struct tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A {
NU64 a0;
NU64 a1;
};
struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q {
NI64 seconds;
NI nanosecond;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ;
typedef NI64 tyArray__pDfjTbtkTNjmi9bTcaNV32Q[8];
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q, getTime__h20mpqrwsumk6J9bRdCm6IQ)(void);
N_LIB_PRIVATE N_NIMCALL(void, randomize__9bkKNJLf9bw20lvR7m7LtpUA)(NI64 seed);
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, initRand__9aqfye0529cpt9ccBCwRCQgGQ)(NI64 seed);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NU64, next__uKPilSLGUBbsncNO5ljzag)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r);
N_LIB_PRIVATE N_NIMCALL(NU64, rotl__I9aS29bnItunNBhkLW9cSr3SA)(NU64 x, NU64 k);
static N_INLINE(NI64, convert__2z1a0DRE31bT73xgVvBfQAtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI64 quantity);
N_LIB_PRIVATE N_NIMCALL(NI64, toUnix__mXmxlr1pBpariZiJTjytHg)(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q t);
N_LIB_PRIVATE N_NIMCALL(NI, nanosecond__w9bWusm7fy39b4s5K9azEA0RA)(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q time);
N_LIB_PRIVATE N_NIMCALL(NI, rand__SN9aVN0MBPaaBWhJdtZLhNA)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NI max);
N_LIB_PRIVATE N_NIMCALL(NI, rand__et2jtRpfGpLGPU9a0iZnLrw)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_LIB_PRIVATE N_NIMCALL(NI, rand__iSDgimHDDUMUicLeecY8EQ)(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__AIKkgex03Z1j45JceakCTA_2, "random.nim(568, 12) `seed != 0` ", 32);
extern NIM_CONST tyArray__pDfjTbtkTNjmi9bTcaNV32Q unitWeights__cpugRVHYEC9bUpLa71eZMsQ;

/* section: NIM_merge_VARS */
N_LIB_PRIVATE tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A state__4atHrcHUZPts5LqH9bzbl0w = {7616934476015405061ULL, 15122295919272093642ULL}
;

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(NU64, rotl__I9aS29bnItunNBhkLW9cSr3SA)(NU64 x, NU64 k) {
	NU64 result;
	result = (NU64)0;
	result = (NU64)((NU64)((NU64)(x) << (NU64)(k)) | (NU64)((NU64)(x) >> (NU64)((NU64)((NU64)(64ULL) - (NU64)(k)))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU64, next__uKPilSLGUBbsncNO5ljzag)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r) {
	NU64 result;
	NU64 s0;
	NU64 s1;
	NU64 T1_;
	result = (NU64)0;
	s0 = (*r).a0;
	s1 = (*r).a1;
	result = (NU64)((NU64)(s0) + (NU64)(s1));
	s1 = (NU64)(s1 ^ s0);
	T1_ = (NU64)0;
	T1_ = rotl__I9aS29bnItunNBhkLW9cSr3SA(s0, 55ULL);
	(*r).a0 = (NU64)((NU64)(T1_ ^ s1) ^ (NU64)((NU64)(s1) << (NU64)(((NI) 14))));
	(*r).a1 = rotl__I9aS29bnItunNBhkLW9cSr3SA(s1, 36ULL);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A, initRand__9aqfye0529cpt9ccBCwRCQgGQ)(NI64 seed) {
	tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A result;
	NU64 T5_;
	nimZeroMem((void*)(&result), sizeof(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A));
	{
		if (!!(!((seed == IL64(0))))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__AIKkgex03Z1j45JceakCTA_2));
	}
	LA3_: ;
	result.a0 = ((NU64) ((NI64)((NI64)(seed) >> (NU64)(((NI) 16)))));
	result.a1 = ((NU64) ((NI64)(seed & IL64(65535))));
	T5_ = (NU64)0;
	T5_ = next__uKPilSLGUBbsncNO5ljzag((&result));
	(void)(T5_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, randomize__9bkKNJLf9bw20lvR7m7LtpUA)(NI64 seed) {
	state__4atHrcHUZPts5LqH9bzbl0w = initRand__9aqfye0529cpt9ccBCwRCQgGQ(seed);
}
static N_INLINE(NI64, convert__2z1a0DRE31bT73xgVvBfQAtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI64 quantity) {
	NI64 result;
	result = (NI64)0;
	{
		if (!(unitFrom < unitTo)) goto LA3_;
		result = (NI64)(quantity / (NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0]));
	}
	goto LA1_;
	LA3_: ;
	{
		result = (NI64)((NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0]) * quantity);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, randomize__JYHVSm4CtuuZW3MM2Ut4bQ)(void) {
	tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q now;
	NI64 T1_;
	NI64 T2_;
	NI T3_;
	now = getTime__h20mpqrwsumk6J9bRdCm6IQ();
	T1_ = (NI64)0;
	T1_ = toUnix__mXmxlr1pBpariZiJTjytHg(now);
	T2_ = (NI64)0;
	T2_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), T1_);
	T3_ = (NI)0;
	T3_ = nanosecond__w9bWusm7fy39b4s5K9azEA0RA(now);
	randomize__9bkKNJLf9bw20lvR7m7LtpUA((NI64)(T2_ + ((NI64) (T3_))));
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__SN9aVN0MBPaaBWhJdtZLhNA)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NI max) {
	NI result;
{	result = (NI)0;
	{
		if (!(((NI) (max)) == ((NI) 0))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		while (1) {
			NU64 x;
			x = next__uKPilSLGUBbsncNO5ljzag(r);
			{
				if (!((NU64)(x) <= (NU64)((NU64)((NU64)(18446744073709551615ULL) - (NU64)((NU64)((NU64)(18446744073709551615ULL) % (NU64)(((NU64) (max))))))))) goto LA9_;
				result = ((NI) ((NU64)((NU64)(x) % (NU64)((NU64)((NU64)(((NU64) (max))) + (NU64)(1ULL))))));
				goto BeforeRet_;
			}
			LA9_: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__v7jZDEs4VOsrcpvk0yo8Rg)(NI max) {
	NI result;
	result = (NI)0;
	result = rand__SN9aVN0MBPaaBWhJdtZLhNA((&state__4atHrcHUZPts5LqH9bzbl0w), ((NI) (max)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__et2jtRpfGpLGPU9a0iZnLrw)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (NI)0;
	T1_ = rand__SN9aVN0MBPaaBWhJdtZLhNA(r, ((NI) ((NI)(x.b - x.a))));
	result = (NI)(T1_ + x.a);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__iSDgimHDDUMUicLeecY8EQ)(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NI result;
	result = (NI)0;
	result = rand__et2jtRpfGpLGPU9a0iZnLrw((&state__4atHrcHUZPts5LqH9bzbl0w), x);
	return result;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, sample__3xfZAw0SQXCnAoXzmGGnMA)(NimStringDesc** a, NI aLen_0) {
	NimStringDesc* result;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T1_;
	NI T2_;
	result = (NimStringDesc*)0;
	T1_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(((NI) 0), (aLen_0-1));
	T2_ = (NI)0;
	T2_ = rand__iSDgimHDDUMUicLeecY8EQ(T1_);
	result = copyString(a[T2_]);
	return result;
}