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
safe_mod_func_int8_t_s_s
(
char
si1
,
char
si2
)
{
return
!
si2
?
si1
:
si1
%
si1
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
char
si2
;
unsigned
char
*
g_63
;
int
g_436
[
]
;
int
func_15
(
char
,
unsigned
long
long
,
unsigned
,
unsigned
,
unsigned
long
long
)
;
unsigned
short
func_25
(
)
;
unsigned
char
*
func_36
(
unsigned
char
*
,
unsigned
,
unsigned
char
*
,
unsigned
,
int
*
)
;
unsigned
func_44
(
long
long
,
unsigned
,
short
,
unsigned
char
*
*
)
;
long
long
func_51
(
unsigned
,
unsigned
char
*
*
,
unsigned
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
func_15
(
si2
,
si2
,
5
,
4
,
5
)
;
}
int
func_15
(
char
si2
,
unsigned
long
long
si1
,
unsigned
g_63
,
unsigned
g_436
,
unsigned
long
long
func_44
)
{
func_25
(
si2
)
;
return
func_44
;
}
unsigned
short
func_25
(
si1
)
{
char
*
l_42
[
6
]
;
func_36
(
*
l_42
,
func_44
(
si1
,
si1
,
si1
,
&
g_63
)
,
&
si2
,
si1
,
g_436
)
;
return
si1
;
}
unsigned
char
*
func_36
(
unsigned
char
*
si1
,
unsigned
p_38
,
unsigned
char
*
g_63
,
unsigned
g_436
,
int
*
p_54
)
{
func_44
(
p_38
,
p_38
,
0
,
(
func_51
(
p_38
,
&
g_63
,
p_38
,
p_38
)
,
&
g_63
)
)
;
si2
=
p_38
;
return
func_1
;
}
unsigned
func_44
(
long
long
p_45
,
unsigned
p_46
,
short
p_47
,
unsigned
char
*
*
p_48
)
{
while
(
si2
++
)
;
return
3
;
}
long
long
func_51
(
unsigned
p_52
,
unsigned
char
*
*
p_53
,
unsigned
p_54
,
unsigned
char
p_55
)
{
return
si2
=
safe_mod_func_int8_t_s_s
(
p_54
,
si2
)
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
si2
,
print_hash_value
)
;
return
0
;
}
