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
a
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
int
b
(
)
{
const
char
c
=
1
;
char
*
printf
=
&
c
;
++
*
printf
;
return
c
;
}
int
main
(
)
{
int
c
=
b
(
)
;
a
(
c
,
c
)
;
return
0
;
}
