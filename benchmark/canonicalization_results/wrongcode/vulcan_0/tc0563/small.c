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
g_41
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
struct
S1
{
char
f0
;
unsigned
x
;
int
print_hash_value
;
}
;
struct
S2
{
struct
S1
x
;
}
;
struct
S1
g_18
;
struct
S2
x
=
{
0xA0L
}
;
unsigned
func_1
(
)
{
x
.
x
=
g_18
;
x
.
x
=
x
.
x
;
return
x
.
x
.
f0
;
}
int
main
(
)
{
int
x
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
