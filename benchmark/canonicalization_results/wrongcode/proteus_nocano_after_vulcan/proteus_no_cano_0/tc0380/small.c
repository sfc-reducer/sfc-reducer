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
static
short
safe_add_func_int16_t_s_s
(
g_269
,
p_11
)
{
return
p_11
++
?
p_11
:
p_11
++
;
}
static
unsigned
safe_mod_func_uint32_t_u_u
(
ui1
,
g_269
)
{
return
ui1
?
ui1
:
g_269
;
}
int
g_269
;
void
platform_main_end
(
x
,
p_11
)
{
printf
(
"checksum = %x\n"
,
p_11
)
;
}
int
ui1
=
1L
;
union
U1
*
g_313
;
int
*
g_453
=
&
ui1
;
static
char
func_10
(
unsigned
short
)
;
unsigned
func_1
(
)
{
func_10
(
safe_mod_func_uint32_t_u_u
(
ui1
,
ui1
)
)
;
return
g_269
;
}
char
func_10
(
unsigned
short
ui1
)
{
int
*
*
l_580
=
&
g_453
;
union
U1
*
*
l_581
=
&
g_313
;
if
(
(
&
g_313
==
l_581
)
>=
safe_add_func_int16_t_s_s
(
*
g_453
,
*
*
l_580
)
)
{
int
*
l_626
=
&
g_269
;
*
l_626
|=
ui1
;
}
return
ui1
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
ui1
,
g_269
)
;
return
0
;
}
