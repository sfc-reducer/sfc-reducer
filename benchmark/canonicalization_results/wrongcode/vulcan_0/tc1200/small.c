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
p_40
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
crc32_context
;
unsigned
:
26
;
char
f3
;
unsigned
val
:
8
;
unsigned
:
2
;
}
val
;
unsigned
char
func_77
(
long
long
)
;
unsigned
char
func_81
(
int
,
short
,
short
,
unsigned
char
,
struct
crc32_context
)
;
struct
crc32_context
func_1
(
)
{
func_77
(
val
.
val
)
;
return
val
;
}
struct
crc32_context
func_39
(
struct
crc32_context
val
,
int
p_41
,
int
p_42
)
{
for
(
;
val
.
f3
;
)
;
return
val
;
}
unsigned
char
func_77
(
long
long
p_78
)
{
func_81
(
val
.
val
,
crc32_context
,
val
.
val
,
crc32_context
,
val
)
;
return
crc32_context
;
}
unsigned
char
func_81
(
int
p_82
,
short
p_83
,
short
p_84
,
unsigned
char
p_85
,
struct
crc32_context
p_86
)
{
val
=
func_39
(
val
,
crc32_context
,
crc32_context
)
;
return
val
.
val
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
"g_119.f4"
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
