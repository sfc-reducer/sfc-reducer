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
func_4
,
l_9
)
{
printf
(
"checksum = %x\n"
,
l_9
)
;
}
unsigned
func_4
;
char
g_1346
;
int
*
f0
(
)
;
char
func_1
(
)
{
f0
(
func_4
)
;
return
g_1346
;
}
int
*
f0
(
)
{
int
*
f0
=
&
func_4
;
int
*
*
l_12
=
&
f0
;
*
f0
=
-
(
*
l_12
==
&
func_4
)
;
return
func_1
;
}
int
main
(
)
{
int
f0
=
func_1
(
)
;
platform_main_end
(
f0
,
func_4
)
;
return
0
;
}
