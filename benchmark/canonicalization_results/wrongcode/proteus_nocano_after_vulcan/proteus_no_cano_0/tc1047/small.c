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
g_32
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
S0
{
char
f0
;
unsigned
l_727
;
unsigned
f6
;
}
;
short
l_727
;
struct
S0
g_725
;
struct
S0
g_764
=
{
0xACL
}
;
unsigned
short
func_25
(
unsigned
short
*
,
unsigned
short
*
,
unsigned
short
*
,
unsigned
,
unsigned
short
*
)
;
short
func_1
(
)
{
short
*
l_710
=
&
l_727
;
func_25
(
0
,
&
l_727
,
l_710
,
2
,
!
1
)
;
return
l_727
;
}
unsigned
short
func_25
(
unsigned
short
*
p_26
,
unsigned
short
*
p_27
,
unsigned
short
*
p_28
,
unsigned
p_29
,
unsigned
short
*
p_30
)
{
struct
S0
*
l_727
=
&
g_725
;
*
l_727
=
g_764
;
*
l_727
=
*
l_727
;
return
*
p_28
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
g_725
.
f0
,
"g_725.f0"
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
