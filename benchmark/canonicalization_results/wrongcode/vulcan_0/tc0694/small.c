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
x
,
ui2
)
{
return
ui2
+
ui2
;
}
void
platform_main_end
(
x
,
safe_add_func_uint32_t_u_u
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
int
func_1
(
)
{
int
*
ui2
=
&
x
;
*
ui2
|=
safe_add_func_uint32_t_u_u
(
x
,
&
x
==
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
