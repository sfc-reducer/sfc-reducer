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
char
safe_add_func_int8_t_s_s
(
si1
,
func_1
)
{
return
-
si1
;
}
int
si1
;
void
platform_main_end
(
func_1
,
l_601
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
static
unsigned
*
x
=
&
si1
;
unsigned
func_1
(
)
{
unsigned
*
*
l_601
=
&
x
;
*
x
=
safe_add_func_int8_t_s_s
(
*
l_601
==
x
,
0x47L
)
;
return
*
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
si1
,
si1
)
;
return
0
;
}
