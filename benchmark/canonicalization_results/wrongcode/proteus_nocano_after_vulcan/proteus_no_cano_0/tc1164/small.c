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
void
platform_main_end
(
x
,
l_32
)
{
printf
(
"checksum = %x\n"
,
l_32
)
;
}
struct
l_32
{
const
;
}
g_17
;
int
g_61
;
int
func_8
(
unsigned
short
,
struct
l_32
*
,
struct
l_32
*
)
;
struct
l_32
*
func_24
(
)
;
short
func_1
(
)
{
void
*
l_19
=
&
g_17
;
func_8
(
5
,
l_19
,
&
g_17
)
;
return
g_61
;
}
int
func_8
(
unsigned
short
g_61
,
struct
l_32
*
l_32
,
struct
l_32
*
ui1
)
{
func_24
(
)
;
return
g_61
;
}
struct
l_32
*
func_24
(
)
{
unsigned
l_32
=
247UL
;
if
(
l_32
<<=
l_32
)
{
int
*
l_160
=
&
g_61
;
++
*
l_160
;
}
return
func_1
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
platform_main_end
(
g_61
,
g_61
)
;
return
0
;
}
