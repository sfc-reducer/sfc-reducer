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
x
,
ui2
)
{
return
-
x
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
ui1
,
int
ui2
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
func_1
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
unsigned
g_313
;
int
ui2
[
]
[
8
]
;
unsigned
func_1
(
)
{
short
*
*
val
[
10
]
[
3
]
;
short
*
*
*
l_336
=
&
val
[
2
]
[
2
]
;
ui2
[
0
]
[
4
]
=
safe_sub_func_uint32_t_u_u
(
l_336
==
&
val
[
2
]
[
2
]
,
g_313
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
8
;
val
++
)
transparent_crc
(
ui2
[
crc32_context
]
[
val
]
,
"g_346[i][j]"
,
g_313
)
;
platform_main_end
(
g_313
,
g_313
)
;
return
0
;
}
