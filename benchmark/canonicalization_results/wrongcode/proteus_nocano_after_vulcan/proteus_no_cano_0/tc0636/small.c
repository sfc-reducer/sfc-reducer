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
char
safe_mul_func_int8_t_s_s
(
si1
,
si2
)
{
return
127
/
si2
/
si2
;
}
unsigned
safe_mod_func_uint32_t_u_u
(
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
i
)
{
printf
(
"checksum = %x\n"
,
x
)
;
}
int
g_17
;
int
*
g_36
;
char
g_69
;
char
g_83
;
char
*
g_82
=
&
g_83
;
int
g_86
[
4
]
;
unsigned
g_103
[
]
[
7
]
[
4
]
;
int
*
g_188
;
int
*
*
g_187
=
&
g_188
;
int
*
g_337
;
int
si1
;
int
*
g_545
;
int
*
*
*
g_711
=
&
g_187
;
int
*
func_2
(
int
,
char
,
short
,
int
,
unsigned
)
;
static
int
func_14
(
unsigned
short
,
char
)
;
static
const
unsigned
char
func_20
(
int
*
,
const
int
*
,
unsigned
char
,
short
,
int
)
;
static
unsigned
func_1
(
)
{
*
*
g_711
=
*
g_187
=
func_2
(
safe_mul_func_int8_t_s_s
(
*
g_82
=
func_14
(
g_69
,
func_20
(
g_36
,
&
crc32_context
,
*
g_36
,
2
,
g_69
)
)
,
0xD0L
)
,
g_69
,
g_69
,
g_69
,
g_69
)
;
return
!
g_187
;
}
int
*
func_2
(
int
p_3
,
char
p_4
,
short
p_5
,
int
p_6
,
unsigned
p_7
)
{
return
g_545
;
}
int
func_14
(
unsigned
short
p_15
,
char
p_16
)
{
int
*
l_342
[
]
[
5
]
[
1
]
=
{
{
g_36
}
,
{
g_36
}
,
g_86
}
;
for
(
g_17
=
2
;
!
g_17
;
)
{
int
*
*
l_356
[
]
[
4
]
[
10
]
=
{
l_342
[
2
]
[
0
]
}
;
int
*
l_487
;
while
(
g_36
)
{
l_356
[
0
]
[
2
]
;
++
*
g_82
;
while
(
g_36
)
if
(
*
g_82
=
safe_mul_func_int8_t_s_s
(
g_69
,
safe_mod_func_uint32_t_u_u
(
*
g_36
&=
*
g_545
)
)
)
return
g_69
;
else
return
g_69
;
}
if
(
*
g_337
^=
safe_mod_func_uint32_t_u_u
(
&
l_487
)
)
return
*
g_36
;
}
return
0
;
}
const
unsigned
char
func_20
(
int
*
p_21
,
const
int
*
p_22
,
unsigned
char
p_23
,
short
p_24
,
int
p_25
)
{
int
l_273
=
0x12CEEA7DL
;
short
*
l_274
=
&
p_24
;
*
g_187
=
*
g_187
=
&
crc32_context
;
safe_mul_func_int8_t_s_s
(
*
g_188
=
l_273
|
l_274
!=
&
p_24
,
g_69
)
;
*
g_187
=
&
l_273
;
return
g_69
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
++
g_86
[
g_69
]
;
for
(
;
si1
;
si1
++
)
while
(
g_17
)
transparent_crc
(
g_103
[
g_17
]
[
g_69
]
[
g_17
]
,
"g_103[i][j][k]"
,
g_17
)
;
platform_main_end
(
crc32_context
,
g_17
)
;
return
0
;
}
