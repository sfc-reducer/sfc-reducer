char
safe_mod_func_uint8_t_u_u
(
unsigned
char
ui1
,
unsigned
ui2
)
{
return
ui2
?
ui2
:
ui1
%
ui1
;
}
union
{
int
f0
;
}
g_24
;
char
*
g_62
;
int
g_93
;
int
*
*
*
g_124
;
char
func_56
(
)
;
int
f0
(
ui1
)
{
int
*
f0
=
&
g_93
;
int
*
*
l_223
=
&
f0
;
*
*
g_124
=
&
ui1
;
for
(
g_24
.
f0
=
11
;
g_24
.
f0
;
g_24
.
f0
--
)
{
if
(
*
g_62
)
break
;
int
*
*
*
l_235
=
&
l_223
;
ui1
=
safe_mod_func_uint8_t_u_u
(
func_56
(
g_93
)
^
*
*
*
l_235
,
*
f0
)
;
}
return
*
f0
;
}
char
func_56
(
unsigned
p_57
)
{
return
p_57
;
}
