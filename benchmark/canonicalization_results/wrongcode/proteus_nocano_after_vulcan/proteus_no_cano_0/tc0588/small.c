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
l_1078
,
l_1065
)
{
printf
(
"checksum = %x\n"
,
l_1078
)
;
}
unsigned
g_17
;
short
func_1
(
)
{
int
l_1065
=
0x0D5D967BL
;
void
*
l_1064
=
&
g_17
;
void
*
printf
=
&
g_17
;
l_1065
|=
l_1064
==
printf
;
return
l_1065
;
}
int
main
(
)
{
int
l_1065
=
func_1
(
)
;
platform_main_end
(
l_1065
,
g_17
)
;
return
0
;
}
