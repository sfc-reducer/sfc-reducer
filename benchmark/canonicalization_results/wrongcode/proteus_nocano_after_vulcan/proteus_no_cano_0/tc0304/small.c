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
platform_main_end
,
int
printf
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
g_63
,
platform_main_end
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
g_63
[
10
]
=
{
0xEC3D2506L
}
;
int
main
(
)
{
int
printf
;
if
(
printf
=
0
)
;
else
transparent_crc
(
__alignof__
(
g_63
)
,
"g_63[i][j][k]"
,
printf
)
;
platform_main_end
(
printf
,
printf
)
;
return
0
;
}
