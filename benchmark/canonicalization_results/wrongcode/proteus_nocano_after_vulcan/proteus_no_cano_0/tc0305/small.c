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
vname
,
int
flag
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
int
f0
;
short
crc32_context
;
unsigned
l_1381
;
unsigned
g_567
;
}
val
=
{
0x21C0361DL
}
;
struct
crc32_context
g_1379
;
struct
crc32_context
func_2
(
unsigned
)
;
char
func_1
(
)
{
struct
crc32_context
*
crc32_context
=
&
val
;
*
crc32_context
=
func_2
(
1
)
;
*
crc32_context
=
*
crc32_context
;
return
0
;
}
struct
crc32_context
func_2
(
unsigned
p_3
)
{
return
g_1379
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
"g_567.f0"
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
