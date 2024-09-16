typedef long long llong;
typedef char vchar64 __attribute__((__vector_size__(64 * sizeof(char))));
__attribute__((noinline, noclone)) vchar64 test1char64(char c) {
  vchar64 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c,
               c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c,
               c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vchar64 test2char64(char *p) {
  char c = *p;
  vchar64 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c,
               c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c,
               c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
void test3char64(void) {
  char c = 17;
  int i;
  vchar64 a = test1char64(c);
  for (i = 0; i < 64; i++)
    if (a[i] != 17)
      __builtin_abort();
  vchar64 b = test2char64(&c);
  for (i = 0; i < 64; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef char vchar32 __attribute__((__vector_size__(32 * sizeof(char))));
__attribute__((noinline, noclone)) vchar32 test1char32(char c) {
  vchar32 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c,
               c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vchar32 test2char32(char *p) {
  char c = *p;
  vchar32 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c,
               c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
void test3char32(void) {
  char c = 17;
  int i;
  vchar32 a = test1char32(c);
  for (i = 0; i < 32; i++)
    if (a[i] != 17)
      __builtin_abort();
  vchar32 b = test2char32(&c);
  for (i = 0; i < 32; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef char vchar16 __attribute__((__vector_size__(16 * sizeof(char))));
__attribute__((noinline, noclone)) vchar16 test1char16(char c) {
  vchar16 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vchar16 test2char16(char *p) {
  char c = *p;
  vchar16 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
void test3char16(void) {
  char c = 17;
  int i;
  vchar16 a = test1char16(c);
  for (i = 0; i < 16; i++)
    if (a[i] != 17)
      __builtin_abort();
  vchar16 b = test2char16(&c);
  for (i = 0; i < 16; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef char vchar8 __attribute__((__vector_size__(8 * sizeof(char))));
__attribute__((noinline, noclone)) vchar8 test1char8(char c) {
  vchar8 v = {c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vchar8 test2char8(char *p) {
  char c = *p;
  vchar8 v = {c, c, c, c, c, c, c, c};
  return v;
}
void test3char8(void) {
  char c = 17;
  int i;
  vchar8 a = test1char8(c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
  vchar8 b = test2char8(&c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef char vchar4 __attribute__((__vector_size__(4 * sizeof(char))));
__attribute__((noinline, noclone)) vchar4 test1char4(char c) {
  vchar4 v = {c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vchar4 test2char4(char *p) {
  char c = *p;
  vchar4 v = {c, c, c, c};
  return v;
}
void test3char4(void) {
  char c = 17;
  int i;
  vchar4 a = test1char4(c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
  vchar4 b = test2char4(&c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef char vchar2 __attribute__((__vector_size__(2 * sizeof(char))));
__attribute__((noinline, noclone)) vchar2 test1char2(char c) {
  vchar2 v = {c, c};
  return v;
}
__attribute__((noinline, noclone)) vchar2 test2char2(char *p) {
  char c = *p;
  vchar2 v = {c, c};
  return v;
}
void test3char2(void) {
  char c = 17;
  int i;
  vchar2 a = test1char2(c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
  vchar2 b = test2char2(&c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef char vchar1 __attribute__((__vector_size__(1 * sizeof(char))));
__attribute__((noinline, noclone)) vchar1 test1char1(char c) {
  vchar1 v = {c};
  return v;
}
__attribute__((noinline, noclone)) vchar1 test2char1(char *p) {
  char c = *p;
  vchar1 v = {c};
  return v;
}
void test3char1(void) {
  char c = 17;
  int i;
  vchar1 a = test1char1(c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
  vchar1 b = test2char1(&c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef short vshort32 __attribute__((__vector_size__(32 * sizeof(short))));
__attribute__((noinline, noclone)) vshort32 test1short32(short c) {
  vshort32 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c,
                c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vshort32 test2short32(short *p) {
  short c = *p;
  vshort32 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c,
                c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
void test3short32(void) {
  short c = 17;
  int i;
  vshort32 a = test1short32(c);
  for (i = 0; i < 32; i++)
    if (a[i] != 17)
      __builtin_abort();
  vshort32 b = test2short32(&c);
  for (i = 0; i < 32; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef short vshort16 __attribute__((__vector_size__(16 * sizeof(short))));
__attribute__((noinline, noclone)) vshort16 test1short16(short c) {
  vshort16 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vshort16 test2short16(short *p) {
  short c = *p;
  vshort16 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
void test3short16(void) {
  short c = 17;
  int i;
  vshort16 a = test1short16(c);
  for (i = 0; i < 16; i++)
    if (a[i] != 17)
      __builtin_abort();
  vshort16 b = test2short16(&c);
  for (i = 0; i < 16; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef short vshort8 __attribute__((__vector_size__(8 * sizeof(short))));
__attribute__((noinline, noclone)) vshort8 test1short8(short c) {
  vshort8 v = {c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vshort8 test2short8(short *p) {
  short c = *p;
  vshort8 v = {c, c, c, c, c, c, c, c};
  return v;
}
void test3short8(void) {
  short c = 17;
  int i;
  vshort8 a = test1short8(c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
  vshort8 b = test2short8(&c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef short vshort4 __attribute__((__vector_size__(4 * sizeof(short))));
__attribute__((noinline, noclone)) vshort4 test1short4(short c) {
  vshort4 v = {c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vshort4 test2short4(short *p) {
  short c = *p;
  vshort4 v = {c, c, c, c};
  return v;
}
void test3short4(void) {
  short c = 17;
  int i;
  vshort4 a = test1short4(c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
  vshort4 b = test2short4(&c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef short vshort2 __attribute__((__vector_size__(2 * sizeof(short))));
__attribute__((noinline, noclone)) vshort2 test1short2(short c) {
  vshort2 v = {c, c};
  return v;
}
__attribute__((noinline, noclone)) vshort2 test2short2(short *p) {
  short c = *p;
  vshort2 v = {c, c};
  return v;
}
void test3short2(void) {
  short c = 17;
  int i;
  vshort2 a = test1short2(c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
  vshort2 b = test2short2(&c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef short vshort1 __attribute__((__vector_size__(1 * sizeof(short))));
__attribute__((noinline, noclone)) vshort1 test1short1(short c) {
  vshort1 v = {c};
  return v;
}
__attribute__((noinline, noclone)) vshort1 test2short1(short *p) {
  short c = *p;
  vshort1 v = {c};
  return v;
}
void test3short1(void) {
  short c = 17;
  int i;
  vshort1 a = test1short1(c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
  vshort1 b = test2short1(&c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef int vint16 __attribute__((__vector_size__(16 * sizeof(int))));
__attribute__((noinline, noclone)) vint16 test1int16(int c) {
  vint16 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vint16 test2int16(int *p) {
  int c = *p;
  vint16 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
void test3int16(void) {
  int c = 17;
  int i;
  vint16 a = test1int16(c);
  for (i = 0; i < 16; i++)
    if (a[i] != 17)
      __builtin_abort();
  vint16 b = test2int16(&c);
  for (i = 0; i < 16; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef int vint8 __attribute__((__vector_size__(8 * sizeof(int))));
__attribute__((noinline, noclone)) vint8 test1int8(int c) {
  vint8 v = {c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vint8 test2int8(int *p) {
  int c = *p;
  vint8 v = {c, c, c, c, c, c, c, c};
  return v;
}
void test3int8(void) {
  int c = 17;
  int i;
  vint8 a = test1int8(c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
  vint8 b = test2int8(&c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef int vint4 __attribute__((__vector_size__(4 * sizeof(int))));
__attribute__((noinline, noclone)) vint4 test1int4(int c) {
  vint4 v = {c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vint4 test2int4(int *p) {
  int c = *p;
  vint4 v = {c, c, c, c};
  return v;
}
void test3int4(void) {
  int c = 17;
  int i;
  vint4 a = test1int4(c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
  vint4 b = test2int4(&c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef int vint2 __attribute__((__vector_size__(2 * sizeof(int))));
__attribute__((noinline, noclone)) vint2 test1int2(int c) {
  vint2 v = {c, c};
  return v;
}
__attribute__((noinline, noclone)) vint2 test2int2(int *p) {
  int c = *p;
  vint2 v = {c, c};
  return v;
}
void test3int2(void) {
  int c = 17;
  int i;
  vint2 a = test1int2(c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
  vint2 b = test2int2(&c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef int vint1 __attribute__((__vector_size__(1 * sizeof(int))));
__attribute__((noinline, noclone)) vint1 test1int1(int c) {
  vint1 v = {c};
  return v;
}
__attribute__((noinline, noclone)) vint1 test2int1(int *p) {
  int c = *p;
  vint1 v = {c};
  return v;
}
void test3int1(void) {
  int c = 17;
  int i;
  vint1 a = test1int1(c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
  vint1 b = test2int1(&c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef float vfloat16 __attribute__((__vector_size__(16 * sizeof(float))));
__attribute__((noinline, noclone)) vfloat16 test1float16(float c) {
  vfloat16 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vfloat16 test2float16(float *p) {
  float c = *p;
  vfloat16 v = {c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c};
  return v;
}
void test3float16(void) {
  float c = 17;
  int i;
  vfloat16 a = test1float16(c);
  for (i = 0; i < 16; i++)
    if (a[i] != 17)
      __builtin_abort();
  vfloat16 b = test2float16(&c);
  for (i = 0; i < 16; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef float vfloat8 __attribute__((__vector_size__(8 * sizeof(float))));
__attribute__((noinline, noclone)) vfloat8 test1float8(float c) {
  vfloat8 v = {c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vfloat8 test2float8(float *p) {
  float c = *p;
  vfloat8 v = {c, c, c, c, c, c, c, c};
  return v;
}
void test3float8(void) {
  float c = 17;
  int i;
  vfloat8 a = test1float8(c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
  vfloat8 b = test2float8(&c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef float vfloat4 __attribute__((__vector_size__(4 * sizeof(float))));
__attribute__((noinline, noclone)) vfloat4 test1float4(float c) {
  vfloat4 v = {c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vfloat4 test2float4(float *p) {
  float c = *p;
  vfloat4 v = {c, c, c, c};
  return v;
}
void test3float4(void) {
  float c = 17;
  int i;
  vfloat4 a = test1float4(c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
  vfloat4 b = test2float4(&c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef float vfloat2 __attribute__((__vector_size__(2 * sizeof(float))));
__attribute__((noinline, noclone)) vfloat2 test1float2(float c) {
  vfloat2 v = {c, c};
  return v;
}
__attribute__((noinline, noclone)) vfloat2 test2float2(float *p) {
  float c = *p;
  vfloat2 v = {c, c};
  return v;
}
void test3float2(void) {
  float c = 17;
  int i;
  vfloat2 a = test1float2(c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
  vfloat2 b = test2float2(&c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef float vfloat1 __attribute__((__vector_size__(1 * sizeof(float))));
__attribute__((noinline, noclone)) vfloat1 test1float1(float c) {
  vfloat1 v = {c};
  return v;
}
__attribute__((noinline, noclone)) vfloat1 test2float1(float *p) {
  float c = *p;
  vfloat1 v = {c};
  return v;
}
void test3float1(void) {
  float c = 17;
  int i;
  vfloat1 a = test1float1(c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
  vfloat1 b = test2float1(&c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef llong vllong8 __attribute__((__vector_size__(8 * sizeof(llong))));
__attribute__((noinline, noclone)) vllong8 test1llong8(llong c) {
  vllong8 v = {c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vllong8 test2llong8(llong *p) {
  llong c = *p;
  vllong8 v = {c, c, c, c, c, c, c, c};
  return v;
}
void test3llong8(void) {
  llong c = 17;
  int i;
  vllong8 a = test1llong8(c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
  vllong8 b = test2llong8(&c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef llong vllong4 __attribute__((__vector_size__(4 * sizeof(llong))));
__attribute__((noinline, noclone)) vllong4 test1llong4(llong c) {
  vllong4 v = {c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vllong4 test2llong4(llong *p) {
  llong c = *p;
  vllong4 v = {c, c, c, c};
  return v;
}
void test3llong4(void) {
  llong c = 17;
  int i;
  vllong4 a = test1llong4(c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
  vllong4 b = test2llong4(&c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef llong vllong2 __attribute__((__vector_size__(2 * sizeof(llong))));
__attribute__((noinline, noclone)) vllong2 test1llong2(llong c) {
  vllong2 v = {c, c};
  return v;
}
__attribute__((noinline, noclone)) vllong2 test2llong2(llong *p) {
  llong c = *p;
  vllong2 v = {c, c};
  return v;
}
void test3llong2(void) {
  llong c = 17;
  int i;
  vllong2 a = test1llong2(c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
  vllong2 b = test2llong2(&c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef llong vllong1 __attribute__((__vector_size__(1 * sizeof(llong))));
__attribute__((noinline, noclone)) vllong1 test1llong1(llong c) {
  vllong1 v = {c};
  return v;
}
__attribute__((noinline, noclone)) vllong1 test2llong1(llong *p) {
  llong c = *test1char8;
  vllong1 v = {c};
  return v;
}
void test3llong1(void) {
  llong c = 17;
  int i;
  vllong1 a = test1llong1(c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
  vllong1 b = test2llong1(&c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef double vdouble8 __attribute__((__vector_size__(8 * sizeof(double))));
__attribute__((noinline, noclone)) vdouble8 test1double8(double c) {
  vdouble8 v = {c, c, c, c, c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vdouble8 test2double8(double *p) {
  double c = *p;
  vdouble8 v = {c, c, c, c, c, c, c, c};
  return v;
}
void test3double8(void) {
  double c = 17;
  int i;
  vdouble8 a = test1double8(c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
  vdouble8 b = test2double8(&c);
  for (i = 0; i < 8; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef double vdouble4 __attribute__((__vector_size__(4 * sizeof(double))));
__attribute__((noinline, noclone)) vdouble4 test1double4(double c) {
  vdouble4 v = {c, c, c, c};
  return v;
}
__attribute__((noinline, noclone)) vdouble4 test2double4(double *p) {
  double c = *p;
  vdouble4 v = {c, c, c, c};
  return v;
}
void test3double4(void) {
  double c = 17;
  int i;
  vdouble4 a = test1double4(c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
  vdouble4 b = test2double4(&c);
  for (i = 0; i < 4; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef double vdouble2 __attribute__((__vector_size__(2 * sizeof(double))));
__attribute__((noinline, noclone)) vdouble2 test1double2(double c) {
  vdouble2 v = {c, c};
  return v;
}
__attribute__((noinline, noclone)) vdouble2 test2double2(double *p) {
  double c = *p;
  vdouble2 v = {c, c};
  return v;
}
void test3double2(void) {
  double c = 17;
  int i;
  vdouble2 a = test1double2(c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
  vdouble2 b = test2double2(&c);
  for (i = 0; i < 2; i++)
    if (a[i] != 17)
      __builtin_abort();
}
typedef double vdouble1 __attribute__((__vector_size__(1 * sizeof(double))));
__attribute__((noinline, noclone)) vdouble1 test1double1(double c) {
  vdouble1 v = {c};
  return v;
}
__attribute__((noinline, noclone)) vdouble1 test2double1(double *p) {
  double c = *p;
  vdouble1 v = {c};
  return v;
}
void test3double1(void) {
  double c = 17;
  int i;
  vdouble1 a = test1double1(c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
  vdouble1 b = test2double1(&c);
  for (i = 0; i < 1; i++)
    if (a[i] != 17)
      __builtin_abort();
}
int main() {
  test3char64();
  test3char32();
  test3char16();
  test3char8();
  test3char4();
  test3char2();
  test3char1();
  test3short32();
  test3short16();
  test3short8();
  test3short4();
  test3short2();
  test3short1();
  test3int16();
  test3int8();
  test3int4();
  test3int2();
  test3int1();
  test3float16();
  test3float8();
  test3float4();
  test3float2();
  test3float1();
  test3llong8();
  test3llong4();
  test3llong2();
  test3llong1();
  test3double8();
  test3double4();
  test3double2();
  test3double1();
  return 0;
}