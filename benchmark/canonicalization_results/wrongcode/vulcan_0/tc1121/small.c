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
g_907
,
int
transparent_crc
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
transparent_crc
,
val
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
int
*
*
g_64
;
long
g_133
=
7L
;
long
g_907
[
6
]
=
{
18446744073709551615UL
}
;
int
*
*
*
val
=
&
g_64
;
static
int
g_1089
=
0x0337D0B7L
;
unsigned
func_1
(
)
{
g_907
[
g_133
]
=
0xFD81CD4BF72C676BLL
;
return
0
;
}
int
main
(
)
{
int
crc32_context
=
func_1
(
)
;
transparent_crc
(
g_1089
,
"g_1089"
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
