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
safe_sub_func_int16_t_s_s
(
si1
,
si2
)
{
return
si1
-
si2
;
}
unsigned
short
safe_add_func_uint16_t_u_u
(
ui1
,
val
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
val
,
char
*
vname
,
int
ui1
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
val
{
char
val
;
}
;
const
short
val
=
1L
;
union
val
g_110
;
short
ui1
[
]
;
char
func_66
(
unsigned
,
union
val
)
;
int
func_1
(
)
{
func_66
(
val
,
g_110
)
;
return
val
;
}
char
func_66
(
unsigned
crc32_context
,
union
val
g_110
)
{
ui1
[
3
]
=
val
<
safe_add_func_uint16_t_u_u
(
safe_sub_func_int16_t_s_s
(
g_110
.
val
,
1
)
,
val
)
;
return
val
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
int
crc32_context
=
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
6
;
val
++
)
transparent_crc
(
ui1
[
val
]
,
"g_121[i]"
,
val
)
;
platform_main_end
(
crc32_context
,
val
)
;
return
0
;
}
