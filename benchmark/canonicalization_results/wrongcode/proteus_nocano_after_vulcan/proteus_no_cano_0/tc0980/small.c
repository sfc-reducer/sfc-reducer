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
safe_add_func_uint16_t_u_u
(
func_1
,
ui2
)
{
return
++
ui2
;
}
int
x
;
void
transparent_crc
(
unsigned
val
,
char
*
print_hash_value
,
int
ui2
)
{
x
+=
val
;
}
void
platform_main_end
(
l_1362
,
func_1
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
int
g_513
[
]
[
2
]
[
7
]
;
char
func_1
(
)
{
unsigned
*
*
x
[
8
]
[
9
]
;
unsigned
*
*
*
l_1362
=
&
x
[
0
]
[
2
]
;
int
*
l_1364
=
g_513
[
8
]
[
1
]
;
*
l_1364
=
safe_add_func_uint16_t_u_u
(
65531UL
,
l_1362
==
&
x
[
0
]
[
2
]
)
;
return
0
;
}
int
main
(
)
{
int
ui2
;
int
val
=
func_1
(
)
;
for
(
;
x
<
10
;
x
++
)
for
(
val
--
;
val
;
val
++
)
if
(
ui2
=
0
)
;
else
transparent_crc
(
g_513
[
x
]
[
val
]
[
ui2
]
,
"g_513[i][j][k]"
,
val
)
;
platform_main_end
(
val
,
x
)
;
return
0
;
}
