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
func_12
,
g_565
)
{
printf
(
"checksum = %x\n"
,
func_12
)
;
}
short
*
g_67
;
int
*
g_565
=
&
crc32_context
;
unsigned
func_12
(
)
{
short
*
*
crc32_context
=
&
g_67
;
int
printf
=
0xFEB82C09L
;
*
g_565
=
crc32_context
==
&
g_67
^
printf
;
return
printf
;
}
int
main
(
)
{
int
printf
=
func_12
(
)
;
platform_main_end
(
crc32_context
,
printf
)
;
return
0
;
}
