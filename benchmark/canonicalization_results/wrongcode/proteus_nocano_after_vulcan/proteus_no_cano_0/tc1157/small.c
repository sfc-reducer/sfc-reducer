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
func_34
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
func_1
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
val
{
short
val
;
short
crc32_context
;
}
;
struct
val
val
;
static
unsigned
short
func_30
(
int
,
int
,
unsigned
char
)
;
static
int
p_35
(
struct
val
,
unsigned
,
unsigned
char
)
;
static
unsigned
func_1
(
)
{
return
func_30
(
crc32_context
,
crc32_context
,
crc32_context
)
;
}
unsigned
short
func_30
(
int
p_31
,
int
p_32
,
unsigned
char
p_33
)
{
struct
val
val
=
{
0xFCBCL
}
;
p_35
(
val
,
crc32_context
,
crc32_context
)
;
return
sizeof
val
;
}
int
p_35
(
struct
val
p_35
,
unsigned
p_36
,
unsigned
char
p_37
)
{
val
=
p_35
;
val
=
val
;
return
7
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
"g_119.f1"
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
