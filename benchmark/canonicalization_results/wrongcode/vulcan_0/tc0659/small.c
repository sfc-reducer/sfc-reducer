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
print_hash_value
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
g_2
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
x
{
int
crc32_context
;
}
;
char
val
;
char
*
x
=
&
val
;
struct
x
g_171
=
{
246UL
}
;
int
*
func_56
(
const
int
*
,
int
,
int
,
unsigned
,
short
)
;
int
*
func_79
(
)
;
char
func_1
(
)
{
func_56
(
&
crc32_context
,
crc32_context
,
crc32_context
,
crc32_context
,
crc32_context
)
;
return
*
x
;
}
int
*
func_56
(
const
int
*
p_57
,
int
p_58
,
int
p_59
,
unsigned
p_60
,
short
p_61
)
{
*
x
=
(
&
crc32_context
==
func_79
(
)
)
<
g_171
.
crc32_context
;
return
&
crc32_context
;
}
int
*
func_79
(
)
{
return
&
crc32_context
;
}
int
main
(
)
{
int
x
=
func_1
(
)
;
transparent_crc
(
val
,
"g_183"
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
