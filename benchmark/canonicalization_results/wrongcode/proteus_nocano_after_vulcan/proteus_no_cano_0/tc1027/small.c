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
x
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
;
char
x
[
]
[
7
]
;
int
main
(
)
{
if
(
val
++
)
;
else
for
(
crc32_context
=
0
;
crc32_context
<
7
;
crc32_context
++
)
++
x
[
val
]
[
crc32_context
]
;
platform_main_end
(
val
,
val
)
;
return
0
;
}
