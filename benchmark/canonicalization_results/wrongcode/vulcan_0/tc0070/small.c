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
platform_main_end
,
g_5
)
{
printf
(
"checksum = %x\n"
,
g_5
)
;
}
int
g_5
;
int
print_hash_value
;
static
int
*
g_37
=
&
print_hash_value
;
static
const
int
*
g_45
=
&
print_hash_value
;
unsigned
func_1
(
)
{
for
(
g_5
=
0
;
g_5
!=
26
;
g_5
++
)
{
print_hash_value
=
23
;
if
(
*
g_45
)
break
;
}
*
g_37
^=
g_5
;
return
*
g_45
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
g_5
,
g_5
)
;
return
0
;
}
