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
p_23
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
p_23
{
const
;
}
;
union
p_23
g_89
;
int
p_23
;
unsigned
short
*
*
l_186
;
short
g_404
;
unsigned
long
long
func_21
(
short
,
char
*
*
*
,
unsigned
long
long
,
char
*
*
,
unsigned
)
;
int
*
func_44
(
unsigned
,
char
*
*
*
,
union
p_23
,
int
,
char
*
*
)
;
short
func_1
(
)
{
char
*
*
l_2
;
char
*
*
*
l_3
=
&
l_2
;
short
*
l_403
=
&
g_404
;
unsigned
short
*
*
*
l_405
=
&
l_186
;
func_21
(
*
l_403
,
l_3
,
l_405
==
&
l_186
,
*
l_3
,
g_404
)
;
return
g_404
;
}
unsigned
long
long
func_21
(
short
p_23
,
char
*
*
*
l_186
,
unsigned
long
long
p_24
,
char
*
*
p_25
,
unsigned
p_26
)
{
union
p_23
*
l_572
=
&
g_89
;
func_44
(
++
p_24
,
l_186
,
*
l_572
,
g_404
,
*
l_186
)
;
return
g_404
;
}
int
*
func_44
(
unsigned
p_45
,
char
*
*
*
p_46
,
union
p_23
p_47
,
int
p_48
,
char
*
*
p_49
)
{
int
*
l_186
=
&
p_23
;
*
l_186
=
p_45
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
p_23
,
g_404
)
;
return
0
;
}
