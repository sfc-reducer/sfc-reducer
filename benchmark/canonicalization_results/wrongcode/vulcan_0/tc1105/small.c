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
ui1
*
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
g_390
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
val
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
U0
{
short
val
;
}
;
int
g_33
[
]
;
int
*
*
g_56
;
union
U0
g_390
;
unsigned
char
val
(
int
,
unsigned
short
)
;
int
*
*
func_50
(
short
)
;
unsigned
func_11
(
)
{
val
(
crc32_context
,
crc32_context
)
;
return
g_390
.
val
;
}
unsigned
char
val
(
int
p_25
,
unsigned
short
p_26
)
{
int
*
val
;
func_50
(
safe_mul_func_uint8_t_u_u
(
&
val
==
(
g_56
=
&
val
)
,
0xAFL
)
)
;
return
crc32_context
;
}
int
*
*
func_50
(
short
p_51
)
{
const
int
*
l_75
;
const
int
*
*
l_74
=
&
l_75
;
const
int
*
*
*
val
[
5
]
;
val
[
crc32_context
]
=
&
l_74
;
if
(
p_51
^
g_390
.
val
<=
2
)
;
else
*
g_33
=
*
*
*
*
val
;
return
0
;
}
int
main
(
)
{
int
crc32_context
;
int
print_hash_value
=
func_11
(
)
;
for
(
crc32_context
=
0
;
crc32_context
<
9
;
crc32_context
++
)
transparent_crc
(
g_33
[
crc32_context
]
,
"g_33[i]"
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
