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
g_422
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
l_411
{
signed
f0
;
}
;
static
unsigned
g_16
=
0x6673E7EDL
;
union
l_411
g_100
[
]
;
union
l_411
*
g_410
;
int
*
g_413
;
char
l_411
;
unsigned
char
func_10
(
unsigned
short
,
char
,
short
,
int
*
,
int
*
)
;
unsigned
short
func_17
(
)
;
char
func_1
(
)
{
int
*
l_414
[
2
]
;
l_414
[
l_411
]
=
0
;
func_10
(
g_16
^
func_17
(
)
,
l_411
,
1
,
g_413
,
l_414
[
1
]
)
;
return
2
;
}
unsigned
char
func_10
(
unsigned
short
p_11
,
char
p_12
,
short
p_13
,
int
*
p_14
,
int
*
p_15
)
{
l_411
=
p_11
;
return
l_411
;
}
unsigned
short
func_17
(
)
{
int
l_411
=
g_100
==
(
g_410
=
g_100
)
;
return
l_411
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
l_411
,
"g_422"
,
l_411
)
;
platform_main_end
(
crc32_context
,
l_411
)
;
return
0
;
}
