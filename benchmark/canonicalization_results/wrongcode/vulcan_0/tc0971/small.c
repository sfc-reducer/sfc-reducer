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
safe_mul_func_uint8_t_u_u
(
ui1
,
ui2
)
{
return
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
U0
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
l_138
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
l_48
{
int
f1
;
}
;
int
g_135
=
0xB24C01D5L
;
int
*
g_134
=
&
g_135
;
int
*
*
l_48
=
&
g_134
;
char
*
func_42
(
unsigned
,
union
l_48
,
unsigned
char
,
unsigned
,
unsigned
char
)
;
int
func_58
(
)
;
unsigned
func_1
(
)
{
union
l_48
l_48
=
{
0xE96F8F9EL
}
;
func_42
(
crc32_context
,
l_48
,
crc32_context
,
crc32_context
,
l_48
.
f1
)
;
return
crc32_context
;
}
char
*
func_42
(
unsigned
p_43
,
union
l_48
p_44
,
unsigned
char
p_45
,
unsigned
p_46
,
unsigned
char
p_47
)
{
func_58
(
)
;
return
l_48
;
}
int
func_58
(
p_59
)
{
int
*
crc32_context
=
&
g_135
;
int
*
*
*
l_371
=
&
l_48
;
*
*
*
l_371
=
(
l_371
==
&
l_48
)
<
safe_mul_func_uint8_t_u_u
(
*
crc32_context
,
*
crc32_context
)
;
return
*
crc32_context
;
}
char
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
g_135
,
"g_135"
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
