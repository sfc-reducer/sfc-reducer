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
g_573
,
g_900
)
{
printf
(
"checksum = %x\n"
,
g_573
)
;
}
union
U2
{
int
g_900
;
}
;
int
*
g_282
;
union
U2
U2
;
unsigned
short
*
g_900
;
int
*
*
g_1104
=
&
g_282
;
int
func_1
(
)
{
unsigned
l_1229
=
7UL
;
int
*
l_1236
=
&
U2
.
g_900
;
unsigned
short
*
*
l_1257
=
&
g_900
;
*
g_1104
=
l_1236
;
*
*
g_1104
^=
&
g_900
==
l_1257
|
l_1229
;
return
U2
.
g_900
;
}
int
main
(
)
{
int
g_900
=
func_1
(
)
;
platform_main_end
(
g_900
,
g_900
)
;
return
0
;
}
