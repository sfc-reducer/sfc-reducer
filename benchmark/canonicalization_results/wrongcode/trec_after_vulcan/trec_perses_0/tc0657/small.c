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
b
;
int
*
const
c
=
&
b
;
static
int
*
const
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
b
;
unsigned
f
(
)
{
int
b
=
1
;
*
*
d
=
b
;
*
*
d
=
*
e
;
return
b
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
f
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
