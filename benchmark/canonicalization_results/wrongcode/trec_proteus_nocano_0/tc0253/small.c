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
int
*
c
=
&
a
;
int
d
(
)
{
int
*
*
b
=
&
c
;
*
c
=
&
c
!=
b
;
--
*
c
;
return
a
;
}
int
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
