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
unsigned
safe_sub_func_uint32_t_u_u
(
ui1
,
ui2
)
{
return
ui1
-
ui2
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
g_27
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
union
crc32_context
{
short
crc32_context
;
}
;
union
g_27
{
unsigned
f1
;
}
;
union
crc32_context
g_27
;
char
g_42
;
union
crc32_context
*
func_2
(
short
,
char
*
,
union
g_27
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
*
l_26
=
&
g_27
;
union
g_27
g_27
=
{
8L
}
;
char
*
l_169
=
&
g_42
;
func_2
(
g_27
.
f1
,
l_169
,
g_27
)
;
return
*
l_26
;
}
union
crc32_context
*
func_2
(
short
p_3
,
char
*
p_4
,
union
g_27
p_5
)
{
union
crc32_context
*
l_173
[
5
]
;
union
crc32_context
*
crc32_context
=
&
g_27
;
*
p_4
=
safe_sub_func_uint32_t_u_u
(
crc32_context
!=
(
l_173
[
3
]
=
crc32_context
)
,
0x6CE72152L
)
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
g_42
,
"g_198[i][j][k]"
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
