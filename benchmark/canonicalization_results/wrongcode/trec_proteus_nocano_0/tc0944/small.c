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
unsigned
b
,
char
*
c
,
int
d
)
{
a
+=
b
;
}
void
c
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
struct
a
{
long
a
;
int
b
;
}
;
struct
a
d
;
struct
a
e
=
{
1
}
;
short
f
(
)
{
struct
a
*
a
=
&
d
;
*
a
=
e
;
*
a
=
*
a
;
return
sizeof
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
d
.
a
,
""
,
a
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
