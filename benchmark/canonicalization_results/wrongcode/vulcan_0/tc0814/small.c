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
platform_main_end
(
g_574
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
int
*
*
*
g_576
[
]
[
4
]
[
9
]
;
int
*
*
*
*
g_575
[
]
[
10
]
;
int
*
*
*
*
*
g_574
=
g_575
[
1
]
;
unsigned
*
l_1138
(
short
)
;
unsigned
func_1
(
)
{
l_1138
(
crc32_context
)
;
return
crc32_context
;
}
unsigned
*
l_1138
(
short
crc32_context
)
{
int
*
*
*
*
l_1138
=
g_576
[
5
]
[
1
]
;
*
g_574
=
l_1138
;
return
l_1138
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
