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
g_597
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
union
U0
{
const
;
}
;
int
g_597
;
union
U0
g_22
[
]
;
union
U1
*
*
U0
;
union
U1
*
*
*
g_596
[
]
=
{
&
U0
,
&
U0
}
;
unsigned
char
func_8
(
int
*
,
int
,
short
,
int
*
,
unsigned
)
;
short
func_17
(
union
U0
,
unsigned
long
long
,
unsigned
long
long
,
unsigned
char
)
;
unsigned
func_1
(
)
{
int
*
l_16
[
2
]
;
func_8
(
*
l_16
,
g_597
,
g_597
,
&
g_597
,
func_17
(
*
g_22
,
5
,
g_597
,
g_597
)
)
;
return
g_597
;
}
unsigned
char
func_8
(
int
*
p_9
,
int
g_597
,
short
func_8
,
int
*
p_12
,
unsigned
p_13
)
{
return
*
p_12
^=
__alignof__
(
g_596
)
;
}
short
func_17
(
union
U0
p_18
,
unsigned
long
long
p_19
,
unsigned
long
long
p_20
,
unsigned
char
p_21
)
{
return
g_597
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
g_597
,
print_hash_value
)
;
return
0
;
}
