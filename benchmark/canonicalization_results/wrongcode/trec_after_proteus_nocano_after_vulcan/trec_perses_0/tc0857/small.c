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
unsigned
c
=
1
;
static
const
unsigned
*
d
=
&
c
;
static
const
unsigned
*
*
const
e
=
&
d
;
unsigned
f
(
)
{
int
*
printf
=
&
a
;
unsigned
*
a
=
&
c
;
*
a
=
*
printf
;
*
a
=
*
*
e
;
return
*
a
;
}
int
main
(
)
{
f
(
)
;
b
(
c
,
a
)
;
return
0
;
}
