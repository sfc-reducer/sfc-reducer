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
f0
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
f0
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
S0
{
char
f0
;
}
;
struct
S0
g_17
[
]
[
4
]
;
int
func_1
(
)
{
for
(
;
crc32_context
>=
-
29
;
crc32_context
--
)
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
;
int
val
=
func_1
(
)
;
for
(
;
val
;
val
++
)
for
(
crc32_context
=
0
;
crc32_context
<
4
;
crc32_context
++
)
transparent_crc
(
g_17
[
val
]
[
crc32_context
]
.
f0
,
"g_17[i][j].f0"
,
crc32_context
)
;
f0
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
