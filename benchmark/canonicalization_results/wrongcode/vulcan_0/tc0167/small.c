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
print_hash_value
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
int
print_hash_value
;
int
*
g_123
=
&
print_hash_value
;
char
*
x
;
int
*
*
g_458
=
&
g_123
;
char
func_26
(
unsigned
short
,
int
*
,
int
*
,
int
*
)
;
int
func_1
(
)
{
func_26
(
print_hash_value
,
g_123
,
g_123
,
g_123
)
;
return
print_hash_value
;
}
char
func_26
(
unsigned
short
print_hash_value
,
int
*
g_123
,
int
*
p_29
,
int
*
p_30
)
{
char
*
*
l_473
[
]
[
9
]
[
7
]
=
{
{
{
0
}
,
&
x
,
&
x
,
&
x
,
&
x
,
&
x
}
,
{
{
0
}
,
{
0
}
,
{
0
}
,
{
0
}
,
&
x
,
&
x
,
&
x
,
&
x
,
&
x
}
}
;
int
l_474
=
0x48D43D2CL
;
*
*
g_458
=
l_473
[
1
]
[
4
]
[
4
]
==
l_473
[
0
]
[
1
]
[
4
]
|
l_474
;
return
print_hash_value
;
}
int
main
(
)
{
int
print_hash_value
=
func_1
(
)
;
platform_main_end
(
print_hash_value
,
print_hash_value
)
;
return
0
;
}
