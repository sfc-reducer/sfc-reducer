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
f0
)
{
printf
(
"checksum = %x\n"
,
f0
)
;
}
struct
S0
{
short
f0
;
int
x
;
}
g_67
=
{
0xAEC7L
}
;
struct
S0
x
;
int
func_1
(
)
{
x
=
g_67
;
x
=
x
;
return
x
.
f0
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
x
,
x
)
;
return
0
;
}
