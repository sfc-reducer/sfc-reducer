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
vname
,
int
flag
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
func_1
)
{
printf
(
"checksum = %x\n"
,
x
)
;
}
char
g_9
;
int
main
(
)
{
for
(
;
~
g_9
;
g_9
++
)
transparent_crc
(
g_9
,
"g_183[i].f3"
,
g_9
)
;
platform_main_end
(
crc32_context
,
g_9
)
;
return
0
;
}
