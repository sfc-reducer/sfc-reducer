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
char
safe_lshift_func_int8_t_s_u
(
char
left
,
unsigned
right
)
{
return
left
||
left
>
right
;
}
short
safe_mod_func_int16_t_s_s
(
si1
,
si2
)
{
return
si1
&&
si1
%
si2
;
}
void
platform_main_end
(
x
,
si2
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
si2
;
static
const
int
*
g_6
=
&
si2
;
int
g_126
;
int
*
func_2
(
const
int
*
,
int
,
unsigned
short
)
;
int
*
func_18
(
short
,
int
,
int
)
;
char
func_26
(
int
,
int
*
,
unsigned
,
int
,
int
*
)
;
int
*
func_32
(
unsigned
,
unsigned
,
int
*
,
unsigned
char
)
;
int
func_1
(
)
{
unsigned
l_8
=
0xAA810D21L
;
func_2
(
g_6
,
l_8
,
l_8
)
;
return
l_8
;
}
int
*
func_2
(
const
int
*
p_3
,
int
p_4
,
unsigned
short
p_5
)
{
int
*
x
=
func_18
(
p_4
,
p_4
,
p_4
)
;
*
x
=
*
g_6
;
return
func_1
;
}
int
*
func_18
(
short
p_30
,
int
p_20
,
int
left
)
{
int
*
x
=
&
si2
;
*
x
=
func_26
(
*
g_6
,
g_6
,
p_20
,
p_20
,
g_6
)
;
return
g_6
;
}
char
func_26
(
int
p_27
,
int
*
p_28
,
unsigned
p_29
,
int
si2
,
int
*
p_31
)
{
func_32
(
g_126
,
si2
,
&
si2
,
si2
)
;
return
si2
;
}
int
*
func_32
(
unsigned
p_33
,
unsigned
p_34
,
int
*
p_35
,
unsigned
char
p_36
)
{
safe_lshift_func_int8_t_s_u
(
safe_mod_func_int16_t_s_s
(
si2
,
si2
++
)
,
7
)
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
si2
,
si2
)
;
return
0
;
}
