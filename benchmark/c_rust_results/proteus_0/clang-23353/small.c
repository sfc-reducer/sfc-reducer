char
safe_mul_func_int8_t_s_s
(
char
si1
,
char
si2
)
{
return
si1
*
si2
;
}
struct
S1
{
char
f0
;
}
;
short
g_62
;
struct
S1
g_80
;
void
*
func_49
(
char
p_50
,
void
*
p_51
)
{
for
(
p_50
=
6
;
p_50
!=
-
7
;
p_50
--
)
g_80
.
f0
/=
!
safe_mul_func_int8_t_s_s
(
p_50
,
g_62
)
;
return
p_51
;
}
int
main
(
)
{
return
0
;
}
