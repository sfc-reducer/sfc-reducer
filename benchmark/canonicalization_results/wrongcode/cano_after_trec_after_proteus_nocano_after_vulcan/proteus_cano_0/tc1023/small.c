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
void
b
(
a
,
__m128
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
a
{
char
c
;
char
__m128
;
}
c
;
struct
a
a
=
{
1
}
;
char
d
(
)
{
c
=
a
;
c
=
c
;
return
c
.
c
;
}
char
main
(
)
{
char
a
=
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
