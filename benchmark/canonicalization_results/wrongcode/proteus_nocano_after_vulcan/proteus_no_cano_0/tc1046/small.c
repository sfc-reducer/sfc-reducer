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
func_2
,
g_47
)
{
printf
(
"checksum = %x\n"
,
g_47
)
;
}
int
g_47
;
unsigned
func_2
(
unsigned
,
short
)
;
unsigned
func_1
(
)
{
int
l_160
=
7L
;
func_2
(
l_160
,
1L
)
;
return
g_47
;
}
unsigned
func_2
(
unsigned
func_2
,
short
p_3
)
{
unsigned
*
l_183
=
&
func_2
;
unsigned
*
l_184
=
&
func_2
;
int
*
l_193
=
&
g_47
;
*
l_193
=
-
!
(
l_183
!=
l_184
)
;
return
g_47
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
g_47
,
g_47
)
;
return
0
;
}
