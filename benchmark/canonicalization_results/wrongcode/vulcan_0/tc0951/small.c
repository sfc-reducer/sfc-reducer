signed
printf
(
const
char
*
,
...
)
;
int
safe_add_func_int32_t_s_s
(
si1
,
si2
)
{
return
si1
+
si2
;
}
unsigned
safe_mod_func_uint16_t_u_u
(
ui1
,
ui2
)
{
return
ui1
%
ui2
;
}
int
crc32_context
;
void
transparent_crc
(
unsigned
val
,
char
*
vname
,
int
flag
)
{
}
void
platform_main_end
(
x
,
S0
)
{
printf
(
"checksum = %x\n"
,
S0
)
;
}
struct
S0
{
int
S0
;
char
f1
;
int
g_66
;
unsigned
g_75
;
unsigned
short
f4
;
short
print_hash_value
;
unsigned
ui2
;
int
p_25
;
int
f8
;
short
f9
;
}
;
int
S0
;
char
g_73
;
static
int
*
ui2
;
unsigned
g_78
=
4294967287UL
;
struct
S0
g_88
;
struct
S0
*
g_87
;
int
g_210
;
char
*
g_233
=
&
g_88
.
f1
;
unsigned
*
g_277
=
&
g_78
;
unsigned
*
*
g_276
=
&
g_277
;
unsigned
g_379
;
int
*
func_2
(
struct
S0
,
unsigned
short
)
;
int
*
func_20
(
unsigned
short
,
unsigned
short
)
;
static
unsigned
short
func_23
(
)
;
int
*
func_29
(
unsigned
,
unsigned
char
,
unsigned
short
)
;
static
char
func_1
(
)
{
*
g_276
=
func_2
(
g_88
,
(
func_20
(
func_23
(
func_29
(
S0
,
S0
,
S0
)
,
g_78
,
&
g_210
,
&
g_210
,
ui2
)
,
S0
)
,
S0
)
)
;
return
*
*
g_276
;
}
int
*
func_2
(
struct
S0
p_3
,
unsigned
short
p_4
)
{
struct
S0
*
l_534
=
&
g_88
;
*
l_534
=
g_88
;
return
&
S0
;
}
int
*
func_20
(
unsigned
short
p_21
,
unsigned
short
p_22
)
{
if
(
safe_add_func_int32_t_s_s
(
p_21
,
*
g_233
)
)
for
(
;
;
)
;
return
&
g_210
;
}
unsigned
short
func_23
(
int
*
p_24
,
int
S0
,
int
*
p_26
,
int
*
p_27
,
int
*
p_28
)
{
struct
S0
l_386
=
{
0L
}
;
int
*
*
l_310
=
&
ui2
;
unsigned
l_311
=
0UL
;
*
l_310
=
&
S0
;
if
(
l_311
)
{
if
(
*
g_233
=
S0
)
*
l_310
=
&
S0
;
*
*
l_310
=
safe_mod_func_uint16_t_u_u
(
*
g_277
=
S0
,
*
*
l_310
)
;
}
unsigned
*
*
*
l_415
=
&
g_276
;
if
(
g_277
)
*
ui2
=
*
ui2
;
struct
S0
*
*
l_381
=
&
g_87
;
struct
S0
l_384
=
{
0x6A16CEA2L
,
249UL
,
1L
,
0x05EC8F20L
,
1UL
}
;
struct
S0
*
l_383
=
&
g_88
;
*
l_381
=
l_383
;
*
l_383
=
l_384
;
unsigned
short
*
l_420
=
&
l_386
.
f4
;
*
*
l_381
=
l_384
;
*
g_87
=
l_386
;
*
ui2
=
safe_mod_func_uint16_t_u_u
(
S0
,
*
g_233
=
safe_mod_func_uint16_t_u_u
(
*
l_420
=
safe_add_func_int32_t_s_s
(
S0
,
&
l_311
!=
&
g_379
)
,
0x263AL
)
)
;
if
(
*
p_24
=
S0
>=
(
*
g_233
=
*
*
g_276
=
l_420
==
ui2
)
)
*
l_415
=
g_276
;
return
g_379
;
}
int
*
func_29
(
unsigned
p_30
,
unsigned
char
p_31
,
unsigned
short
p_32
)
{
int
l_213
;
int
*
l_289
=
&
l_213
;
*
l_289
=
*
g_233
;
ui2
=
&
l_213
;
return
&
S0
;
}
int
main
(
)
{
int
ui2
=
func_1
(
)
;
transparent_crc
(
g_73
,
"g_73"
,
ui2
)
;
platform_main_end
(
crc32_context
,
ui2
)
;
return
0
;
}
