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
char
safe_mul_func_uint8_t_u_u
(
ui1
,
safe_mul_func_uint8_t_u_u
)
{
return
ui1
;
}
int
crc32_context
;
void
transparent_crc
(
unsigned
safe_mul_func_uint8_t_u_u
,
char
*
g_152
,
int
ui1
)
{
crc32_context
+=
safe_mul_func_uint8_t_u_u
;
}
void
platform_main_end
(
x
,
safe_mul_func_uint8_t_u_u
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
x
[
]
[
1
]
[
10
]
;
int
func_1
(
)
{
const
char
l_765
=
9L
;
x
[
7
]
[
0
]
[
4
]
=
l_765
<
safe_mul_func_uint8_t_u_u
(
0xB6L
,
0
)
;
return
1
;
}
int
main
(
)
{
int
safe_mul_func_uint8_t_u_u
;
int
ui1
=
func_1
(
)
;
for
(
;
crc32_context
<
8
;
crc32_context
++
)
for
(
ui1
=
0
;
ui1
<
1
;
ui1
++
)
for
(
safe_mul_func_uint8_t_u_u
=
0
;
safe_mul_func_uint8_t_u_u
<
10
;
safe_mul_func_uint8_t_u_u
++
)
transparent_crc
(
x
[
crc32_context
]
[
ui1
]
[
safe_mul_func_uint8_t_u_u
]
,
"g_152[i][j][k]"
,
safe_mul_func_uint8_t_u_u
)
;
platform_main_end
(
crc32_context
,
safe_mul_func_uint8_t_u_u
)
;
return
0
;
}
