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
p_18
,
g_84
)
{
printf
(
"checksum = %x\n"
,
p_18
)
;
}
char
p_18
;
unsigned
*
g_202
;
char
*
g_478
=
&
p_18
;
unsigned
char
func_10
(
short
,
int
)
;
char
func_17
(
unsigned
)
;
unsigned
func_1
(
)
{
func_10
(
2L
,
p_18
)
;
return
p_18
;
}
unsigned
char
func_10
(
short
p_18
,
int
l_843
)
{
func_17
(
p_18
)
;
return
p_18
;
}
char
func_17
(
unsigned
p_18
)
{
unsigned
*
*
l_843
=
&
g_202
;
unsigned
*
*
l_846
;
*
g_478
=
l_843
!=
(
l_846
=
l_843
)
|
p_18
;
return
p_18
;
}
int
main
(
)
{
int
l_843
=
func_1
(
)
;
platform_main_end
(
p_18
,
l_843
)
;
return
0
;
}
