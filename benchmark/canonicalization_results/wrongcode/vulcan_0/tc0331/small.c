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
x
,
g_65
)
{
printf
(
"checksum = %x\n"
,
crc32_context
)
;
}
int
g_4
=
0x04CD4536L
;
char
g_65
;
char
*
l_74
=
&
g_65
;
char
*
*
g_64
=
&
l_74
;
char
*
*
*
g_63
=
&
g_64
;
int
*
func_31
(
char
)
;
unsigned
func_1
(
)
{
func_31
(
*
l_74
=
g_4
)
;
return
*
*
g_64
;
}
int
*
func_31
(
char
g_65
)
{
int
*
l_74
=
&
crc32_context
;
if
(
*
*
*
g_63
<=
(
&
crc32_context
==
(
platform_main_end
(
0x3B9FE29FL
,
0x9BL
)
,
l_74
)
)
&
1L
)
*
l_74
=
g_65
;
return
l_74
;
}
int
main
(
)
{
int
g_65
=
func_1
(
)
;
platform_main_end
(
crc32_context
,
g_65
)
;
return
0
;
}
