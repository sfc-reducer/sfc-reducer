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
l_611
)
{
printf
(
"checksum = %x\n"
,
l_611
)
;
}
int
*
g_35
;
int
*
*
g_34
=
&
g_35
;
int
g_96
[
]
[
5
]
[
7
]
;
unsigned
l_611
=
1UL
;
int
*
func_7
(
int
*
*
,
unsigned
short
)
;
char
func_15
(
short
)
;
int
*
func_23
(
int
*
*
,
int
*
)
;
unsigned
func_32
;
unsigned
func_40
(
char
)
;
short
func_1
(
)
{
*
g_34
=
func_7
(
!
0x73D6L
,
l_611
)
;
return
func_15
(
func_32
)
;
}
int
*
func_7
(
int
*
*
p_8
,
unsigned
short
p_9
)
{
int
*
l_1042
=
&
l_611
;
if
(
!
g_34
)
return
&
g_96
[
6
]
[
2
]
[
5
]
;
return
l_1042
;
}
char
func_15
(
short
p_16
)
{
func_23
(
g_34
,
*
g_34
)
;
return
l_611
;
}
int
*
func_23
(
int
*
*
p_24
,
int
*
p_25
)
{
int
*
l_95
=
&
g_96
[
6
]
[
2
]
[
5
]
;
platform_main_end
(
func_40
(
l_611
)
,
*
l_95
)
;
return
func_1
;
}
unsigned
func_40
(
char
p_41
)
{
int
*
l_60
=
&
l_611
;
do
*
g_34
=
l_60
;
while
(
++
l_611
)
;
return
l_611
;
}
int
main
(
)
{
return
func_1
(
)
;
}
