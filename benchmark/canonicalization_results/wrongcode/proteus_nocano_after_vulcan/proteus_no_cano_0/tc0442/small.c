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
func_27
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
p_28
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
crc32_context
{
signed
f0
,
:
5
;
}
;
int
*
g_13
;
struct
crc32_context
val
;
int
func_27
(
unsigned
)
;
short
func_38
(
int
*
*
,
unsigned
long
long
)
;
unsigned
short
func_44
(
)
;
struct
crc32_context
func_47
(
unsigned
,
unsigned
long
long
)
;
unsigned
func_1
(
)
{
return
func_27
(
0x94A219909D073D4CLL
)
;
}
int
func_27
(
unsigned
p_28
)
{
int
*
*
func_27
=
&
g_13
;
struct
crc32_context
*
l_281
=
&
val
;
func_38
(
func_27
,
func_44
(
*
l_281
=
func_47
(
!
func_27
,
crc32_context
)
)
)
;
return
crc32_context
;
}
short
func_38
(
int
*
*
p_39
,
unsigned
long
long
p_40
)
{
struct
crc32_context
*
l_286
=
&
val
;
*
l_286
=
val
;
return
crc32_context
;
}
unsigned
short
func_44
(
)
{
return
crc32_context
;
}
struct
crc32_context
func_47
(
unsigned
p_48
,
unsigned
long
long
p_49
)
{
struct
crc32_context
l_113
=
{
300
}
;
return
l_113
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
f0
,
"g_282.f0"
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
