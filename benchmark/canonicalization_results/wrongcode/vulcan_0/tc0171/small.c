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
safe_mul_func_int8_t_s_s
(
si1
,
si2
)
{
return
127
/
si1
/
si1
;
}
void
platform_main_end
(
x
,
si1
)
{
printf
(
"checksum = %x\n"
,
si1
)
;
}
int
si1
=
1L
;
static
const
int
*
g_192
=
&
si1
;
int
func_28
(
)
;
short
func_1
(
)
{
int
*
l_361
=
&
si1
;
func_28
(
)
;
*
l_361
=
*
g_192
;
return
*
l_361
;
}
int
func_28
(
)
{
int
*
l_217
=
&
si1
;
unsigned
si1
=
*
l_217
=
0L
;
safe_mul_func_int8_t_s_s
(
si1
,
*
g_192
)
;
return
si1
;
}
int
main
(
)
{
int
print_hash_value
=
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
