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
safe_sub_func_int8_t_s_s
(
char
si1
,
char
si2
)
{
return
(
si1
^
si2
)
&
127
?
si1
:
si1
-
si2
;
}
void
platform_main_end
(
si2
,
si1
)
{
printf
(
"checksum = %x\n"
,
si1
)
;
}
union
U0
{
int
si2
;
}
;
short
g_146
=
7L
;
union
U0
g_269
;
int
si2
;
unsigned
short
func_34
(
unsigned
short
)
;
short
func_1
(
)
{
func_34
(
si2
)
;
return
g_146
;
}
unsigned
short
func_34
(
unsigned
short
si1
)
{
for
(
;
g_269
.
si2
<=
27
;
++
g_269
.
si2
)
{
unsigned
l_539
=
255UL
;
if
(
g_146
)
si2
=
safe_sub_func_int8_t_s_s
(
g_146
>=
safe_sub_func_int8_t_s_s
(
248UL
,
g_146
)
,
l_539
)
;
}
return
g_146
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
si2
)
;
return
0
;
}
