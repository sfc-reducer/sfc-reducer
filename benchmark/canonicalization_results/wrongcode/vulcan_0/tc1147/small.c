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
g_58
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
vname
{
int
f0
;
int
vname
;
unsigned
crc32_context
;
short
func_6
;
unsigned
func_12
;
}
;
struct
vname
vname
;
int
f0
(
char
,
struct
vname
,
unsigned
short
)
;
int
val
(
unsigned
char
,
int
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
f0
(
val
(
crc32_context
,
crc32_context
,
crc32_context
)
,
vname
,
crc32_context
)
;
return
crc32_context
;
}
int
f0
(
char
p_7
,
struct
vname
p_8
,
unsigned
short
p_9
)
{
vname
=
vname
;
return
vname
.
f0
;
}
int
val
(
unsigned
char
p_13
,
int
p_14
,
unsigned
char
p_15
)
{
struct
vname
l_435
=
{
1L
}
;
vname
=
l_435
;
return
vname
.
f0
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
vname
.
f0
,
"g_58.f0"
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
