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
static
const
int
*
c
=
&
a
;
static
int
*
d
=
&
a
;
int
*
e
(
short
,
short
)
;
short
f
(
short
,
int
)
;
unsigned
g
(
)
{
e
(
a
,
f
(
a
,
a
)
)
;
return
a
;
}
int
*
e
(
short
a
,
short
b
)
{
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
short
f
(
short
b
,
int
c
)
{
for
(
;
a
<
1
;
a
+=
1
)
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
int
a
=
g
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
