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
void
platform_main_end
(
g_1873
,
func_1
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
int
g_47
[
]
[
9
]
[
4
]
;
unsigned
short
*
*
*
g_1791
[
]
;
unsigned
short
*
*
*
*
g_1790
;
int
*
g_1873
=
g_47
[
0
]
[
1
]
;
int
func_1
(
)
{
unsigned
l_1896
=
0xA264DAF8L
;
*
g_1873
^=
l_1896
|
(
g_1790
=
g_1791
)
==
g_1791
;
return
*
g_1873
;
}
int
main
(
)
{
int
g_1873
=
func_1
(
)
;
platform_main_end
(
g_1873
,
g_1873
)
;
return
0
;
}
