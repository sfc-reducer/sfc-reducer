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
func_1
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
struct
S0
{
unsigned
f8
;
}
;
struct
crc32_context
{
signed
f0
;
unsigned
f1
;
unsigned
f2
;
unsigned
f4
;
}
;
struct
S3
{
struct
S0
f0
;
struct
crc32_context
crc32_context
;
}
;
struct
S4
{
struct
S3
crc32_context
;
struct
S0
f4
;
}
;
struct
crc32_context
g_55
;
struct
S4
g_90
;
static
struct
S0
func_23
(
short
)
;
const
unsigned
char
func_30
(
struct
crc32_context
,
unsigned
char
,
unsigned
)
;
struct
crc32_context
func_34
(
)
;
const
struct
S0
func_38
(
unsigned
short
,
unsigned
char
,
short
)
;
unsigned
short
func_49
(
unsigned
short
)
;
static
struct
crc32_context
func_1
(
)
{
func_23
(
crc32_context
)
;
return
g_55
;
}
struct
S0
func_23
(
short
p_24
)
{
struct
S4
l_37
=
{
1UL
,
0x0341L
}
;
func_30
(
func_34
(
l_37
,
func_38
(
crc32_context
,
sizeof
g_55
,
sizeof
g_55
)
)
,
sizeof
func_1
,
5
)
;
return
g_90
.
crc32_context
.
f0
;
}
const
unsigned
char
func_30
(
struct
crc32_context
p_31
,
unsigned
char
p_32
,
unsigned
p_33
)
{
struct
crc32_context
*
l_134
=
&
g_55
;
*
l_134
=
p_31
;
func_49
(
0UL
)
;
return
p_33
;
}
struct
crc32_context
func_34
(
struct
S4
p_35
,
struct
S0
p_36
)
{
return
p_35
.
crc32_context
.
crc32_context
;
}
const
struct
S0
func_38
(
unsigned
short
p_39
,
unsigned
char
p_40
,
short
p_41
)
{
return
g_90
.
f4
;
}
unsigned
short
func_49
(
unsigned
short
p_50
)
{
struct
crc32_context
*
l_56
=
&
g_55
;
*
l_56
=
g_55
;
return
sizeof
g_55
;
}
int
main
(
)
{
func_1
(
)
;
transparent_crc
(
g_55
.
f0
,
"g_55.f0"
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
