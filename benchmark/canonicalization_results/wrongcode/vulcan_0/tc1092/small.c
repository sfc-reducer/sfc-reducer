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
print_hash_value
,
g_68
)
{
printf
(
"checksum = %x\n"
,
g_68
)
;
}
int
g_68
;
int
*
print_hash_value
=
&
g_68
;
unsigned
long
long
g_241
;
char
func_37
(
)
;
unsigned
func_1
(
)
{
func_37
(
*
print_hash_value
)
;
return
*
print_hash_value
;
}
char
func_37
(
platform_main_end
)
{
unsigned
long
long
*
l_240
=
&
g_241
;
unsigned
long
long
*
l_244
=
&
g_241
;
unsigned
long
long
*
*
l_243
=
&
l_244
;
int
l_245
=
9L
;
unsigned
g_68
=
(
l_240
==
*
l_243
)
<
l_245
;
if
(
*
print_hash_value
)
print_hash_value
=
&
l_245
;
*
print_hash_value
=
g_68
;
return
g_68
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
g_68
,
g_68
)
;
return
0
;
}
