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
safe_lshift_func_int8_t_s_s
(
left
,
right
)
{
return
left
;
}
unsigned
safe_sub_func_uint8_t_u_u
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
p_8
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
int
g_18
=
1L
;
char
g_20
;
char
*
val
=
&
g_20
;
char
*
*
g_498
=
&
val
;
static
unsigned
g_1605
=
65531UL
;
char
func_6
(
int
,
short
,
char
,
unsigned
,
unsigned
short
)
;
short
func_13
(
unsigned
char
)
;
unsigned
func_1
(
)
{
func_6
(
crc32_context
,
*
val
,
crc32_context
,
g_1605
,
*
*
g_498
)
;
return
*
val
;
}
char
func_6
(
int
p_7
,
short
val
,
char
p_9
,
unsigned
crc32_context
,
unsigned
short
p_11
)
{
short
*
l_1979
;
short
*
*
l_1978
=
&
l_1979
;
int
*
l_2018
=
&
g_18
;
if
(
safe_lshift_func_int8_t_s_s
(
safe_sub_func_uint8_t_u_u
(
(
*
l_1978
=
&
val
)
==
&
val
,
func_13
(
*
l_2018
)
)
,
1
)
)
*
l_2018
&=
*
l_1979
;
return
*
*
g_498
;
}
short
func_13
(
unsigned
char
p_14
)
{
return
g_1605
;
}
int
main
(
)
{
int
crc32_context
=
func_1
(
)
;
transparent_crc
(
g_18
,
"g_18"
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
