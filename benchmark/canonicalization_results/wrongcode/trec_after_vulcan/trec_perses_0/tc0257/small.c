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
union
a
{
char
c
;
}
;
int
b
;
static
const
int
*
d
=
&
b
;
int
*
c
(
unsigned
)
;
unsigned
e
(
)
{
union
a
a
=
{
1
}
;
int
*
b
=
c
(
a
.
c
)
;
return
*
b
;
}
int
*
c
(
unsigned
a
)
{
int
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
;
*
c
=
*
d
;
return
&
a
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
