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
S6
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
char
f0
;
char
f1
;
char
f2
;
}
;
struct
S1
{
int
crc32_context
;
int
g_131
;
short
l_114
;
short
f3
;
}
;
struct
S2
{
unsigned
crc32_context
;
int
g_131
;
short
l_114
;
long
S3
;
struct
S0
f4
;
char
f5
;
char
f6
;
}
;
struct
l_269
{
unsigned
crc32_context
;
}
;
struct
func_18
{
struct
l_269
l_114
;
}
;
struct
S7
{
struct
l_269
f7
;
struct
S1
f8
;
}
;
struct
S8
{
struct
func_18
crc32_context
;
unsigned
g_131
;
long
l_114
;
long
l_269
;
long
func_18
;
unsigned
S2
;
long
S3
;
struct
S2
f7
;
struct
S1
f8
;
}
;
struct
S7
g_131
;
int
func_15
(
struct
S2
,
unsigned
)
;
struct
S2
func_18
(
struct
func_18
,
unsigned
,
struct
l_269
)
;
short
func_12
(
)
{
struct
func_18
l_50
=
{
1L
}
;
int
*
l_269
=
&
g_131
.
f8
.
g_131
;
*
l_269
=
func_15
(
func_18
(
l_50
,
0x2BEB855BL
,
g_131
.
f7
)
,
crc32_context
)
;
return
*
l_269
;
}
int
func_15
(
struct
S2
p_16
,
unsigned
p_17
)
{
return
p_16
.
S3
;
}
struct
S2
func_18
(
struct
func_18
p_19
,
unsigned
p_20
,
struct
l_269
p_21
)
{
struct
S8
l_114
=
{
4L
,
0xB73E6FF0L
,
0xA5C68B7B37179735LL
,
6L
,
0xED83160587D15F6ALL
,
0x3A504EC7L
,
0x9E8CB06A753925E9LL
,
0xD96B292EL
,
1L
,
0xB48AL
,
1UL
,
0xBDL
,
2L
,
0x0AL
,
0x4AL
,
0xAAL
,
9L
,
0xDA9CF794L
,
65529UL
,
0xA9A8L
}
;
struct
S8
*
l_115
=
&
l_114
;
*
l_115
=
l_114
;
return
l_114
.
f7
;
}
int
main
(
)
{
func_12
(
)
;
transparent_crc
(
g_131
.
f8
.
g_131
,
"g_131.f8.f1"
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
