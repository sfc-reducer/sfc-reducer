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
void
c
(
int
a
,
int
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
struct
a
{
int
a
;
}
;
int
a
=
1
;
static
const
int
*
g
=
&
a
;
unsigned
short
h
(
)
;
unsigned
b
(
)
{
struct
a
a
=
{
1
}
;
h
(
)
;
return
a
.
a
;
}
unsigned
short
h
(
b
)
{
int
*
e
=
&
a
;
*
e
&=
0
;
*
e
=
*
g
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
b
(
)
;
c
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
