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
x
,
i
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
val
[
]
;
int
func_1
(
)
{
return
crc32_context
++
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
5
;
crc32_context
++
)
++
val
[
crc32_context
]
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
