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
safe_sub_func_uint8_t_u_u
(
ui1
,
ui2
)
{
return
ui1
-
ui2
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
func_5
,
int
ui2
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
val
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
U0
*
val
;
char
ui2
;
int
*
ui1
(
)
;
unsigned
char
func_48
(
)
;
unsigned
func_1
(
)
{
ui1
(
)
;
return
4
;
}
int
*
ui1
(
)
{
union
U0
*
*
l_420
[
]
[
10
]
=
{
{
&
val
}
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
,
&
val
}
;
char
*
l_423
=
&
ui2
;
*
l_423
=
safe_sub_func_uint8_t_u_u
(
&
val
==
l_420
[
3
]
[
6
]
,
func_48
(
)
)
;
return
val
;
}
unsigned
char
func_48
(
)
{
int
l_55
=
8L
;
return
l_55
;
}
int
main
(
)
{
int
val
=
func_1
(
)
;
transparent_crc
(
ui2
,
"g_292"
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
