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
crc32_context
)
{
return
si1
+
si1
;
}
int
crc32_context
;
void
platform_main_end
(
l_63
,
si1
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
char
g_51
;
char
*
l_63
=
&
g_51
;
int
*
*
si1
;
char
*
func_30
(
)
;
unsigned
char
func_47
(
char
*
,
short
)
;
char
func_1
(
)
{
func_30
(
)
;
return
*
l_63
;
}
char
*
func_30
(
)
{
int
*
*
*
l_457
=
&
si1
;
if
(
safe_add_func_int32_t_s_s
(
l_457
==
&
si1
,
9L
)
)
{
int
*
l_460
=
&
crc32_context
;
*
l_460
=
func_47
(
l_63
,
crc32_context
)
;
}
return
si1
;
}
unsigned
char
func_47
(
char
*
crc32_context
,
short
si1
)
{
unsigned
l_63
=
0xEDL
;
return
l_63
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
func_1
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
