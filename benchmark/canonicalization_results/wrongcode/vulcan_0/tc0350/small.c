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
int
safe_add_func_int32_t_s_s
(
si1
,
si2
)
{
return
si1
+
si2
;
}
void
platform_main_end
(
x
,
g_54
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
short
si2
;
short
*
g_416
=
&
si2
;
short
func_15
(
unsigned
,
unsigned
short
,
unsigned
)
;
char
func_1
(
)
{
func_15
(
si2
,
si2
,
si2
)
;
return
si2
;
}
short
func_15
(
unsigned
si2
,
unsigned
short
x
,
unsigned
func_15
)
{
short
*
*
l_741
;
short
*
*
*
l_740
=
&
l_741
;
unsigned
l_744
=
0xA58EL
;
if
(
safe_add_func_int32_t_s_s
(
l_740
!=
&
l_741
,
l_744
)
)
*
g_416
=
l_744
;
return
si2
;
}
int
main
(
)
{
int
x
=
func_1
(
)
;
platform_main_end
(
si2
,
x
)
;
return
0
;
}
