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
safe_lshift_func_uint8_t_u_s
(
left
,
right
)
{
return
right
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
flag
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
print_hash_value
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
short
g_70
;
int
g_74
=
2L
;
short
*
g_106
;
short
*
g_552
[
]
=
{
&
g_70
}
;
unsigned
short
func_20
(
int
,
unsigned
short
,
long
long
,
unsigned
)
;
unsigned
long
long
func_49
(
char
,
unsigned
,
unsigned
,
unsigned
,
char
)
;
short
func_1
(
)
{
char
l_25
=
0L
;
func_20
(
g_70
,
g_70
,
g_70
,
g_70
)
;
return
*
*
g_552
;
}
unsigned
short
func_20
(
int
p_21
,
unsigned
short
p_22
,
long
long
p_23
,
unsigned
p_24
)
{
func_49
(
0L
,
g_70
,
g_70
,
4
,
g_70
)
;
return
*
g_106
;
}
unsigned
long
long
func_49
(
char
p_50
,
unsigned
p_51
,
unsigned
p_52
,
unsigned
p_53
,
char
p_54
)
{
short
*
l_69
=
&
g_70
;
if
(
(
safe_lshift_func_uint8_t_u_s
(
0xA5L
,
7
)
^
l_69
==
(
g_106
=
l_69
)
)
<=
g_70
)
{
int
*
l_345
=
&
g_74
;
*
l_345
=
g_70
;
}
return
g_70
;
}
int
main
(
)
{
int
print_hash_value
=
func_1
(
)
;
transparent_crc
(
g_74
,
"g_74"
,
print_hash_value
)
;
platform_main_end
(
crc32_context
,
print_hash_value
)
;
return
0
;
}
