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
unsigned
val
;
unsigned
*
g_979
=
&
val
;
unsigned
*
*
g_978
=
&
g_979
;
short
func_1
(
)
{
unsigned
val
[
8
]
;
int
crc32_context
;
for
(
crc32_context
=
0
;
crc32_context
<
8
;
crc32_context
++
)
*
*
g_978
+=
val
[
crc32_context
]
;
return
*
g_979
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
func_1
(
)
;
platform_main_end
(
printf
,
printf
)
;
return
0
;
}
