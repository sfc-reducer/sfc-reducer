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
struct
c
{
char
a
;
}
;
struct
c
c
;
char
d
(
)
{
int
*
b
=
&
a
;
for
(
;
c
.
a
!=
9
;
++
c
.
a
)
{
int
*
*
c
=
&
b
;
*
b
=
++
a
;
--
*
c
;
}
return
a
;
}
char
main
(
)
{
d
(
)
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
