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
l_630
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
int
g_20
[
]
[
2
]
;
static
int
*
g_366
=
g_20
[
1
]
;
int
func_1
(
)
{
int
*
l_630
=
g_20
[
1
]
;
int
l_681
=
0x7BE79D9FL
;
*
g_366
=
l_681
;
*
g_366
=
*
l_630
;
return
*
g_366
;
}
int
main
(
)
{
int
l_630
=
func_1
(
)
;
platform_main_end
(
l_630
,
l_630
)
;
return
0
;
}
