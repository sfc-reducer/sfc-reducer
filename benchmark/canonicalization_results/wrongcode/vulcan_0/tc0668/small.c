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
safe_sub_func_int32_t_s_s
(
si1
,
si2
)
{
return
(
si1
^
si2
)
&
2147483647
;
}
int
crc32_context
;
void
transparent_crc
(
unsigned
val
,
char
*
func_2
,
int
si2
)
{
crc32_context
+=
val
;
}
void
platform_main_end
(
x
,
si2
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
unsigned
si2
=
0x7E789185L
;
char
*
*
val
;
short
func_2
(
unsigned
short
,
unsigned
)
;
unsigned
func_1
(
)
{
func_2
(
crc32_context
,
crc32_context
)
;
return
crc32_context
;
}
short
func_2
(
unsigned
short
crc32_context
,
unsigned
func_2
)
{
char
*
*
*
l_437
=
&
val
;
char
*
*
*
l_451
=
&
val
;
char
*
*
*
*
l_450
=
&
l_451
;
if
(
safe_sub_func_int32_t_s_s
(
l_437
==
*
l_450
,
0xEEBCE1E5L
)
)
si2
=
crc32_context
;
return
crc32_context
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
transparent_crc
(
si2
,
"g_321"
,
crc32_context
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
