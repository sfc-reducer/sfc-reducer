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
c
;
static
int
*
d
=
&
c
;
static
const
int
*
e
=
&
c
;
unsigned
b
(
)
{
int
*
*
c
=
&
d
;
*
*
c
=
1
;
*
d
=
*
e
;
return
!
a
;
}
int
main
(
)
{
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
