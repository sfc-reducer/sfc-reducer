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
safe_lshift_func_int16_t_s_u
(
short
left
,
unsigned
right
)
{
return
left
<
0
?
left
:
left
<<
right
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
g_91
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
p_60
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
crc32_context
{
int
f0
;
}
;
unsigned
g_6
=
8UL
;
union
crc32_context
g_91
;
static
char
g_112
[
]
=
{
0xBCL
,
0xBCL
}
;
int
func_59
(
unsigned
,
unsigned
)
;
short
func_84
(
unsigned
char
,
union
crc32_context
,
int
,
char
)
;
union
crc32_context
func_1
(
)
{
if
(
func_59
(
2
,
g_112
[
1
]
)
)
;
return
g_91
;
}
int
func_59
(
unsigned
crc32_context
,
unsigned
p_61
)
{
for
(
;
;
crc32_context
=
4
)
if
(
safe_sub_func_uint8_t_u_u
(
func_84
(
crc32_context
,
g_91
,
crc32_context
,
crc32_context
)
&
p_61
,
3UL
)
)
{
func_84
(
p_61
,
g_91
,
5
,
crc32_context
)
;
return
crc32_context
;
}
}
short
func_84
(
unsigned
char
p_85
,
union
crc32_context
p_86
,
int
p_87
,
char
p_88
)
{
for
(
;
p_85
;
p_85
=
safe_sub_func_uint8_t_u_u
(
p_85
,
2
)
)
g_91
.
f0
=
safe_lshift_func_int16_t_s_u
(
g_6
,
5
)
;
return
g_112
[
5
]
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
transparent_crc
(
g_91
.
f0
,
"g_91.f0"
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
