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
f0
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
x
{
long
long
f0
;
int
x
;
}
g_28
;
struct
x
f0
=
{
0x0B499DA406727EBDLL
}
;
long
long
*
g_265
=
&
f0
.
f0
;
struct
x
*
g_333
=
&
g_28
;
unsigned
short
func_12
(
unsigned
,
long
long
,
unsigned
)
;
long
func_1
(
)
{
func_12
(
f0
.
f0
,
g_28
.
f0
,
f0
.
f0
)
;
return
*
g_265
;
}
unsigned
short
func_12
(
unsigned
x
,
long
long
printf
,
unsigned
g_28
)
{
struct
x
*
*
l_528
=
&
g_333
;
struct
x
*
l_572
=
&
f0
;
for
(
x
=
0
;
x
<=
7
;
x
+=
1
)
{
*
l_572
=
*
*
l_528
;
*
l_528
=
l_572
;
}
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
