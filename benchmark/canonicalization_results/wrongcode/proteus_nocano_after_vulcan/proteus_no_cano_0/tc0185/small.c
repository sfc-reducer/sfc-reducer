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
struct
S0
{
short
f0
;
short
x
;
short
print_hash_value
;
short
printf
;
}
;
struct
S2
{
struct
S0
f0
;
}
x
=
{
0x59F5L
}
;
short
func_1
(
)
{
struct
S2
l_281
=
{
0L
}
;
x
=
l_281
;
x
=
x
;
return
x
.
f0
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
