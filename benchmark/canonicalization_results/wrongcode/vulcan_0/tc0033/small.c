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
safe_sub_func_uint32_t_u_u
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
ui2
,
crc32_context
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
{
short
f3
;
}
g_46
;
char
func_36
(
)
{
int
*
ui2
;
int
*
*
l_78
=
&
ui2
;
unsigned
ui1
=
0x97151158L
;
crc32_context
=
safe_sub_func_uint32_t_u_u
(
&
ui2
!=
l_78
,
ui1
)
;
return
g_46
.
f3
;
}
int
main
(
)
{
func_36
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
