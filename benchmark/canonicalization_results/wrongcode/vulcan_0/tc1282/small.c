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
g_691
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
union
U0
{
int
f0
;
}
;
static
const
int
*
f0
=
&
crc32_context
;
unsigned
func_1
(
)
{
union
U0
platform_main_end
=
{
4L
}
;
int
*
printf
=
&
crc32_context
;
*
printf
=
platform_main_end
.
f0
;
*
printf
=
*
f0
;
return
1
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
crc32_context
,
crc32_context
)
;
return
0
;
}
