typedef
char
int8_t
;
typedef
short
uint64_t
;
void
platform_main_end
(
crc
,
__m128
)
{
printf
(
"checksum = %X\n"
,
crc
)
;
}
char
safe_rshift_func_int8_t_s_s
(
left
,
__m128
)
{
return
left
;
}
short
safe_add_func_uint64_t_u_u
(
ui1
,
left
)
{
return
ui1
+
left
;
}
short
left
;
void
crc32_byte
(
b
)
{
left
=
b
;
}
void
transparent_crc
(
short
left
,
void
*
vname
,
char
uint64_t
)
{
crc32_byte
(
left
)
;
}
uint64_t
g_1729
[
1
]
[
4
]
;
int8_t
func_1
(
)
{
uint64_t
l_2124
=
2L
;
for
(
;
left
<
51
;
++
left
)
{
int8_t
left
[
9
]
;
*
left
=
0x9EE7F9D1C772505BLL
;
l_2124
=
safe_add_func_uint64_t_u_u
(
safe_rshift_func_int8_t_s_s
(
g_1729
[
0
]
[
3
]
=
l_2124
,
3
)
,
*
left
)
;
}
return
3
;
}
int
main
(
)
{
int
uint64_t
;
int
print_hash_value
=
func_1
(
)
;
if
(
uint64_t
=
0
)
;
else
transparent_crc
(
g_1729
[
uint64_t
]
[
print_hash_value
]
,
"g_1729[i][j]"
,
print_hash_value
)
;
platform_main_end
(
left
,
print_hash_value
)
;
return
0
;
}
