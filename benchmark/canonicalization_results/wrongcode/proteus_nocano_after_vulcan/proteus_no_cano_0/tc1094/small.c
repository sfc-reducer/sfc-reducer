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
g_95
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
g_95
;
int
*
*
g_97
;
static
int
func_3
(
unsigned
char
,
unsigned
,
int
,
int
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
return
func_3
(
g_95
,
g_95
,
65531UL
,
g_95
,
1
)
;
}
int
func_3
(
unsigned
char
print_hash_value
,
unsigned
func_3
,
int
p_6
,
int
printf
,
unsigned
char
platform_main_end
)
{
int
*
l_1244
=
&
g_95
;
int
*
*
*
l_1378
[
]
[
3
]
=
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
0
,
0
,
&
g_97
}
;
*
l_1244
^=
l_1378
[
4
]
[
2
]
!=
&
g_97
^
p_6
;
return
p_6
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
g_95
,
g_95
)
;
return
0
;
}
