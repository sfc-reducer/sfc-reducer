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
si1
-
si2
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
vname
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
val
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
short
si2
[
]
;
unsigned
func_1
(
)
{
unsigned
char
*
*
*
*
val
;
unsigned
char
*
*
*
*
*
l_1316
=
&
val
;
unsigned
char
*
*
*
*
*
l_1319
=
&
val
;
si2
[
5
]
=
safe_sub_func_int32_t_s_s
(
l_1316
!=
l_1319
,
1
)
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
;
int
val
=
func_1
(
)
;
for
(
crc32_context
=
0
;
crc32_context
<
6
;
crc32_context
++
)
transparent_crc
(
si2
[
crc32_context
]
,
"g_99[i]"
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
