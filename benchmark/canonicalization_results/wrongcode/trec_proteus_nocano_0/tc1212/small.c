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
a
,
b
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
c
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
*
b
*=
++
*
b
;
return
*
b
;
}
int
main
(
)
{
c
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
