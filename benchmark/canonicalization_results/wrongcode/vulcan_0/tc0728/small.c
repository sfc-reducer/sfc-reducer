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
platform_main_end
,
l_6
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
static
int
l_6
=
0x8114768CL
;
int
func_1
(
)
{
int
*
printf
=
&
l_6
;
int
*
platform_main_end
=
&
crc32_context
;
*
platform_main_end
|=
printf
!=
&
l_6
|
*
printf
;
return
*
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
func_1
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
