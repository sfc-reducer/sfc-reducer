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
g_270
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
g_270
;
int
*
x
=
&
g_270
;
static
int
*
const
*
g_462
=
&
x
;
unsigned
func_1
(
)
{
int
l_492
;
int
*
*
g_270
=
&
x
;
*
g_270
=
&
l_492
;
*
g_270
=
*
g_462
;
*
g_270
=
&
l_492
;
*
*
g_462
=
0xA9L
;
return
l_492
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
g_270
,
g_270
)
;
return
0
;
}
