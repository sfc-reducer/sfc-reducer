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
g_130
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
func_1
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
vname
{
signed
f0
;
unsigned
vname
;
signed
g_5
;
signed
crc32_context
;
unsigned
val
;
}
;
static
char
f0
=
0xA4L
;
struct
vname
vname
;
unsigned
short
val
(
int
,
unsigned
)
;
static
struct
vname
func_1
(
)
{
if
(
val
(
crc32_context
,
crc32_context
)
)
vname
=
vname
;
return
vname
;
}
unsigned
short
val
(
int
p_11
,
unsigned
p_12
)
{
struct
vname
l_524
=
{
643
}
;
vname
=
l_524
;
return
f0
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
vname
.
f0
,
"g_130.f0"
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
