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
-
ui1
;
}
void
platform_main_end
(
x
,
func_49
)
{
printf
(
"checksum = %x\n"
,
func_49
)
;
}
char
x
;
short
ui1
;
unsigned
func_1
(
)
{
char
*
ui2
=
&
x
;
x
=
safe_mul_func_uint8_t_u_u
(
ui2
==
&
x
,
ui1
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
