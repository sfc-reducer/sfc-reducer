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
g_92
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
g_92
;
const
int
func_2
(
unsigned
char
,
int
,
short
,
short
)
;
int
func_53
(
int
,
unsigned
short
,
unsigned
,
unsigned
short
,
char
)
;
int
func_1
(
)
{
return
func_2
(
g_92
,
g_92
,
g_92
,
g_92
)
;
}
const
int
func_2
(
unsigned
char
g_92
,
int
p_4
,
short
p_5
,
short
p_6
)
{
const
unsigned
short
l_847
=
65535UL
;
if
(
p_5
>=
l_847
)
func_53
(
l_847
,
l_847
,
l_847
,
l_847
,
l_847
)
;
return
l_847
;
}
int
func_53
(
int
p_54
,
unsigned
short
p_55
,
unsigned
p_56
,
unsigned
short
p_57
,
char
p_58
)
{
return
g_92
++
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
g_92
,
g_92
)
;
return
0
;
}
