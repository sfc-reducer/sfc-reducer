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
safe_add_func_uint16_t_u_u
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
g_1629
)
{
printf
(
"checksum = %x\n"
,
g_1629
)
;
}
short
g_108
;
int
*
*
g_1629
;
int
*
*
*
g_382
[
]
;
static
int
g_1134
=
0xFADB8273L
;
short
*
ui2
=
&
g_108
;
short
*
*
g_1628
=
&
ui2
;
short
func_1
(
)
{
*
ui2
=
safe_add_func_uint16_t_u_u
(
&
g_1629
!=
(
*
g_382
=
&
g_1629
)
,
g_1134
)
;
return
*
*
g_1628
;
}
int
main
(
)
{
int
g_1629
=
func_1
(
)
;
platform_main_end
(
g_1629
,
g_1629
)
;
return
0
;
}
