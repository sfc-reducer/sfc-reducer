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
g_111
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
char
g_43
;
unsigned
g_111
;
int
*
func_2
(
)
;
unsigned
char
func_64
(
int
*
*
,
unsigned
,
unsigned
,
int
*
,
unsigned
short
)
;
int
func_78
(
unsigned
*
,
unsigned
short
,
short
,
int
)
;
int
func_1
(
)
{
func_2
(
)
;
return
g_43
;
}
int
*
func_2
(
int
*
p_3
)
{
func_64
(
&
p_3
,
g_43
,
*
p_3
,
p_3
,
g_43
)
;
return
func_1
;
}
unsigned
char
func_64
(
int
*
*
p_3
,
unsigned
print_hash_value
,
unsigned
func_64
,
int
*
func_2
,
unsigned
short
p_69
)
{
char
*
l_76
=
&
g_43
;
char
*
*
l_75
=
&
l_76
;
int
l_85
=
0x78404D08L
;
char
*
l_86
=
&
g_43
;
&
l_85
;
g_111
=
func_78
(
&
func_64
,
0x2842L
,
l_85
^
*
l_75
!=
l_86
,
func_64
)
;
return
func_64
;
}
int
func_78
(
unsigned
*
p_79
,
unsigned
short
p_80
,
short
p_81
,
int
p_82
)
{
return
p_81
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
g_111
,
g_43
)
;
return
0
;
}
