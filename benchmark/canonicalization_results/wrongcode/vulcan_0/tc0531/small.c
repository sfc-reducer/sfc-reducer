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
p_9
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
val
=
0x18BAL
;
static
short
*
g_26
=
&
val
;
char
g_171
;
char
*
g_170
=
&
g_171
;
int
*
*
print_hash_value
(
int
*
*
,
int
,
unsigned
short
)
;
int
*
*
func_10
(
unsigned
)
;
short
func_1
(
)
{
print_hash_value
(
func_10
(
val
)
,
2
,
(
g_26
==
&
val
)
>=
val
)
;
return
*
g_26
;
}
int
*
*
print_hash_value
(
int
*
*
p_7
,
int
p_8
,
unsigned
short
print_hash_value
)
{
*
g_170
=
print_hash_value
;
return
&
val
;
}
int
*
*
func_10
(
unsigned
p_11
)
{
return
print_hash_value
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
g_171
,
"g_171"
,
val
)
;
platform_main_end
(
crc32_context
,
val
)
;
return
0
;
}
