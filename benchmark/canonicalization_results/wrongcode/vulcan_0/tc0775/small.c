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
func_7
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
char
val
[
]
[
4
]
[
6
]
;
int
g_19
[
]
[
7
]
;
char
*
si2
(
)
;
short
func_1
(
)
{
si2
(
)
;
return
6
;
}
char
*
si2
(
)
{
char
*
crc32_context
=
&
val
[
2
]
[
1
]
[
0
]
;
*
crc32_context
=
safe_add_func_int32_t_s_s
(
crc32_context
!=
&
val
[
2
]
[
1
]
[
0
]
,
0xFBC6A687L
)
;
return
val
;
}
int
main
(
)
{
int
val
;
int
crc32_context
=
func_1
(
)
;
for
(
crc32_context
=
0
;
crc32_context
<
10
;
crc32_context
++
)
for
(
val
=
0
;
val
<
7
;
val
++
)
transparent_crc
(
g_19
[
crc32_context
]
[
val
]
,
"g_19[i][j]"
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
