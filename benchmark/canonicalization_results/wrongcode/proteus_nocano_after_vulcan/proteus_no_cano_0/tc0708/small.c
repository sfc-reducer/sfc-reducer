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
crc32_context
)
{
printf
(
"checksum = %x\n"
,
x
)
;
}
struct
p_61
{
signed
g_26
:
12
;
char
crc32_context
;
unsigned
:
9
;
unsigned
val
:
16
;
}
;
struct
val
{
signed
val
;
}
;
struct
S3
{
struct
p_61
val
;
}
;
struct
crc32_context
{
char
val
;
}
;
struct
val
val
;
struct
S3
g_87
=
{
4294967290UL
}
;
struct
val
func_55
(
int
,
struct
crc32_context
,
unsigned
char
,
short
)
;
short
func_60
(
struct
p_61
,
int
)
;
int
func_1
(
)
{
struct
crc32_context
l_599
=
{
33
}
;
return
func_55
(
sizeof
val
,
l_599
,
sizeof
func_1
,
sizeof
val
)
,
0x6EEFL
;
}
struct
val
func_55
(
int
p_56
,
struct
crc32_context
p_57
,
unsigned
char
p_58
,
short
p_59
)
{
func_60
(
g_87
.
val
,
sizeof
val
)
;
return
val
;
}
short
func_60
(
struct
p_61
p_61
,
int
p_62
)
{
return
val
.
val
=
p_61
.
val
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
val
,
"g_26.f5"
,
crc32_context
)
;
platform_main_end
(
crc32_context
,
print_hash_value
)
;
return
0
;
}
