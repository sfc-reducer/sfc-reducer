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
safe_add_func_uint32_t_u_u
(
ui1
,
ui2
)
{
return
ui1
+
ui2
;
}
void
platform_main_end
(
ui1
,
g_6
)
{
printf
(
"checksum = %x\n"
,
g_6
)
;
}
int
ui2
;
int
*
g_268
=
&
ui2
;
unsigned
func_1
(
)
{
struct
S1
*
*
g_6
;
struct
S1
*
*
*
l_595
=
&
g_6
;
*
g_268
=
safe_add_func_uint32_t_u_u
(
0x769800E8L
,
l_595
!=
&
g_6
)
;
return
ui2
;
}
int
main
(
)
{
int
g_6
=
func_1
(
)
;
platform_main_end
(
g_6
,
g_6
)
;
return
0
;
}
