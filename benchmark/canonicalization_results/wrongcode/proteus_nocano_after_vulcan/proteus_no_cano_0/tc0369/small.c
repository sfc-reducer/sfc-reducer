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
S0
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
l_459
)
{
printf
(
"checksum = %x\n"
,
l_459
)
;
}
struct
print_hash_value
{
short
f0
;
unsigned
crc32_context
;
int
g_256
;
short
print_hash_value
;
unsigned
g_83
;
}
;
struct
print_hash_value
val
;
int
*
print_hash_value
;
int
*
func_10
(
int
*
,
int
*
,
unsigned
char
,
unsigned
)
;
static
int
func_1
(
)
{
func_10
(
&
crc32_context
,
print_hash_value
,
crc32_context
,
crc32_context
)
;
return
crc32_context
;
}
int
*
func_10
(
int
*
p_11
,
int
*
p_12
,
unsigned
char
p_13
,
unsigned
p_14
)
{
struct
print_hash_value
l_458
=
{
0xA776L
}
;
struct
print_hash_value
*
crc32_context
=
&
val
;
*
crc32_context
=
l_458
;
*
crc32_context
=
*
crc32_context
;
return
platform_main_end
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
val
.
f0
,
"g_83.f0"
,
print_hash_value
)
;
platform_main_end
(
print_hash_value
,
crc32_context
)
;
return
0
;
}
