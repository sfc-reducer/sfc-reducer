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
main
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
val
(
g_1819
,
transparent_crc
)
{
printf
(
"checksum = %x\n"
,
g_1819
)
;
}
static
unsigned
g_1819
[
]
[
2
]
=
{
0UL
}
;
int
main
(
)
{
if
(
crc32_context
++
)
;
else
transparent_crc
(
g_1819
[
crc32_context
]
[
crc32_context
]
,
"g_1819[i][j]"
,
crc32_context
)
;
val
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
