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
p_58
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
j
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
int
vname
[
]
[
8
]
;
static
int
*
val
=
&
vname
[
3
]
[
6
]
;
unsigned
char
func_56
(
char
,
unsigned
short
)
;
unsigned
func_1
(
)
{
*
val
=
sizeof
func_1
;
func_56
(
crc32_context
,
crc32_context
)
;
*
val
=
vname
[
3
]
[
6
]
;
return
crc32_context
;
}
unsigned
char
func_56
(
char
p_57
,
unsigned
short
vname
)
{
if
(
++
crc32_context
)
{
int
val
;
while
(
crc32_context
++
)
for
(
&
val
;
vname
;
crc32_context
++
)
;
while
(
val
++
)
;
}
return
vname
;
}
int
main
(
)
{
int
crc32_context
,
val
;
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
7
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
8
;
val
++
)
transparent_crc
(
vname
[
crc32_context
]
[
val
]
,
"g_92[i][j]"
,
val
)
;
platform_main_end
(
val
,
val
)
;
return
0
;
}
