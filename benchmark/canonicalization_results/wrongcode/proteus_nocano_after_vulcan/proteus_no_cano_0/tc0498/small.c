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
printf
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
x
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
struct
{
int
f0
;
long
crc32_context
;
}
val
=
{
0x9BAEFF72L
}
;
int
main
(
)
{
transparent_crc
(
__alignof__
(
val
)
,
"g_114[i].f0"
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
