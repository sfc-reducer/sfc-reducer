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
f0
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
g_13
)
{
printf
(
"checksum = %x\n"
,
g_13
)
;
}
struct
crc32_context
{
unsigned
f0
;
short
crc32_context
;
unsigned
l_911
;
unsigned
l_8
;
}
;
char
g_13
;
struct
crc32_context
g_708
;
struct
crc32_context
func_2
(
char
,
struct
crc32_context
,
unsigned
char
,
long
long
)
;
unsigned
func_1
(
)
{
struct
crc32_context
val
=
{
18446744073709551615UL
}
;
char
*
l_12
=
&
g_13
;
struct
crc32_context
*
f0
=
&
g_708
;
*
f0
=
func_2
(
g_13
,
val
,
!
f0
,
*
l_12
)
;
*
f0
=
*
f0
;
return
g_13
;
}
struct
crc32_context
func_2
(
char
p_3
,
struct
crc32_context
p_4
,
unsigned
char
p_5
,
long
long
p_6
)
{
return
p_4
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
g_708
.
f0
,
"g_708.f0"
,
g_13
)
;
platform_main_end
(
g_13
,
crc32_context
)
;
return
0
;
}
