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
g_130
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
int
f2
;
}
;
struct
S1
{
char
f0
;
char
crc32_context
;
int
S0
;
unsigned
func_99
;
short
S1
;
}
;
struct
S1
S0
;
const
unsigned
char
func_19
(
unsigned
)
;
int
S1
(
struct
S0
,
int
)
;
unsigned
func_1
(
)
{
func_19
(
crc32_context
)
;
return
crc32_context
;
}
const
unsigned
char
func_19
(
unsigned
p_20
)
{
struct
S0
l_1849
=
{
4294967294UL
}
;
S1
(
l_1849
,
crc32_context
)
;
return
crc32_context
;
}
int
S1
(
struct
S0
p_100
,
int
p_101
)
{
struct
S1
l_1277
=
{
0x49L
}
;
S0
=
l_1277
;
S0
=
S0
;
return
p_100
.
f2
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
S0
.
f0
,
"g_130.f0"
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
