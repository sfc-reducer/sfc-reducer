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
crc32_context
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
int
*
g_135
;
int
*
*
print_hash_value
=
&
g_135
;
char
func_1
(
)
{
int
crc32_context
=
0x7FC3E3A7L
;
*
print_hash_value
=
&
crc32_context
;
crc32_context
<<=
*
*
print_hash_value
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
