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
safe_add_func_int32_t_s_s
(
si1
,
si2
)
{
return
si1
+
si2
;
}
int
crc32_context
;
void
platform_main_end
(
si1
,
crc32_context
)
{
printf
(
"checksum = %x\n"
,
si1
)
;
}
short
si2
;
short
*
g_116
=
&
si2
;
short
*
*
g_115
=
&
g_116
;
unsigned
func_1
(
)
{
short
*
l_32
=
&
si2
;
int
*
si1
=
&
crc32_context
;
*
si1
=
l_32
!=
&
si2
;
*
si1
=
safe_add_func_int32_t_s_s
(
0x12CAL
,
*
si1
)
;
return
*
*
g_115
;
}
int
main
(
)
{
int
si2
=
func_1
(
)
;
platform_main_end
(
crc32_context
,
si2
)
;
return
0
;
}
