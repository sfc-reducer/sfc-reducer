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
g_45
,
crc32_context
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
*
g_45
=
&
crc32_context
;
short
g_73
;
unsigned
func_37
(
)
{
int
*
*
l_61
=
&
g_45
;
int
l_70
=
0xC717898AL
;
short
*
crc32_context
=
&
g_73
;
*
g_45
=
crc32_context
!=
&
g_73
^
l_70
;
return
*
*
l_61
;
}
int
main
(
)
{
int
crc32_context
=
func_37
(
)
;
platform_main_end
(
crc32_context
,
crc32_context
)
;
return
0
;
}
