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
func_1
,
g_5
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
do
{
print_hash_value
++
;
if
(
*
g_45
)
break
;
}
while
(
g_5
++
)
;
++
*
g_37
;
return
*
g_37
;
}
int
main
(
)
{
func_1
(
)
;
platform_main_end
(
g_5
,
print_hash_value
)
;
return
0
;
}
