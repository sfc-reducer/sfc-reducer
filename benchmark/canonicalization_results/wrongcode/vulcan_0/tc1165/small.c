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
f0
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
j
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
val
{
short
vname
;
}
;
int
vname
[
]
[
2
]
;
const
unsigned
short
g_1678
=
0xA433L
;
union
val
val
;
int
func_2
(
unsigned
)
;
union
val
func_1
(
)
{
func_2
(
crc32_context
)
;
return
val
;
}
int
func_2
(
unsigned
p_3
)
{
vname
[
7
]
[
0
]
=
val
.
vname
<=
g_1678
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
val
;
func_1
(
)
;
for
(
;
crc32_context
<
8
;
crc32_context
++
)
for
(
val
=
0
;
val
<
2
;
val
++
)
transparent_crc
(
vname
[
crc32_context
]
[
val
]
,
"g_263[i][j]"
,
val
)
;
platform_main_end
(
crc32_context
,
val
)
;
return
0
;
}
