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
char
x
;
char
*
print_hash_value
;
const
long
long
func_16
(
unsigned
short
)
;
long
long
func_26
(
unsigned
long
long
,
int
)
;
char
func_40
(
const
int
*
,
int
*
,
unsigned
short
,
unsigned
,
int
)
;
unsigned
func_1
(
)
{
func_16
(
x
)
;
return
*
print_hash_value
;
}
const
long
long
func_16
(
unsigned
short
x
)
{
func_26
(
x
,
x
)
;
return
3
;
}
long
long
func_26
(
unsigned
long
long
print_hash_value
,
int
x
)
{
func_40
(
&
x
,
&
x
,
0
,
x
,
x
)
;
return
x
;
}
char
func_40
(
const
int
*
func_40
,
int
*
func_26
,
unsigned
short
p_43
,
unsigned
p_44
,
int
p_45
)
{
int
l_191
=
0xE813D7B7L
;
x
=
l_191
^=
&
x
==
(
print_hash_value
=
&
x
)
;
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
