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
transparent_crc
(
unsigned
val
,
char
*
platform_main_end
,
int
printf
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
g_58
,
platform_main_end
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
main
(
)
{
int
printf
,
crc32_context
;
for
(
&
printf
;
printf
<
10
;
printf
++
)
for
(
&
crc32_context
;
crc32_context
<
2
;
crc32_context
++
)
transparent_crc
(
crc32_context
,
"g_58[i][j][k]"
,
printf
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
