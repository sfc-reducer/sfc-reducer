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
ui1
,
g_157
)
{
printf
(
"checksum = %x\n"
,
ui1
)
;
}
int
g_35
;
unsigned
char
*
ui2
;
static
unsigned
char
*
*
g_156
=
&
ui2
;
int
func_1
(
)
{
int
*
g_157
=
&
g_35
;
unsigned
char
*
*
*
l_969
=
&
g_156
;
unsigned
l_970
=
2UL
;
*
g_157
^=
l_970
+=
*
l_969
!=
&
ui2
;
return
*
g_157
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
g_35
,
g_35
)
;
return
0
;
}
