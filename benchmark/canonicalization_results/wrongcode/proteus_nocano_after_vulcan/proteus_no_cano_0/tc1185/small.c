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
g_799
,
l_804
)
{
printf
(
"checksum = %x\n"
,
g_799
)
;
}
long
long
*
g_582
;
static
long
long
*
*
g_581
=
&
g_582
;
unsigned
l_804
;
int
func_1
(
)
{
int
*
l_778
=
&
l_804
;
long
long
*
*
*
printf
=
&
g_581
;
*
l_778
=
-
(
*
printf
==
&
g_582
)
;
return
l_804
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
l_804
,
l_804
)
;
return
0
;
}
