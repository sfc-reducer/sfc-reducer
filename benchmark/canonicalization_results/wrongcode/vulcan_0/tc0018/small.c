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
g_67
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
g_75
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
val
{
unsigned
f7
;
}
;
struct
S1
{
struct
val
f1
;
}
;
struct
S3
{
struct
S1
f4
;
signed
val
;
}
;
struct
val
g_57
;
struct
S3
g_67
;
int
val
=
1L
;
static
const
int
*
g_74
=
&
val
;
unsigned
char
func_51
(
unsigned
char
*
,
char
,
struct
val
,
unsigned
char
*
,
unsigned
short
)
;
char
func_1
(
)
{
char
*
l_40
=
0
;
char
l_789
=
func_51
(
l_40
,
val
,
g_57
,
l_40
,
val
)
;
return
val
;
}
unsigned
char
func_51
(
unsigned
char
*
p_52
,
char
p_53
,
struct
val
p_54
,
unsigned
char
*
p_55
,
unsigned
short
p_56
)
{
for
(
crc32_context
=
14
;
crc32_context
<=
21
;
crc32_context
++
)
{
int
*
l_84
=
&
val
;
g_67
.
val
=
*
g_74
;
*
l_84
=
0
;
}
return
g_67
.
f4
.
f1
.
f7
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
g_67
.
val
,
"g_67.f6"
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
