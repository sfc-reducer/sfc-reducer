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
g_8
)
{
printf
(
"checksum = %x\n"
,
g_8
)
;
}
int
x
;
short
g_52
;
unsigned
char
func_46
(
char
,
int
*
)
;
int
func_11
(
)
{
return
func_46
(
0
,
&
x
)
;
}
unsigned
char
func_46
(
char
p_47
,
int
*
p_48
)
{
return
*
p_48
=
-
(
p_48
==
&
x
)
;
}
int
main
(
)
{
func_11
(
)
;
platform_main_end
(
g_52
,
x
)
;
return
0
;
}
