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
f3
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
short
crc32_context
;
char
g_3
;
int
f3
;
}
;
struct
crc32_context
{
unsigned
f0
;
}
;
int
f3
=
0x7555B7CEL
;
struct
S0
g_53
=
{
4UL
,
0x1688L
,
251UL
}
;
struct
crc32_context
g_126
;
struct
crc32_context
*
g_154
=
&
g_126
;
struct
S0
g_198
;
int
*
*
func_23
(
short
)
;
short
func_32
(
int
,
unsigned
,
unsigned
char
,
unsigned
char
)
;
int
*
func_41
(
)
;
struct
crc32_context
func_43
(
)
;
unsigned
func_1
(
)
{
func_23
(
6L
)
;
return
f3
;
}
int
*
*
func_23
(
short
p_24
)
{
int
*
l_29
=
&
crc32_context
;
func_32
(
*
l_29
,
crc32_context
,
*
l_29
,
crc32_context
)
;
return
func_1
;
}
short
func_32
(
int
p_33
,
unsigned
p_34
,
unsigned
char
p_35
,
unsigned
char
p_36
)
{
int
*
l_201
=
&
g_53
.
f3
;
if
(
f3
)
{
l_201
=
func_41
(
)
;
*
g_154
=
func_43
(
)
;
}
else
while
(
f3
)
;
if
(
*
l_201
)
++
g_53
.
f3
;
return
crc32_context
;
}
int
*
func_41
(
)
{
int
*
l_200
=
&
g_198
.
f3
;
while
(
g_126
.
f0
)
;
return
l_200
;
}
struct
crc32_context
func_43
(
)
{
return
g_126
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
g_53
.
f3
,
"g_53.f2"
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
