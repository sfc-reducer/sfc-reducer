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
char
safe_unary_minus_func_int8_t_s
(
si
)
{
return
-
si
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
f8
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
crc32_context
)
{
printf
(
"checksum = %x\n"
,
crc32_context
)
;
}
struct
crc32_context
{
short
crc32_context
;
}
;
struct
S1
{
struct
crc32_context
f3
;
}
;
struct
S4
{
struct
S1
crc32_context
;
}
;
struct
S6
{
int
val
;
}
;
struct
S6
val
;
struct
S4
g_98
;
short
*
g_260
;
struct
crc32_context
*
func_29
(
)
{
short
*
crc32_context
=
&
g_98
.
crc32_context
.
f3
.
crc32_context
;
short
*
*
l_279
=
&
g_260
;
int
*
l_280
=
&
val
.
val
;
*
l_280
=
safe_unary_minus_func_int8_t_s
(
crc32_context
==
(
*
l_279
=
crc32_context
)
)
;
return
crc32_context
;
}
int
main
(
)
{
func_29
(
)
;
transparent_crc
(
val
.
val
,
"g_64.f8"
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
