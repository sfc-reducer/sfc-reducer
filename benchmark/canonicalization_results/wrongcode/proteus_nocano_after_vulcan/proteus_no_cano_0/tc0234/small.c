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
func_1
,
g_971
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
int
*
*
*
l_1084
;
int
func_1
(
)
{
int
*
*
*
*
l_1083
=
&
l_1084
;
unsigned
g_971
=
2UL
;
int
*
*
*
*
l_1082
=
&
l_1084
;
int
*
l_1084
=
&
g_971
;
*
l_1084
=
l_1082
!=
l_1083
|
g_971
;
return
g_971
;
}
int
main
(
)
{
int
g_971
=
func_1
(
)
;
platform_main_end
(
g_971
,
g_971
)
;
return
0
;
}
