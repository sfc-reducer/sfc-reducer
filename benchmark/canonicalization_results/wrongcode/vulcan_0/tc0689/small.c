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
l_773
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
union
val
{
char
val
;
}
;
char
l_773
;
char
*
g_403
=
&
l_773
;
int
val
[
]
;
unsigned
char
func_6
(
)
;
union
val
func_1
(
)
{
int
*
crc32_context
[
]
[
4
]
[
8
]
=
{
{
{
val
}
,
val
,
val
,
val
,
val
,
val
,
val
}
}
;
union
val
l_773
=
{
0x5FL
}
;
*
g_403
=
func_6
(
)
^
crc32_context
[
0
]
[
1
]
[
3
]
==
crc32_context
[
0
]
[
1
]
[
5
]
;
return
l_773
;
}
unsigned
char
func_6
(
)
{
unsigned
l_749
=
0xFBD1L
;
return
l_749
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
l_773
,
"g_304"
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
