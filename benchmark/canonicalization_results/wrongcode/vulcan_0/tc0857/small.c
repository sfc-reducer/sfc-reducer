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
crc32_context
,
l_1297
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
g_237
=
4294967293UL
;
static
const
unsigned
*
g_297
=
&
g_237
;
static
const
unsigned
*
*
const
g_296
=
&
g_297
;
unsigned
func_1
(
)
{
int
*
printf
=
&
crc32_context
;
unsigned
*
crc32_context
=
&
g_237
;
*
crc32_context
=
*
printf
;
*
crc32_context
=
*
*
g_296
;
return
*
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
platform_main_end
(
crc32_context
,
g_237
)
;
return
0
;
}
