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
g_553
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
crc32_context
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
crc32_context
{
signed
f1
:
1
;
}
;
union
val
{
volatile
;
}
;
short
val
;
struct
crc32_context
f1
;
union
val
*
g_583
;
struct
crc32_context
func_8
(
)
;
union
val
func_1
(
)
{
func_8
(
val
)
;
return
*
g_583
;
}
struct
crc32_context
func_8
(
)
{
int
*
l_11
=
&
crc32_context
;
short
*
crc32_context
=
&
val
;
*
crc32_context
=
f1
.
f1
=
*
crc32_context
>=
*
l_11
;
return
f1
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
"g_190"
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
