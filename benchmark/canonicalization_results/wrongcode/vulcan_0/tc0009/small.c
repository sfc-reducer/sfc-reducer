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
unsigned
safe_unary_minus_func_uint64_t_u
(
ui
)
{
return
-
ui
;
}
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
x
,
int
ui
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
ui
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
union
x
{
int
ui
;
}
;
char
*
val
;
union
x
ui
;
unsigned
char
*
*
g_155
;
unsigned
short
func_68
(
long
long
*
,
unsigned
char
*
,
unsigned
char
,
unsigned
)
;
long
long
*
x
(
)
;
unsigned
*
func_62
(
)
{
func_68
(
x
(
)
,
val
,
crc32_context
,
crc32_context
)
;
return
val
;
}
unsigned
short
func_68
(
long
long
*
x
,
unsigned
char
*
val
,
unsigned
char
crc32_context
,
unsigned
platform_main_end
)
{
int
*
l_108
=
&
ui
.
ui
;
*
l_108
^=
safe_unary_minus_func_uint64_t_u
(
&
val
==
(
g_155
=
&
val
)
)
;
return
crc32_context
;
}
long
long
*
x
(
)
{
return
val
;
}
int
main
(
)
{
func_62
(
)
;
transparent_crc
(
ui
.
ui
,
"g_87.f0"
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
