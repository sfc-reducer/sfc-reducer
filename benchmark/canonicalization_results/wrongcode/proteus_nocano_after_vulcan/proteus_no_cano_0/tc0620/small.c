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
long
safe_sub_func_int64_t_s_s
(
x
,
si2
)
{
return
-
si2
;
}
void
platform_main_end
(
x
,
func_1
)
{
printf
(
"checksum = %x\n"
,
func_1
)
;
}
short
x
;
const
unsigned
long
long
si2
(
int
,
char
,
unsigned
,
unsigned
short
)
;
char
func_1
(
)
{
return
si2
(
x
,
x
,
x
,
x
)
;
}
const
unsigned
long
long
si2
(
int
si2
,
char
si1
,
unsigned
p_5
,
unsigned
short
p_6
)
{
int
l_234
=
0L
;
unsigned
short
*
l_236
;
unsigned
short
*
*
l_235
=
&
l_236
;
short
*
l_239
=
&
x
;
*
l_239
|=
safe_sub_func_int64_t_s_s
(
l_234
,
(
*
l_235
=
&
p_6
)
==
&
p_6
)
;
return
l_234
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
x
,
x
)
;
return
0
;
}
