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
func_30
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
val
[
]
;
int
*
vname
(
int
*
,
short
,
unsigned
short
)
;
int
*
x
(
unsigned
,
unsigned
)
;
short
func_1
(
)
{
vname
(
val
,
crc32_context
,
0xD0A7084BC9C3D069LL
)
;
return
*
val
;
}
int
*
vname
(
int
*
val
,
short
crc32_context
,
unsigned
short
vname
)
{
x
(
val
!=
&
val
,
0
)
;
return
val
;
}
int
*
x
(
unsigned
vname
,
unsigned
crc32_context
)
{
*
val
=
vname
;
return
val
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
for
(
crc32_context
=
0
;
crc32_context
<
3
;
crc32_context
++
)
transparent_crc
(
val
[
crc32_context
]
,
"g_11[i]"
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
