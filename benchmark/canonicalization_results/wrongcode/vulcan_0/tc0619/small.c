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
val
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
=
1L
;
const
unsigned
char
g_432
=
0xE1L
;
const
unsigned
char
*
const
p_58
=
&
g_432
;
short
func_56
(
int
*
,
int
,
unsigned
char
)
;
char
func_60
(
short
,
unsigned
short
,
int
*
,
int
*
)
;
unsigned
func_1
(
)
{
func_56
(
&
x
,
func_60
(
x
,
*
p_58
,
&
x
,
&
x
)
>
*
p_58
,
*
p_58
)
;
return
*
p_58
;
}
short
func_56
(
int
*
p_57
,
int
p_58
,
unsigned
char
func_60
)
{
char
x
=
*
p_57
&=
p_58
;
return
x
;
}
char
func_60
(
short
x
,
unsigned
short
p_62
,
int
*
p_63
,
int
*
p_64
)
{
return
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
x
,
x
)
;
return
0
;
}
