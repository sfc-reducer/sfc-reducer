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
safe_mul_func_uint8_t_u_u
(
unsigned
char
ui1
,
unsigned
char
ui2
)
{
return
ui1
*
ui2
;
}
unsigned
safe_mod_func_uint8_t_u_u
(
unsigned
char
ui1
,
unsigned
char
ui2
)
{
return
ui1
%
ui2
;
}
int
crc32_context
;
void
platform_main_end
(
ui2
,
l_1255
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
g_54
[
]
;
unsigned
ui1
;
unsigned
func_1
(
)
{
short
ui2
[
]
[
10
]
[
5
]
=
{
{
{
0L
}
,
{
0L
}
,
{
0L
}
,
{
0L
}
,
0L
,
0x17AAL
,
0x62DFL
,
8L
,
0x8C6BL
}
}
;
for
(
;
ui1
<=
1
;
ui1
++
)
g_54
[
ui1
]
=
safe_mod_func_uint8_t_u_u
(
safe_mul_func_uint8_t_u_u
(
ui2
[
0
]
[
4
]
[
4
]
,
-
ui1
)
,
ui2
[
0
]
[
4
]
[
4
]
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
