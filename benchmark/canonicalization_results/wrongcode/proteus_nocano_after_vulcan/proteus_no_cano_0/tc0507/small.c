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
g_76
)
{
printf
(
"checksum = %x\n"
,
g_76
)
;
}
short
g_6
;
int
ui1
;
unsigned
func_9
(
char
,
short
,
unsigned
short
)
;
int
*
func_84
(
int
*
,
int
,
unsigned
)
;
int
func_1
(
)
{
return
func_9
(
g_6
,
g_6
,
g_6
)
;
}
unsigned
func_9
(
char
p_10
,
short
p_11
,
unsigned
short
p_12
)
{
char
*
l_3526
=
&
p_10
;
func_84
(
&
ui1
,
&
p_10
!=
l_3526
,
g_6
)
;
return
g_6
;
}
int
*
func_84
(
int
*
p_85
,
int
p_86
,
unsigned
p_87
)
{
unsigned
x
=
0x04L
;
if
(
--
p_86
)
*
p_85
|=
p_86
/=
x
;
return
&
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
g_6
,
ui1
)
;
return
0
;
}
