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
S1
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
func_1
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
S1
{
unsigned
val
;
char
S1
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
S1
val
;
int
*
g_263
=
&
val
.
val
;
static
int
*
const
*
S1
=
&
g_263
;
union
val
func_2
(
unsigned
,
int
,
char
)
;
unsigned
short
func_13
(
unsigned
)
;
int
func_1
(
)
{
func_2
(
0UL
,
func_13
(
sizeof
val
)
,
sizeof
val
)
;
return
!
S1
;
}
union
val
func_2
(
unsigned
p_3
,
int
p_4
,
char
p_5
)
{
union
val
*
*
l_608
;
union
val
*
*
*
l_607
=
&
l_608
;
int
*
*
l_677
=
&
g_263
;
++
*
*
S1
;
++
*
l_677
;
return
*
*
*
l_607
;
}
unsigned
short
func_13
(
unsigned
p_14
)
{
int
*
*
S1
=
&
g_263
;
++
*
S1
;
return
sizeof
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
"g_79.f2.f0"
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
