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
func_73
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
g_784
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
val
{
char
val
;
char
crc32_context
;
}
;
union
crc32_context
{
unsigned
val
;
}
;
struct
val
val
;
int
func_2
(
int
,
long
long
,
short
,
union
crc32_context
,
unsigned
char
)
;
int
func_14
(
short
,
unsigned
char
)
;
struct
val
func_38
(
unsigned
,
int
,
unsigned
short
,
unsigned
char
,
char
)
;
unsigned
func_73
(
)
;
struct
val
func_1
(
)
{
union
crc32_context
l_1013
=
{
1UL
}
;
func_2
(
func_14
(
crc32_context
,
crc32_context
)
,
val
.
val
,
crc32_context
,
l_1013
,
crc32_context
)
;
return
val
;
}
int
func_2
(
int
p_3
,
long
long
p_4
,
short
p_5
,
union
crc32_context
p_6
,
unsigned
char
p_7
)
{
val
=
(
func_73
(
0x53E8B532D647B465LL
)
,
val
)
;
return
crc32_context
;
}
int
func_14
(
short
p_15
,
unsigned
char
p_16
)
{
val
=
func_38
(
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
crc32_context
;
}
struct
val
func_38
(
unsigned
p_39
,
int
p_40
,
unsigned
short
p_41
,
unsigned
char
p_42
,
char
p_43
)
{
struct
val
l_783
=
{
254UL
}
;
return
l_783
;
}
unsigned
func_73
(
)
{
return
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
.
val
,
"g_784.f0"
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
