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
g_1114
,
int
transparent_crc
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
struct
val
{
unsigned
val
;
}
;
struct
S1
{
struct
val
f3
;
}
;
struct
S1
g_987
;
struct
val
g_1114
=
{
1810
}
;
int
func_22
(
unsigned
char
)
;
int
func_1
(
)
{
int
transparent_crc
[
3
]
;
int
val
;
for
(
val
=
0
;
val
<
3
;
val
++
)
transparent_crc
[
val
]
=
6L
;
for
(
;
val
;
val
-=
1
)
{
unsigned
val
[
7
]
[
4
]
[
5
]
=
{
4294967295UL
}
;
if
(
crc32_context
)
val
[
2
]
[
0
]
[
0
]
=
g_1114
.
val
;
func_22
(
transparent_crc
[
1
]
==
(
g_987
.
f3
.
val
||
val
[
2
]
[
0
]
[
0
]
)
)
;
}
return
val
;
}
int
func_22
(
unsigned
char
val
)
{
crc32_context
=
val
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
=
func_1
(
)
;
transparent_crc
(
g_1114
.
val
,
"g_1114.f4"
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
