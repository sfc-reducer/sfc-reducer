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
char
safe_add_func_uint8_t_u_u
(
x
,
ui2
)
{
return
x
;
}
void
platform_main_end
(
x
,
f1
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
union
U0
{
signed
si2
:
9
,
f2
;
}
;
char
si2
;
int
func_1
(
)
{
short
l_10
=
0x5792L
;
union
U0
f1
=
{
0x89EC0021L
}
;
f1
.
si2
=
f1
.
f2
*=
0xDBF2L
;
si2
=
safe_add_func_uint8_t_u_u
(
l_10
,
0x3A1EL
)
<=
f1
.
si2
>=
1UL
;
return
l_10
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
si2
,
si2
)
;
return
0
;
}
