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
func_38
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
func_38
{
int
f2
;
}
;
int
func_38
;
struct
func_38
g_125
[
]
[
7
]
[
7
]
;
struct
func_38
*
g_124
=
g_125
[
0
]
[
0
]
;
int
*
g_148
=
&
func_38
;
int
g_147
;
struct
func_38
g_214
;
static
const
int
*
g_258
=
&
func_38
;
struct
func_38
*
g_664
[
]
=
{
&
g_214
}
;
int
*
f2
(
const
int
*
,
int
,
char
,
struct
func_38
)
;
struct
func_38
func_1
(
)
{
f2
(
g_258
,
g_147
,
*
g_148
,
*
g_124
)
;
return
*
*
g_664
;
}
int
*
f2
(
const
int
*
g_258
,
int
p_40
,
char
p_41
,
struct
func_38
p_42
)
{
int
*
f2
=
&
func_38
;
*
f2
=
sizeof
g_214
;
*
f2
=
*
g_258
;
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
func_38
,
func_38
)
;
return
0
;
}
