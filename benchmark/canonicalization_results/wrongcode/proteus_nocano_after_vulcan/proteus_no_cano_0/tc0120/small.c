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
unsigned
safe_mul_func_uint8_t_u_u
(
x
,
ui2
)
{
return
-
x
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
ui1
,
int
ui2
)
{
crc32_context
+=
val
;
}
void
platform_main_end
(
x
,
func_1
)
{
printf
(
"checksum = %x\n"
,
x
)
;
}
struct
crc32_context
{
const
;
}
;
int
val
[
]
;
int
*
g_81
=
val
;
int
*
*
g_120
=
&
g_81
;
struct
crc32_context
g_1192
;
short
*
ui2
;
static
short
*
*
g_1237
=
&
ui2
;
struct
crc32_context
func_1
(
)
{
struct
crc32_context
*
l_1191
=
&
g_1192
;
short
*
*
l_1239
=
&
ui2
;
*
*
g_120
=
safe_mul_func_uint8_t_u_u
(
g_1237
==
l_1239
,
2L
)
;
return
*
l_1191
;
}
int
main
(
)
{
func_1
(
)
;
transparent_crc
(
*
g_81
,
"g_76[i]"
,
crc32_context
)
;
platform_main_end
(
crc32_context
,
crc32_context
)
;
return
0
;
}
