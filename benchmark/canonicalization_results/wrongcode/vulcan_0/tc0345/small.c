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
l_1927
,
l_20
)
{
printf
(
"checksum = %x\n"
,
l_20
)
;
}
unsigned
g_1187
;
char
*
*
g_1721
;
char
*
*
*
g_1922
;
unsigned
func_1
(
)
{
char
printf
=
5L
;
unsigned
*
l_20
=
&
g_1187
;
*
l_20
=
printf
^
(
g_1922
=
&
g_1721
)
!=
&
g_1721
;
return
*
l_20
;
}
int
main
(
)
{
int
l_20
=
func_1
(
)
;
platform_main_end
(
l_20
,
l_20
)
;
return
0
;
}
