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
g_722
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
7L
;
static
const
int
*
g_647
=
&
x
;
static
int
*
g_722
=
&
x
;
int
print_hash_value
(
char
)
;
unsigned
func_1
(
)
{
print_hash_value
(
x
)
;
*
g_722
=
*
g_647
;
return
x
;
}
int
print_hash_value
(
char
print_hash_value
)
{
for
(
;
x
;
x
--
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
