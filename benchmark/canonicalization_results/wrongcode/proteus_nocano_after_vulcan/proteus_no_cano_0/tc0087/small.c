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
g_219
,
l_722
)
{
printf
(
"checksum = %x\n"
,
g_219
)
;
}
int
l_722
;
static
const
int
*
g_219
=
&
l_722
;
char
func_1
(
)
{
int
*
printf
=
&
l_722
;
l_722
=
27
;
*
printf
=
*
g_219
;
return
l_722
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
l_722
,
l_722
)
;
return
0
;
}
