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
g_384
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
print_hash_value
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
long
long
*
*
g_384
;
static
long
long
*
*
*
g_383
=
&
g_384
;
char
val
;
unsigned
char
func_5
(
short
,
char
)
;
int
func_1
(
)
{
long
long
*
*
*
l_390
=
&
g_384
;
func_5
(
-
(
g_383
==
l_390
)
,
val
)
;
return
val
;
}
unsigned
char
func_5
(
short
p_6
,
char
p_7
)
{
char
*
crc32_context
=
&
val
;
*
crc32_context
=
p_6
;
return
*
crc32_context
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
,
"g_417"
,
val
)
;
platform_main_end
(
val
,
val
)
;
return
0
;
}
