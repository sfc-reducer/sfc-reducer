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
b
,
a
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
c
;
int
*
*
d
;
int
e
(
)
{
int
*
b
=
&
c
;
int
*
*
*
printf
=
&
d
;
*
b
=
&
d
!=
printf
;
*
b
|=
0xB
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
b
=
e
(
)
;
a
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
