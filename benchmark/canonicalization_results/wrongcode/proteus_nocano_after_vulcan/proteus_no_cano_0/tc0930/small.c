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
int
crc32_context
;
void
platform_main_end
(
g_359
,
l_733
)
{
printf
(
"checksum = %x\n"
,
g_359
)
;
}
short
g_96
;
unsigned
char
*
g_170
;
short
*
g_360
=
&
g_96
;
unsigned
g_359
;
char
func_29
(
char
,
int
,
unsigned
short
,
unsigned
short
)
;
unsigned
func_1
(
)
{
return
func_29
(
g_96
,
g_96
,
*
g_360
,
sizeof
g_359
)
;
}
char
func_29
(
char
g_360
,
int
func_29
,
unsigned
short
g_96
,
unsigned
short
func_1
)
{
int
*
l_733
=
&
crc32_context
;
unsigned
char
*
*
l_782
=
&
g_170
;
*
l_733
=
func_1
+=
&
g_170
==
l_782
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
func_1
(
)
;
platform_main_end
(
crc32_context
,
g_96
)
;
return
0
;
}
