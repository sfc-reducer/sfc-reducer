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
unsigned
a
;
short
b
;
unsigned
c
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
static
unsigned
f
(
unsigned
short
,
unsigned
char
)
;
static
unsigned
g
(
)
{
return
f
(
a
,
a
)
;
}
unsigned
f
(
unsigned
short
a
,
unsigned
char
b
)
{
struct
a
*
c
=
&
d
;
*
c
=
e
;
*
c
=
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
g
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
