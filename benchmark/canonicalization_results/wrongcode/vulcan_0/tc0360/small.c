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
l_5
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
x
;
static
long
g_221
=
7L
;
long
func_1
(
)
{
int
*
l_3
=
&
x
;
int
*
*
platform_main_end
=
&
l_3
;
int
*
printf
=
&
x
;
*
printf
=
*
platform_main_end
!=
printf
^
g_221
;
return
x
;
}
int
main
(
)
{
int
x
=
func_1
(
)
;
platform_main_end
(
x
,
x
)
;
return
0
;
}
