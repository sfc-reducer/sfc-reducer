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
p_37
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
g_106
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
short
g_152
[
]
[
9
]
;
unsigned
short
*
val
;
int
func_1
(
)
{
unsigned
short
*
*
l_2017
=
&
val
;
unsigned
short
*
*
l_2018
=
&
val
;
*
*
g_152
=
-
(
l_2017
==
l_2018
)
;
return
!
g_152
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
g_152
[
crc32_context
]
[
crc32_context
]
,
"g_152[i][j]"
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
