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
print_hash_value
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
int
g_17
[
]
;
int
print_hash_value
=
0xA750F617L
;
static
int
*
g_240
=
&
g_17
[
1
]
;
int
*
g_996
=
&
print_hash_value
;
unsigned
short
func_9
(
unsigned
short
,
unsigned
,
unsigned
,
unsigned
)
;
unsigned
func_1
(
)
{
int
*
x
=
&
g_17
[
1
]
;
func_9
(
print_hash_value
,
print_hash_value
,
print_hash_value
,
1
)
;
func_9
(
*
x
,
1
,
*
g_996
=
*
x
,
*
x
)
;
return
*
x
;
}
unsigned
short
func_9
(
unsigned
short
print_hash_value
,
unsigned
x
,
unsigned
p_12
,
unsigned
p_13
)
{
*
g_240
=
*
g_996
;
return
print_hash_value
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
print_hash_value
,
print_hash_value
)
;
return
0
;
}
