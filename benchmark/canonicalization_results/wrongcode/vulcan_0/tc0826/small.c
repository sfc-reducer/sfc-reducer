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
safe_add_func_int32_t_s_s
(
si1
,
si2
)
{
return
si1
+
si2
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
vname
,
int
si2
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
unsigned
val
;
char
si2
[
]
;
int
*
func_43
(
int
*
,
int
,
unsigned
,
unsigned
,
unsigned
)
;
unsigned
func_1
(
)
{
func_43
(
&
val
,
*
si2
,
1UL
,
val
,
val
)
;
return
val
;
}
int
*
func_43
(
int
*
p_44
,
int
crc32_context
,
unsigned
func_43
,
unsigned
transparent_crc
,
unsigned
si1
)
{
unsigned
*
l_60
[
]
[
8
]
[
1
]
=
{
{
&
val
}
,
{
&
val
}
,
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
}
;
*
si2
=
safe_add_func_int32_t_s_s
(
l_60
[
3
]
[
5
]
[
0
]
!=
p_44
,
0x13644CADL
)
;
return
si2
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
si2
[
val
]
,
"g_73[i]"
,
val
)
;
platform_main_end
(
crc32_context
,
val
)
;
return
0
;
}
