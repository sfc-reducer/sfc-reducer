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
safe_add_func_uint8_t_u_u
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
x
,
g_142
)
{
printf
(
"checksum = %x\n"
,
x
)
;
}
int
x
;
static
int
*
ui1
=
&
x
;
static
short
func_1
(
)
{
int
*
*
ui2
=
&
ui1
;
int
*
*
*
l_966
=
&
ui2
;
*
ui1
=
safe_add_func_uint8_t_u_u
(
255UL
,
*
*
l_966
!=
*
ui2
)
;
return
x
;
}
int
main
(
)
{
int
x
=
func_1
(
)
;
platform_main_end
(
x
,
x
)
;
return
0
;
}
