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
func_1
,
g_1092
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
U3
{
const
;
}
;
char
g_30
;
const
int
g_140
=
0xEE7FC086L
;
union
U3
g_1092
;
short
func_33
(
unsigned
,
unsigned
short
,
const
char
*
,
int
)
;
union
U3
func_1
(
)
{
unsigned
*
l_40
=
&
g_140
;
func_33
(
*
l_40
,
3
,
&
g_30
,
3
)
;
return
g_1092
;
}
short
func_33
(
unsigned
func_33
,
unsigned
short
U3
,
const
char
*
printf
,
int
g_30
)
{
int
*
l_184
=
&
crc32_context
;
short
l_190
[
]
[
1
]
[
10
]
=
{
0xC702L
}
;
short
l_201
[
10
]
;
unsigned
short
*
l_211
=
l_201
;
*
l_184
=
l_190
[
2
]
[
0
]
[
8
]
>=
(
*
l_211
=
g_140
)
;
return
*
l_184
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
platform_main_end
(
crc32_context
,
g_140
)
;
return
0
;
}
