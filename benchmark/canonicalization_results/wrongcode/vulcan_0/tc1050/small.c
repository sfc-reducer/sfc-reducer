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
ui2
;
}
void
platform_main_end
(
x
,
g_595
)
{
printf
(
"checksum = %x\n"
,
g_595
)
;
}
char
g_14
;
char
*
g_595
=
&
g_14
;
const
char
*
*
g_577
;
short
ui2
;
char
*
*
func_2
(
unsigned
char
,
const
char
*
*
)
;
short
func_1
(
)
{
func_2
(
*
g_595
,
g_577
)
;
return
ui2
;
}
char
*
*
func_2
(
unsigned
char
p_3
,
const
char
*
*
p_4
)
{
char
*
*
l_584
=
&
g_595
;
short
*
l_594
=
&
ui2
;
*
l_594
|=
l_584
==
&
g_595
|
safe_mul_func_uint8_t_u_u
(
0x6792L
,
0xACL
)
;
return
g_595
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
ui2
,
ui2
)
;
return
0
;
}
