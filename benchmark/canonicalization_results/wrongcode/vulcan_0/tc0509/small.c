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
l_95
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
g_9
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
l_95
{
unsigned
l_95
;
unsigned
l_96
;
signed
crc32_context
;
signed
g_92
;
signed
:
28
;
}
;
union
crc32_context
{
signed
l_95
;
}
;
int
l_95
;
union
crc32_context
g_33
;
union
crc32_context
g_77
[
]
[
9
]
;
struct
l_95
val
=
{
526
}
;
volatile
struct
l_95
g_94
;
static
unsigned
short
func_26
(
int
*
,
int
)
;
static
int
*
func_42
(
union
crc32_context
,
unsigned
)
;
static
struct
l_95
func_48
(
unsigned
,
unsigned
char
,
unsigned
char
,
int
*
)
;
static
union
crc32_context
func_1
(
)
{
func_26
(
&
l_95
,
0x2E63372585FAFE44LL
)
;
return
g_77
[
0
]
[
2
]
;
}
unsigned
short
func_26
(
int
*
p_27
,
int
p_28
)
{
func_42
(
g_33
,
1UL
)
;
return
l_95
;
}
int
*
func_42
(
union
crc32_context
p_43
,
unsigned
p_44
)
{
int
*
l_54
[
]
=
{
&
l_95
}
;
struct
l_95
*
crc32_context
=
&
val
;
*
crc32_context
=
func_48
(
l_95
,
l_95
,
l_95
,
l_54
[
3
]
)
;
*
crc32_context
=
*
crc32_context
;
return
&
l_95
;
}
struct
l_95
func_48
(
unsigned
p_49
,
unsigned
char
p_50
,
unsigned
char
p_51
,
int
*
p_52
)
{
struct
l_95
*
l_95
=
&
g_94
;
return
*
l_95
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
val
.
l_95
,
"g_92.f0"
,
l_95
)
;
platform_main_end
(
crc32_context
,
l_95
)
;
return
0
;
}
