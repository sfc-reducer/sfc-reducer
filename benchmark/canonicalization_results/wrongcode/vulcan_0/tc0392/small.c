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
transparent_crc
)
{
crc32_context
+=
val
;
}
void
l_13
(
transparent_crc
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
struct
S1
{
unsigned
f3
;
}
val
;
unsigned
func_1
(
)
{
struct
S1
l_13
[
]
[
2
]
=
{
1
}
;
val
=
l_13
[
1
]
[
0
]
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
transparent_crc
(
val
.
f3
,
"g_27.f3"
,
crc32_context
)
;
l_13
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
