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
p_29
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
unsigned
p_29
;
int
x
[
]
;
int
*
const
g_32
=
&
x
[
1
]
;
static
int
*
const
*
g_31
=
&
g_32
;
unsigned
func_14
(
unsigned
char
,
int
,
unsigned
short
,
short
)
;
short
func_20
(
unsigned
)
;
char
func_27
(
int
,
int
*
const
*
)
;
unsigned
func_1
(
)
{
unsigned
p_29
=
0x63L
;
func_14
(
p_29
,
p_29
,
p_29
,
func_20
(
p_29
)
)
;
return
*
x
;
}
unsigned
func_14
(
unsigned
char
x
,
int
p_21
,
unsigned
short
p_17
,
short
p_18
)
{
*
*
g_31
=
p_29
;
return
p_29
;
}
short
func_20
(
unsigned
p_21
)
{
func_27
(
p_21
,
g_31
)
;
return
p_21
;
}
char
func_27
(
int
p_28
,
int
*
const
*
p_29
)
{
*
*
g_31
=
p_28
;
return
*
x
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
p_29
,
p_29
)
;
return
0
;
}
