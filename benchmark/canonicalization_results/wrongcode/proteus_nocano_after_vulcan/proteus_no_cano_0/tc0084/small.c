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
safe_mod_func_int16_t_s_s
(
si1
,
g_100
)
{
return
si1
&&
g_100
;
}
void
platform_main_end
(
x
,
g_100
)
{
printf
(
"checksum = %x\n"
,
g_100
)
;
}
int
g_2
;
int
x
;
int
func_70
(
int
)
;
int
func_1
(
)
{
int
*
l_720
=
&
g_2
;
g_2
++
;
l_720
--
;
func_70
(
x
)
;
return
*
l_720
;
}
int
func_70
(
g_2
)
{
int
*
l_116
=
&
x
;
*
l_116
|=
g_2
==
(
g_2
||
safe_mod_func_int16_t_s_s
(
*
l_116
,
*
l_116
)
)
;
return
g_2
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
g_2
,
x
)
;
return
0
;
}
