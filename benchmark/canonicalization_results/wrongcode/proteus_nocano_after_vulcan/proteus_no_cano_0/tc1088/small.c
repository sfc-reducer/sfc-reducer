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
l_1414
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
val
;
int
f4
;
}
;
union
val
{
const
;
}
;
struct
crc32_context
val
;
void
*
g_1053
=
&
val
;
struct
crc32_context
g_1062
;
union
val
g_1451
[
]
;
short
func_15
(
unsigned
long
long
,
int
)
;
union
val
func_1
(
)
{
func_15
(
crc32_context
,
sizeof
g_1062
)
;
return
*
g_1451
;
}
short
func_15
(
unsigned
long
long
p_16
,
int
p_17
)
{
int
*
l_1412
=
&
g_1062
.
f4
;
int
*
f4
=
&
val
.
f4
;
if
(
g_1053
)
{
for
(
;
val
.
val
;
++
val
.
val
)
{
if
(
*
l_1412
)
break
;
f4
=
l_1412
;
}
if
(
*
f4
)
;
else
++
*
f4
;
}
return
crc32_context
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
g_1062
.
f4
,
"g_1062.f5"
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
