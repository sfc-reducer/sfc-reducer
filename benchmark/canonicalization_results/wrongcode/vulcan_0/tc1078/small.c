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
p_6
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
val
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
short
x
;
unsigned
*
*
val
;
static
unsigned
short
func_4
(
unsigned
char
,
short
)
;
short
func_20
(
short
,
unsigned
)
;
unsigned
func_1
(
)
{
int
*
l_1217
=
&
crc32_context
;
func_4
(
x
,
7L
)
;
return
*
l_1217
;
}
unsigned
short
func_4
(
unsigned
char
p_5
,
short
x
)
{
int
*
l_1205
=
&
crc32_context
;
unsigned
*
*
*
l_1212
[
]
=
{
&
val
,
&
val
,
&
val
,
&
val
}
;
func_20
(
x
,
&
val
==
l_1212
[
3
]
|
x
)
;
return
*
l_1205
;
}
short
func_20
(
short
crc32_context
,
unsigned
val
)
{
short
*
l_436
=
&
x
;
*
l_436
=
val
;
return
val
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
x
,
"g_67"
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
