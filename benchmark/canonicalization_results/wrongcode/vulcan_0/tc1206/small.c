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
flag
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
g_73
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
f5
{
signed
crc32_context
;
signed
p_60
;
signed
f3
;
signed
f4
;
unsigned
f5
:
30
;
}
f5
;
struct
f5
func_30
(
)
;
static
int
func_58
(
unsigned
short
,
int
,
unsigned
,
int
)
;
unsigned
func_1
(
)
{
func_30
(
)
;
return
0
;
}
struct
f5
func_30
(
)
{
func_58
(
crc32_context
,
0xF867AF04BF912FF2LL
,
f5
.
f5
,
0x9786E709L
)
;
return
f5
;
}
int
func_58
(
unsigned
short
p_59
,
int
func_58
,
unsigned
p_61
,
int
p_62
)
{
if
(
func_58
)
for
(
;
crc32_context
>=
0
;
crc32_context
-=
1
)
{
struct
f5
l_75
=
l_75
;
f5
.
f5
=
l_75
.
f5
<=
(
f5
.
f5
=
func_58
)
;
}
else
{
struct
f5
l_161
[
8
]
[
5
]
;
f5
=
l_161
[
2
]
[
4
]
;
}
return
f5
.
f5
;
}
int
main
(
)
{
int
print_hash_value
=
func_1
(
)
;
transparent_crc
(
f5
.
f5
,
"g_73.f3"
,
crc32_context
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
