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
crc32_context
)
;
}
struct
crc32_context
{
int
val
;
int
crc32_context
;
}
;
struct
crc32_context
val
;
const
short
func_10
(
unsigned
)
;
unsigned
func_12
(
unsigned
short
,
unsigned
,
unsigned
,
struct
crc32_context
,
unsigned
)
;
struct
crc32_context
l_52
(
unsigned
,
unsigned
,
unsigned
,
unsigned
short
)
;
unsigned
func_1
(
)
{
func_10
(
crc32_context
)
;
func_12
(
sizeof
val
,
crc32_context
,
crc32_context
,
val
,
crc32_context
)
;
return
val
.
val
;
}
const
short
func_10
(
unsigned
p_11
)
{
val
=
l_52
(
sizeof
val
,
3
,
crc32_context
,
sizeof
val
)
;
return
4
;
}
unsigned
func_12
(
unsigned
short
p_13
,
unsigned
p_14
,
unsigned
p_15
,
struct
crc32_context
p_16
,
unsigned
p_17
)
{
val
=
val
;
return
crc32_context
;
}
struct
crc32_context
l_52
(
unsigned
p_29
,
unsigned
p_30
,
unsigned
p_31
,
unsigned
short
p_32
)
{
struct
crc32_context
l_52
=
{
1L
}
;
return
l_52
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
