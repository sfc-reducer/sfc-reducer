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
g_988
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
x
[
]
;
unsigned
static
*
g_309
=
&
x
[
4
]
;
int
p_47
=
0x0764B585L
;
short
func_19
(
const
int
*
)
;
int
func_26
(
int
*
,
unsigned
,
int
*
,
int
*
,
int
)
;
int
*
func_42
(
unsigned
,
unsigned
,
unsigned
char
)
;
int
*
const
func_46
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
l_15
=
&
x
[
4
]
;
unsigned
p_47
=
*
l_15
=
func_19
(
0
)
;
return
p_47
;
}
short
func_19
(
const
int
*
l_49
)
{
int
*
l_987
=
&
p_47
;
*
l_987
&=
func_26
(
func_42
(
(
func_46
(
p_47
)
,
2
)
,
p_47
,
p_47
)
,
p_47
,
x
,
x
,
*
x
)
;
return
0
;
}
int
func_26
(
int
*
p_27
,
unsigned
p_28
,
int
*
p_29
,
int
*
p_30
,
int
p_31
)
{
return
*
g_309
;
}
int
*
func_42
(
unsigned
p_43
,
unsigned
p_44
,
unsigned
char
p_45
)
{
return
x
;
}
int
*
const
func_46
(
char
p_47
)
{
int
*
func_46
=
&
x
[
4
]
;
*
func_46
=
p_47
;
return
func_46
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
p_47
,
p_47
)
;
return
0
;
}
