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
l_397
,
g_326
)
{
printf
(
"checksum = %x\n"
,
l_397
)
;
}
int
l_397
;
char
*
*
print_hash_value
;
unsigned
func_1
(
)
{
long
l_395
=
-
1L
;
char
*
*
*
l_396
=
&
print_hash_value
;
int
*
printf
=
&
l_397
;
*
printf
=
l_395
>
(
l_396
!=
&
print_hash_value
)
;
return
l_397
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
l_397
,
l_397
)
;
return
0
;
}
