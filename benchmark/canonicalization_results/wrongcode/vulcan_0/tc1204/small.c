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
l_359
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
long
f0
;
unsigned
crc32_context
;
signed
l_363
;
unsigned
val
;
}
;
struct
crc32_context
val
;
const
struct
crc32_context
func_5
(
int
*
,
unsigned
)
;
struct
crc32_context
l_363
(
)
;
unsigned
func_1
(
)
{
int
*
l_3
=
&
crc32_context
;
struct
crc32_context
*
l_363
=
&
val
;
func_5
(
l_3
,
crc32_context
)
;
val
=
*
l_363
;
return
crc32_context
;
}
const
struct
crc32_context
func_5
(
int
*
p_6
,
unsigned
p_7
)
{
struct
crc32_context
*
crc32_context
=
&
val
;
*
crc32_context
=
l_363
(
)
;
return
*
crc32_context
;
}
struct
crc32_context
l_363
(
)
{
struct
crc32_context
l_358
=
{
4UL
}
;
return
l_358
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
val
.
f0
,
"g_80.f0"
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
