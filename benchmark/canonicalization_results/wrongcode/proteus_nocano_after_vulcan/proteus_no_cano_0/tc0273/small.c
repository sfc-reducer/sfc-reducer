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
g_246
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
func_1
,
g_191
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
union
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
union
crc32_context
g_191
[
]
;
unsigned
char
*
*
g_247
;
static
unsigned
char
*
*
*
x
=
&
g_247
;
char
*
func_14
(
union
crc32_context
,
unsigned
short
,
char
,
short
)
;
union
crc32_context
func_19
(
)
;
union
crc32_context
func_1
(
)
{
union
crc32_context
crc32_context
=
{
0L
}
;
func_14
(
func_19
(
)
,
sizeof
func_1
,
sizeof
func_1
,
0x37L
)
;
return
crc32_context
;
}
char
*
func_14
(
union
crc32_context
p_15
,
unsigned
short
p_16
,
char
p_17
,
short
p_18
)
{
unsigned
char
*
*
*
*
l_382
=
&
x
;
int
l_384
[
]
=
{
0L
,
0x797A1178L
,
0L
,
0x797A1178L
,
0L
,
0x797A1178L
}
;
*
val
=
*
l_382
==
x
^
l_384
[
5
]
;
return
func_1
;
}
union
crc32_context
func_19
(
)
{
return
*
g_191
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
val
,
"g_39[i]"
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
