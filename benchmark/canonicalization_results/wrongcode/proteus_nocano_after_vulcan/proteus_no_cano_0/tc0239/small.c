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
p_21
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
g_250
)
{
printf
(
"checksum = %x\n"
,
g_250
)
;
}
struct
val
{
short
crc32_context
;
int
val
;
}
;
struct
val
val
;
struct
val
g_280
;
unsigned
func_18
(
unsigned
char
,
unsigned
short
,
int
*
)
;
unsigned
func_1
(
)
{
int
*
l_400
=
&
val
.
val
;
func_18
(
crc32_context
,
crc32_context
,
l_400
)
;
return
crc32_context
;
}
unsigned
func_18
(
unsigned
char
p_19
,
unsigned
short
p_20
,
int
*
p_21
)
{
int
*
l_418
=
&
g_280
.
val
;
while
(
++
val
.
crc32_context
)
{
++
*
p_21
;
p_21
=
l_418
;
}
return
*
l_418
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
g_280
.
val
,
"g_280.f2"
,
crc32_context
)
;
platform_main_end
(
print_hash_value
,
crc32_context
)
;
return
0
;
}
