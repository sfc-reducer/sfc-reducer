int
printf
(
const
char
*
,
...
)
;
int
a
;
void
b
(
__m128
,
__m128d
)
{
printf
(
"%x"
,
a
)
;
}
static
unsigned
*
d
=
&
a
;
char
f
(
)
{
for
(
;
a
!=
10
;
a
++
)
if
(
*
d
)
break
;
return
a
;
}
char
main
(
)
{
f
(
)
;
a
++
;
b
(
a
,
a
)
;
return
0
;
}
