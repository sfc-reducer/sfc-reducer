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
g_245
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
l_15
=
0xD2C87A75L
;
char
g_245
;
char
g_244
;
static
const
int
*
g_1493
=
&
l_15
;
int
func_8
(
short
)
;
unsigned
func_1
(
)
{
func_8
(
l_15
)
;
return
g_244
;
}
int
func_8
(
short
p_9
)
{
int
*
func_8
=
&
l_15
;
*
func_8
=
g_245
;
*
func_8
=
*
g_1493
;
return
*
g_1493
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
l_15
,
g_245
)
;
return
0
;
}
