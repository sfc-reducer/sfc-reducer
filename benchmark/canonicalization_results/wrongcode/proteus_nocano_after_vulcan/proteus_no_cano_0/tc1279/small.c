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
f0
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
val
{
char
f0
;
short
val
;
}
;
struct
val
g_890
;
struct
val
val
=
{
0x46L
}
;
unsigned
func_1
(
)
{
val
=
g_890
;
val
=
val
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
func_1
(
)
;
transparent_crc
(
val
.
f0
,
"g_891.f0"
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
