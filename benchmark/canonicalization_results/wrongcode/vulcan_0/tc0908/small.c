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
S0
)
{
printf
(
"checksum = %x\n"
,
S0
)
;
}
struct
S0
*
*
S0
;
int
l_1601
=
0xBFB7129CL
;
int
*
g_453
=
&
l_1601
;
unsigned
func_1
(
)
{
unsigned
l_1600
=
0x9545L
;
struct
S0
*
*
*
l_1601
[
]
[
8
]
=
{
{
&
S0
}
,
{
&
S0
}
,
{
&
S0
}
,
{
&
S0
}
,
{
&
S0
}
,
&
S0
}
;
*
g_453
&=
l_1600
|
l_1601
[
5
]
[
0
]
==
&
S0
;
return
1
;
}
int
main
(
)
{
int
S0
=
func_1
(
)
;
platform_main_end
(
l_1601
,
l_1601
)
;
return
0
;
}
