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
unsigned
short
*
func_33
(
int
,
unsigned
short
*
,
short
)
;
unsigned
short
*
func_40
(
unsigned
short
,
unsigned
,
unsigned
short
,
short
)
;
short
func_1
(
)
{
short
*
l_69
[
]
[
8
]
[
4
]
=
{
&
l_727
}
;
short
*
l_710
=
&
l_727
;
short
l_1235
=
func_25
(
0
,
func_33
(
l_727
,
func_40
(
l_727
,
2
,
9
,
l_727
)
,
6
)
,
l_710
,
2
,
l_69
[
1
]
[
1
]
[
2
]
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
p_27
;
}
unsigned
short
*
func_33
(
int
p_34
,
unsigned
short
*
p_35
,
short
p_36
)
{
return
func_40
;
}
unsigned
short
*
func_40
(
unsigned
short
p_41
,
unsigned
p_42
,
unsigned
short
p_43
,
short
p_44
)
{
return
&
l_727
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
g_725
.
f0
,
"g_725.f0"
,
l_727
)
;
platform_main_end
(
crc32_context
,
l_727
)
;
return
0
;
}
