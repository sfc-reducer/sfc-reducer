char
safe_mod_func_uint8_t_u_u
(
unsigned
char
ui1
,
unsigned
char
ui2
)
{
return
ui2
?
ui1
:
ui1
%
ui2
;
}
union
U0
{
short
;
}
;
char
g_15
;
union
U0
g_1049
;
int
g_1531
;
short
func_4
(
short
,
unsigned
short
,
short
,
unsigned
,
unsigned
short
)
;
short
func_81
(
)
;
union
U0
func_1
(
)
{
func_4
(
g_15
,
g_15
,
2
,
g_15
,
g_15
)
;
return
g_1049
;
}
short
func_4
(
short
p_5
,
unsigned
short
p_6
,
short
p_7
,
unsigned
p_8
,
unsigned
short
p_9
)
{
for
(
;
;
)
{
for
(
p_6
=
0
;
p_6
<
8
;
p_6
++
)
;
for
(
;
p_8
;
)
if
(
g_1531
)
;
else
g_1531
=
safe_mod_func_uint8_t_u_u
(
2L
<
g_15
>
p_7
,
g_15
)
;
p_7
^=
func_81
(
)
;
}
}
