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
flag
;
}
void
platform_main_end
(
x
,
p_31
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
char
flag
=
0x34L
;
char
*
g_14
;
short
g_48
;
short
*
g_47
=
&
g_48
;
short
*
*
g_201
=
&
g_47
;
static
short
*
*
*
g_200
=
&
g_201
;
char
*
func_5
(
unsigned
char
,
char
*
,
int
,
unsigned
short
,
int
)
;
short
func_23
(
unsigned
short
,
unsigned
)
;
int
*
func_29
(
short
,
char
*
,
unsigned
)
;
short
func_1
(
)
{
func_5
(
flag
,
g_14
,
flag
,
flag
,
0
)
;
return
*
*
*
g_200
;
}
char
*
func_5
(
unsigned
char
p_6
,
char
*
p_7
,
int
p_8
,
unsigned
short
p_9
,
int
p_10
)
{
func_23
(
flag
,
flag
)
;
return
g_201
;
}
short
func_23
(
unsigned
short
p_24
,
unsigned
p_25
)
{
char
*
l_53
=
&
flag
;
func_29
(
*
l_53
,
l_53
,
flag
)
;
return
*
l_53
;
}
int
*
func_29
(
short
p_30
,
char
*
flag
,
unsigned
p_32
)
{
short
*
*
*
l_202
=
&
g_201
;
*
flag
=
(
g_200
==
l_202
)
<
*
flag
;
return
g_201
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
flag
,
"g_134"
,
flag
)
;
platform_main_end
(
crc32_context
,
flag
)
;
return
0
;
}
