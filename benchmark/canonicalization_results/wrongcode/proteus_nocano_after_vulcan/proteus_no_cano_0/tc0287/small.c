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
safe_sub_func_int32_t_s_s
(
si1
,
si2
)
{
return
si1
;
}
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
si1
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
si2
)
{
printf
(
"checksum = %x\n"
,
si2
)
;
}
short
si1
[
]
[
2
]
;
char
*
g_283
;
static
char
*
*
val
=
&
g_283
;
unsigned
func_10
(
char
,
unsigned
,
int
,
int
,
char
)
;
unsigned
func_1
(
)
{
return
func_10
(
5
,
crc32_context
,
5
,
5
,
3
)
;
}
unsigned
func_10
(
char
crc32_context
,
unsigned
func_10
,
int
transparent_crc
,
int
p_14
,
char
p_15
)
{
char
*
*
*
l_1092
=
&
val
;
short
*
l_1119
=
si1
[
2
]
;
*
l_1119
=
0x926353F6L
^
safe_sub_func_int32_t_s_s
(
*
l_1092
!=
val
,
transparent_crc
)
;
return
transparent_crc
;
}
int
main
(
)
{
int
val
;
func_1
(
)
;
for
(
val
=
0
;
val
<
3
;
val
++
)
transparent_crc
(
si1
[
val
]
[
crc32_context
]
,
"g_103[i][j]"
,
val
)
;
platform_main_end
(
val
,
crc32_context
)
;
return
0
;
}
