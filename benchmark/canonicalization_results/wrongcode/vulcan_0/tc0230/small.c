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
l_955
)
{
printf
(
"checksum = %x\n"
,
l_955
)
;
}
int
l_955
;
unsigned
*
*
g_367
;
static
const
int
*
g_466
=
&
l_955
;
static
int
*
func_7
(
const
int
*
*
,
unsigned
short
,
int
*
,
int
,
int
*
*
)
;
static
const
int
*
*
func_13
(
char
)
;
unsigned
func_1
(
)
{
int
*
printf
=
&
l_955
;
func_7
(
func_13
(
l_955
)
,
l_955
,
printf
,
*
*
g_367
,
&
printf
)
;
return
l_955
;
}
int
*
func_7
(
const
int
*
*
p_8
,
unsigned
short
p_9
,
int
*
l_955
,
int
printf
,
int
*
*
p_12
)
{
*
l_955
=
0x93A7507CL
;
*
l_955
=
*
*
p_8
;
return
l_955
;
}
const
int
*
*
func_13
(
char
p_14
)
{
const
int
*
*
l_951
=
&
g_466
;
return
l_951
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
l_955
,
l_955
)
;
return
0
;
}
