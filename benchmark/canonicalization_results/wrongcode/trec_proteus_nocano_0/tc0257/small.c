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
static
const
int
*
c
=
&
a
;
int
*
d
(
unsigned
)
;
unsigned
e
(
)
{
d
(
sizeof
a
)
;
return
*
c
;
}
int
*
d
(
unsigned
b
)
{
int
*
d
=
&
a
;
*
d
=
b
;
*
d
=
*
c
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
e
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
