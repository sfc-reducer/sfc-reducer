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
g_10
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
p_15
{
unsigned
p_15
;
unsigned
f1
;
}
;
unsigned
g_146
;
union
p_15
g_2782
=
{
0x777BD679L
}
;
unsigned
func_7
(
unsigned
char
,
unsigned
char
)
;
int
func_12
(
unsigned
short
,
unsigned
char
,
union
p_15
,
short
)
;
union
p_15
func_1
(
)
{
func_7
(
g_146
,
g_146
)
;
return
g_2782
;
}
unsigned
func_7
(
unsigned
char
p_8
,
unsigned
char
p_9
)
{
return
func_12
(
g_146
,
g_146
,
g_2782
,
g_146
)
;
}
int
func_12
(
unsigned
short
p_13
,
unsigned
char
p_14
,
union
p_15
p_15
,
short
p_16
)
{
return
p_15
=
p_15
,
p_15
.
p_15
&&
g_146
++
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
g_146
,
g_146
)
;
return
0
;
}
