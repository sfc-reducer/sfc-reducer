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
x
)
;
}
struct
val
{
const
;
}
;
struct
val
val
;
int
*
g_70
=
&
crc32_context
;
int
*
*
func_23
(
struct
val
,
unsigned
,
int
,
unsigned
,
unsigned
short
)
;
struct
val
func_43
(
unsigned
short
*
,
char
,
int
*
*
,
int
)
;
unsigned
short
*
func_48
(
unsigned
char
,
unsigned
short
)
;
unsigned
func_13
(
)
{
func_23
(
val
,
crc32_context
,
sizeof
val
,
sizeof
val
,
*
g_70
)
;
return
sizeof
val
;
}
int
*
*
func_23
(
struct
val
p_24
,
unsigned
p_25
,
int
p_26
,
unsigned
p_27
,
unsigned
short
p_28
)
{
func_43
(
func_48
(
crc32_context
,
crc32_context
)
,
crc32_context
,
&
g_70
,
crc32_context
)
;
return
func_13
;
}
struct
val
func_43
(
unsigned
short
*
p_44
,
char
p_45
,
int
*
*
p_46
,
int
p_47
)
{
++
*
p_44
;
return
val
;
}
unsigned
short
*
func_48
(
unsigned
char
p_49
,
unsigned
short
p_50
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
func_13
(
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
