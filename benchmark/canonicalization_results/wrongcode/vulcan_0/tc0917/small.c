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
l_552
,
g_578
)
{
printf
(
"checksum = %x\n"
,
l_552
)
;
}
static
unsigned
g_99
=
0xC9D536C3AC5B6CC6LL
;
int
l_552
=
0x929257CBL
;
static
int
*
print_hash_value
=
&
l_552
;
unsigned
func_1
(
)
{
int
*
*
printf
=
&
print_hash_value
;
if
(
*
printf
!=
print_hash_value
|
g_99
)
;
else
for
(
;
l_552
;
++
l_552
)
;
return
l_552
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
l_552
,
l_552
)
;
return
0
;
}
