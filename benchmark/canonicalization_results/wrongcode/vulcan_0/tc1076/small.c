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
static
long
safe_sub_func_uint64_t_u_u
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
platform_main_end
(
g_511
,
ui2
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
static
int
g_511
=
2L
;
int
*
g_1376
=
&
crc32_context
;
short
func_1
(
)
{
int
*
ui2
=
&
g_511
;
short
crc32_context
[
3
]
;
*
g_1376
=
safe_sub_func_uint64_t_u_u
(
crc32_context
==
&
crc32_context
[
1
]
,
*
ui2
)
;
return
*
ui2
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
