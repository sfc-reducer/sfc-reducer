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
void
platform_main_end
(
x
,
l_63
)
{
printf
(
"checksum = %x\n"
,
l_63
)
;
}
short
g_37
;
int
x
;
int
*
g_243
;
short
*
func_34
(
)
;
int
*
func_50
(
short
,
int
,
unsigned
,
int
)
;
unsigned
func_59
(
short
*
,
unsigned
,
short
*
)
;
char
func_1
(
)
{
func_34
(
)
;
return
g_37
;
}
short
*
func_34
(
)
{
short
*
g_243
=
&
g_37
;
func_50
(
func_59
(
g_243
,
g_37
,
g_243
)
,
g_37
,
g_37
,
g_37
)
;
return
func_1
;
}
int
*
func_50
(
short
p_51
,
int
p_52
,
unsigned
p_53
,
int
p_54
)
{
int
*
l_521
=
&
x
;
--
*
l_521
;
return
func_1
;
}
unsigned
func_59
(
short
*
p_60
,
unsigned
p_61
,
short
*
p_62
)
{
int
*
*
l_512
=
&
g_243
;
x
=
l_512
!=
&
g_243
;
return
g_37
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
g_37
,
x
)
;
return
0
;
}
