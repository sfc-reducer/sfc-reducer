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
g_300
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
g_96
)
{
printf
(
"checksum = %x\n"
,
g_96
)
;
}
struct
crc32_context
{
int
f2
;
unsigned
f4
;
}
;
int
g_96
=
0x3A23B15CL
;
int
*
g_107
=
&
g_96
;
struct
crc32_context
g_127
;
struct
crc32_context
f4
;
short
func_14
(
unsigned
short
,
int
,
unsigned
char
,
short
)
;
unsigned
func_53
(
int
,
int
,
unsigned
short
,
int
*
,
int
*
)
;
struct
crc32_context
func_1
(
)
{
func_14
(
0x30E2L
,
g_96
,
g_96
,
g_96
)
;
return
g_127
;
}
short
func_14
(
unsigned
short
p_15
,
int
p_16
,
unsigned
char
p_17
,
short
p_18
)
{
int
*
l_658
=
&
f4
.
f2
;
for
(
;
f4
.
f4
<=
23
;
++
f4
.
f4
)
if
(
func_53
(
g_96
,
g_96
,
*
g_107
,
l_658
,
&
g_96
)
)
{
int
*
l_704
=
&
g_127
.
f2
;
int
*
*
l_705
=
&
l_658
;
*
l_705
=
l_704
;
}
return
sizeof
g_127
;
}
unsigned
func_53
(
int
p_54
,
int
p_55
,
unsigned
short
p_56
,
int
*
p_57
,
int
*
p_58
)
{
return
*
p_57
=
*
g_107
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
g_127
.
f2
,
"g_127.f2"
,
g_96
)
;
platform_main_end
(
g_96
,
crc32_context
)
;
return
0
;
}
