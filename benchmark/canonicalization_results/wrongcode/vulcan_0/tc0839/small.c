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
g_326
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
struct
x
{
unsigned
print_hash_value
;
}
;
const
unsigned
char
g_163
=
249UL
;
int
p_9
;
int
*
g_428
=
&
p_9
;
char
func_4
(
struct
x
,
short
,
short
,
unsigned
char
,
int
)
;
unsigned
func_1
(
)
{
struct
x
l_10
=
{
0xA971867BL
}
;
unsigned
x
=
*
g_428
=
func_4
(
l_10
,
p_9
,
p_9
,
p_9
,
p_9
)
<
g_163
;
return
p_9
;
}
char
func_4
(
struct
x
x
,
short
p_6
,
short
p_7
,
unsigned
char
p_8
,
int
p_9
)
{
return
p_9
;
}
int
main
(
)
{
int
p_9
=
func_1
(
)
;
platform_main_end
(
p_9
,
p_9
)
;
return
0
;
}
