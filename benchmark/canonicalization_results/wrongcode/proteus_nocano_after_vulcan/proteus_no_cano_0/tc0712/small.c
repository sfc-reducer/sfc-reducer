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
func_1
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
x
;
unsigned
*
g_195
;
int
func_1
(
)
{
int
*
printf
=
&
x
;
unsigned
*
*
l_477
=
&
g_195
;
int
l_475
=
0x87DE6A43L
;
unsigned
*
*
l_476
=
&
g_195
;
*
printf
=
l_475
|
l_476
==
l_477
;
return
*
printf
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
x
,
x
)
;
return
0
;
}
