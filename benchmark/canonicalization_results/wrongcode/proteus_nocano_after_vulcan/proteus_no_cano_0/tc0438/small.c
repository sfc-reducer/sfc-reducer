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
ui2
)
{
printf
(
"checksum = %x\n"
,
ui2
)
;
}
unsigned
g_688
;
unsigned
short
*
g_854
;
unsigned
short
*
*
g_853
=
&
g_854
;
char
func_168
(
int
,
unsigned
char
)
;
unsigned
func_1
(
)
{
return
func_168
(
g_688
,
g_688
)
;
}
char
func_168
(
int
p_169
,
unsigned
char
p_170
)
{
int
l_181
=
0x99EAD792L
;
short
l_196
;
int
*
l_843
=
&
g_688
;
*
l_843
=
-
(
&
l_196
==
(
*
g_853
=
&
l_196
)
)
;
return
l_181
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
g_688
,
g_688
)
;
return
0
;
}
