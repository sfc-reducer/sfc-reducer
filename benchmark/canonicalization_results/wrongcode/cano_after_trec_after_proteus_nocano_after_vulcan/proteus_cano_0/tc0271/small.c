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
char
a
(
__m128
,
b
)
{
return
--
b
;
}
void
c
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
char
b
;
char
d
(
)
{
char
*
c
=
&
b
;
*
c
=
a
(
1
,
c
!=
&
b
)
;
return
*
c
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
c
(
b
,
b
)
;
return
0
;
}
