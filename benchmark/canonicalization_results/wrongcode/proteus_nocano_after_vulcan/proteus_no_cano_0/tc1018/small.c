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
short
safe_unary_minus_func_int16_t_s
(
si
)
{
return
-
si
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
si
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
char
*
*
val
[
]
;
short
si
[
]
[
1
]
;
int
*
func_2
(
unsigned
short
)
;
int
func_1
(
)
{
func_2
(
crc32_context
)
;
return
crc32_context
;
}
int
*
func_2
(
unsigned
short
crc32_context
)
{
unsigned
char
*
*
*
l_1080
[
]
=
{
val
,
0
,
val
,
val
,
0
,
val
,
&
val
[
2
]
}
;
si
[
1
]
[
0
]
^=
safe_unary_minus_func_int16_t_s
(
&
val
[
2
]
==
l_1080
[
6
]
)
;
return
func_1
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
if
(
crc32_context
++
)
;
else
if
(
val
=
0
)
;
else
transparent_crc
(
si
[
crc32_context
]
[
val
]
,
"g_647[i][j]"
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
